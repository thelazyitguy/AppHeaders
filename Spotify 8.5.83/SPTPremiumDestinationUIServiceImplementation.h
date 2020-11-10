//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPremiumDestinationUIService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTGLUEService, SPTPremiumDestinationUIHubComponentFactory, SPTVideoFeature;

@interface SPTPremiumDestinationUIServiceImplementation : NSObject <SPTPremiumDestinationUIService>
{
    id <SPTGLUEService> _glueService;
    id <SPTVideoFeature> _videoFeature;
    id <SPTPremiumDestinationUIHubComponentFactory> _componentFactory;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTPremiumDestinationUIHubComponentFactory> componentFactory; // @synthesize componentFactory=_componentFactory;
@property(nonatomic) __weak id <SPTVideoFeature> videoFeature; // @synthesize videoFeature=_videoFeature;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
- (id)provideVideoPlayerLoader;
- (id)provideComponentLayoutManager;
- (id)providePremiumDestinationUIGLUETheme;
- (id)provideHubsComponentRegistry;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

