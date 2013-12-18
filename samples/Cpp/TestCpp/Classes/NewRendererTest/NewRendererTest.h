//
// Created by NiTe Luo on 11/1/13.
//



#ifndef __NewRendererTest_H_
#define __NewRendererTest_H_

#include "cocos2d.h"
#include "../testBasic.h"
#include "../BaseTest.h"

using namespace std;

#define kTagSpriteBatchNode 100
#define kTagClipperNode     101
#define kTagContentNode     102

class NewRendererTestScene : public TestScene
{
public:
    virtual void runThisTest();
};

class MultiSceneTest : public BaseTest
{
public:
    CREATE_FUNC(MultiSceneTest);
    virtual string title();
    virtual string subtitle();
    virtual void onEnter();

    void restartCallback(Object* sender);
    void nextCallback(Object* sender);
    void backCallback(Object* sender);

protected:
    MultiSceneTest();
    virtual ~MultiSceneTest();

};

class NewSpriteTest : public MultiSceneTest
{
public:
    CREATE_FUNC(NewSpriteTest);

    virtual string title();
    virtual string subtitle();

    void createSpriteTest();
    void createNewSpriteTest();
    void onTouchesEnded(const std::vector<Touch*>& touches, Event* event);

protected:
    NewSpriteTest();
    virtual ~NewSpriteTest();
};

class NewSpriteBatchTest : public MultiSceneTest
{
public:

    CREATE_FUNC(NewSpriteBatchTest);
    virtual string title();
    virtual string subtitle();

    void onTouchesEnded(const vector<Touch*>& touches, Event* event);
    void addNewSpriteWithCoords(Point p);

protected:
    NewSpriteBatchTest();
    virtual ~NewSpriteBatchTest();
};

class NewClippingNodeTest : public MultiSceneTest
{
public:

    CREATE_FUNC(NewClippingNodeTest);
    virtual string title();
    virtual string subtitle();

    void onTouchesBegan(const std::vector<Touch*>& touches, Event  *event);
    void onTouchesMoved(const std::vector<Touch*>& touches, Event  *event);
    void onTouchesEnded(const std::vector<Touch*>& touches, Event  *event);

protected:
    NewClippingNodeTest();
    virtual ~NewClippingNodeTest();

    bool _scrolling;
    Point _lastPoint;
};

class NewDrawNodeTest : public MultiSceneTest
{
public:

    CREATE_FUNC(NewDrawNodeTest)
    virtual string title();
    virtual string subtitle();

protected:
    NewDrawNodeTest();
    virtual ~NewDrawNodeTest();
};

class NewCullingTest : public MultiSceneTest
{
public:
    
    CREATE_FUNC(NewCullingTest)
    virtual string title();
    virtual string subtitle();
    
protected:
    NewCullingTest();
    virtual ~NewCullingTest();
};

#endif //__NewRendererTest_H_