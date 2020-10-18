#include "pch.h"
#include "../bullshit collector/scene.h"

   //arrange act assert
TEST(TestRealization, PlayerUploadTexture) {	
	GraphicsPlayer player;
	ASSERT_TRUE(player.upload_texture("C:/Users/Dolba/source/repos/bullshit collector/bullshit collector/face_left.png",
		                              "C:/Users/Dolba/source/repos/bullshit collector/bullshit collector/face_right.png"
	));	
}

TEST(TestRealization, GamebackgroundUploadTexture) {
	GameBackground fone;
	ASSERT_TRUE(fone.upload_background("C:/Users/Dolba/source/repos/bullshit collector/bullshit collector/fone.png"));
}

TEST(TestRealization, ConstructorTestWALL) {
	b2Vec2 gravity(0.f, 9.8f);
	b2World world(gravity);
	Rectangle_ wall;
	ASSERT_TRUE(wall.constructor_test(world, 300, 40, 200, 200, "C:/Users/Dolba/source/repos/bullshit collector/bullshit collector/wall.png"));
}
















//1)������� �������� ������
//2)���������� � ��������� ������� �������� ����������
//3)������� ������ google test
//4)��� �������� ���������� ������ �� �������� ������ (������� ������)
//5)���������� ���������� � google test �������
//6)���������� ������������ ���� ������������ ����� (� ������ ��������)("../") � ������� �� ����� ����
//7)�������� �������� ����� � ������ (������ ������ ���� �� google test --> ��������--> �������� ������������ �������).������� .h � .cpp
//8)��������� �������������� ����������������� ��������� � ������� google test( C/C++ ---> ��� ��������� ----> �������������� ������ ���������)
//  ����� ��������� ������!!!