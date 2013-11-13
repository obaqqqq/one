#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"

using namespace cocos2d;
using namespace CocosDenshion;

CCScene* HelloWorld::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // 'layer' is an autorelease object
    HelloWorld *layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    // 1. super init first
    if ( !CCLayer::init() )
    {
        return false;
    }

    // 画面の幅
    CCSize winSize = CCDirector::sharedDirector()->getWinSize();
    // 画像ファイルとrectを指定してスプライト作成

    CCSprite* player = CCSprite::create("sample1.png", CCRectMake(0, 0, 52, 52));
    
    // スプライトの位置をセット
    player->setPosition(ccp(winSize.width/5, player->getContentSize().height / 2));
    
    // tag セット
    player->setTag(1);
    
    // レイヤに追加
    this->addChild(player);
    
    
    return true;
}
