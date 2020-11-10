//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFISceneProtocol-Protocol.h"

@class CALayer, NFISceneManager, NSDictionary, NSNumber, NSString, UIView;

@interface NFIScene : NSObject <NFISceneProtocol>
{
    NSDictionary *_sceneData;
    long long _sceneTransitionState;
    UIView *_view;
    NFISceneManager *_sceneManager;
    NFIScene *_previousScene;
    long long _previousSceneIdentifier;
    CDUnknownBlockType _sceneTransitionCompletionBlock;
    CALayer *_sceneLayer;
    NSNumber *_presentationSessionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *presentationSessionId; // @synthesize presentationSessionId=_presentationSessionId;
@property(retain, nonatomic) CALayer *sceneLayer; // @synthesize sceneLayer=_sceneLayer;
@property(retain, nonatomic) NSDictionary *sceneData; // @synthesize sceneData=_sceneData;
@property(readonly) long long sceneTransitionState; // @synthesize sceneTransitionState=_sceneTransitionState;
@property(copy, nonatomic) CDUnknownBlockType sceneTransitionCompletionBlock; // @synthesize sceneTransitionCompletionBlock=_sceneTransitionCompletionBlock;
@property long long previousSceneIdentifier; // @synthesize previousSceneIdentifier=_previousSceneIdentifier;
@property(retain, nonatomic) NFIScene *previousScene; // @synthesize previousScene=_previousScene;
@property(nonatomic) __weak NFISceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void)parallaxUpdate;
- (void)logPresentation;
- (void)logPresentationSessionEndedIfNecessary;
- (id)loggingCommand;
- (id)loggingView;
- (id)requiredAssets;
- (void)timeoutPulse:(double)arg1;
- (void)timeOut;
- (void)transitionBack:(CDUnknownBlockType)arg1;
- (void)transitionOut:(CDUnknownBlockType)arg1;
- (void)transitionIn:(CDUnknownBlockType)arg1;
- (void)addChild:(id)arg1;
- (void)layoutSceneContent;
- (void)prepareForLayout;
- (void)sceneAddedToView;
- (id)initWithSize:(struct CGSize)arg1 sceneData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
