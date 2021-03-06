//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFFeedTopPanelControllerInput-Protocol.h>

@class NSString;
@protocol IFFeedTopPanelControllerInput, IFFeedTopPanelControllerInput><IFMemeSummaryControllerOutput;

@interface IFFeedTopPanelController : NSObject <IFFeedTopPanelControllerInput>
{
    NSObject<IFFeedTopPanelControllerInput><IFMemeSummaryControllerOutput> *_memeSummaryController;
    NSObject<IFFeedTopPanelControllerInput> *_nativeAdInfoController;
    CDUnknownBlockType _closeModuleHandler;
    CDUnknownBlockType _changeStateHandler;
    unsigned long long _controllerState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long controllerState; // @synthesize controllerState=_controllerState;
@property(copy, nonatomic) CDUnknownBlockType changeStateHandler; // @synthesize changeStateHandler=_changeStateHandler;
@property(copy, nonatomic) CDUnknownBlockType closeModuleHandler; // @synthesize closeModuleHandler=_closeModuleHandler;
@property(retain, nonatomic) NSObject<IFFeedTopPanelControllerInput> *nativeAdInfoController; // @synthesize nativeAdInfoController=_nativeAdInfoController;
@property(retain, nonatomic) NSObject<IFFeedTopPanelControllerInput><IFMemeSummaryControllerOutput> *memeSummaryController; // @synthesize memeSummaryController=_memeSummaryController;
@property(nonatomic) _Bool smilesHidden;
- (void)updateContentNativeAdWithTapOnInfoHandler:(CDUnknownBlockType)arg1;
- (void)updateMemeSummaryInfo:(id)arg1 memeChanged:(_Bool)arg2 feedType:(long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

