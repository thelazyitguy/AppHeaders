//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGPresentationManagerDelegate-Protocol.h>

@class NSString;

@interface IBGFeaturesInvocationManager : NSObject <IBGPresentationManagerDelegate>
{
    CDUnknownBlockType _invocationBlock;
    CDUnknownBlockType _willShowFeaturesRequestHandler;
    CDUnknownBlockType _didDismissFeaturesRequestHandler;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType didDismissFeaturesRequestHandler; // @synthesize didDismissFeaturesRequestHandler=_didDismissFeaturesRequestHandler;
@property(copy, nonatomic) CDUnknownBlockType willShowFeaturesRequestHandler; // @synthesize willShowFeaturesRequestHandler=_willShowFeaturesRequestHandler;
@property(copy, nonatomic) CDUnknownBlockType invocationBlock; // @synthesize invocationBlock=_invocationBlock;
- (void).cxx_destruct;
- (Class)windowClass;
- (void)didDismissWithExtraParameters:(id)arg1;
- (void)didInvoke;
- (void)invoke;
- (void)setDidDismissFeaturesRequest:(CDUnknownBlockType)arg1;
- (void)setWillShowFeaturesRequest:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

