//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLifecycleService-Protocol.h"

@interface _TtC16AppKernelFeature36KernelLifecycleServiceImplementation : NSObject <SPTLifecycleService>
{
    // Error parsing type: , name: registeredIdentifiers
    // Error parsing type: , name: didFinishLaunchingClosures
    // Error parsing type: , name: applicationWillTerminateClosures
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
- (id)init;
- (void)registerApplicationWillTerminateFunctionalityWithIdentifier:(id)arg1 execute:(CDUnknownBlockType)arg2;
- (void)registerDidFinishLaunchingFunctionalityWithIdentifier:(id)arg1 execute:(CDUnknownBlockType)arg2;

@end

