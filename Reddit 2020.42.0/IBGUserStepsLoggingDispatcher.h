//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGUserSetpsListenerDelegate-Protocol.h>

@class IBGDALService, IBGUserStepsLogger, IBGVisualUserStepsLogger, NSString;

@interface IBGUserStepsLoggingDispatcher : NSObject <IBGUserSetpsListenerDelegate>
{
    IBGVisualUserStepsLogger *_visualUserStepsLogger;
    IBGUserStepsLogger *_userStepsLogger;
    IBGDALService *_dataLayerService;
}

@property(retain, nonatomic) IBGDALService *dataLayerService; // @synthesize dataLayerService=_dataLayerService;
@property(retain, nonatomic) IBGUserStepsLogger *userStepsLogger; // @synthesize userStepsLogger=_userStepsLogger;
@property(retain, nonatomic) IBGVisualUserStepsLogger *visualUserStepsLogger; // @synthesize visualUserStepsLogger=_visualUserStepsLogger;
- (void).cxx_destruct;
- (void)updateTopViewWithTopViewName:(id)arg1 topViewChanged:(_Bool)arg2 isValidwindow:(_Bool)arg3 canTakeScreenshot:(_Bool)arg4 eventName:(id)arg5;
- (void)addStep:(id)arg1;
- (void)cleanUserSteps;
- (id)initWithDataLayerService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

