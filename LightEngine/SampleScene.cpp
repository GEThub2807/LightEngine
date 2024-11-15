#include "SampleScene.h"

#include "PlantEntity.h"
#include "ZombieEntity.h"

#include "Debug.h"

void SampleScene::OnInitialize()
{
	pPlant1 = CreateEntity<PlantEntity>(30, sf::Color::Green);
	pPlant1->SetTag(1);
	pPlant1->SetPosition(100, 150);
	pPlant1->SetCapacity(6);
	pPlant1->SetAmmoLeft(6);
	pPlant1->SetHP(1);

	pPlant2 = CreateEntity<PlantEntity>(30, sf::Color::Green);
	pPlant1->SetTag(1);
	pPlant2->SetPosition(100, 300);
	pPlant2->SetCapacity(6);
	pPlant2->SetAmmoLeft(6);
	pPlant2->SetHP(1);

	pPlant3 = CreateEntity<PlantEntity>(30, sf::Color::Green);
	pPlant1->SetTag(1);
	pPlant3->SetPosition(100, 450);
	pPlant3->SetCapacity(6);
	pPlant3->SetAmmoLeft(6);
	pPlant3->SetHP(1);



	pZombie1 = CreateEntity<ZombieEntity>(30, sf::Color::Yellow);
	pPlant1->SetTag(2);
	pZombie1->SetPosition(1000, 150);
	pZombie1->SetHP(7);
	pZombie1->GoToPosition(pPlant1->GetPosition().x, (pPlant1->GetPosition().y), 100.0f);

	pZombie2 = CreateEntity<ZombieEntity>(30, sf::Color::Yellow);
	pPlant1->SetTag(2);
	pZombie2->SetPosition(1000, 300);
	pZombie2->SetHP(7);
	pZombie2->GoToPosition(pPlant2->GetPosition().x, (pPlant2->GetPosition().y), 100.0f);

	pZombie3 = CreateEntity<ZombieEntity>(30, sf::Color::Yellow);
	pPlant1->SetTag(2);
	pZombie3->SetPosition(1000, 450);
	pZombie3->SetHP(7);
	pZombie3->GoToPosition(pPlant3->GetPosition().x, (pPlant3->GetPosition().y), 100.0f);

	pEntitySelected = nullptr;
}

void SampleScene::OnEvent(const sf::Event& event)
{
	if (event.type != sf::Event::EventType::MouseButtonPressed)
		return;

	if (event.mouseButton.button == sf::Mouse::Button::Right)
	{
		TrySetSelectedEntity(pZombie1, event.mouseButton.x, event.mouseButton.y);
	}

	if (event.mouseButton.button == sf::Mouse::Button::Left)
	{
		if (pEntitySelected != nullptr)
		{
			pEntitySelected->GoToPosition(event.mouseButton.x, event.mouseButton.y, 100.f);
		}
	}
}

void SampleScene::TrySetSelectedEntity(ZombieEntity* pEntity, int x, int y)
{
	if (pEntity->IsInside(x, y) == false)
		return;

	pEntitySelected = pEntity;
}

void SampleScene::OnUpdate()
{
	if (pEntitySelected != nullptr)
	{
		sf::Vector2f position = pEntitySelected->GetPosition(0.5f, 0.5f);
		Debug::DrawCircle(position.x, position.y, 10, sf::Color::Blue);
	}
}