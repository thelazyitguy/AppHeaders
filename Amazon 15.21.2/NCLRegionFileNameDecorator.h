//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NCLFileNameDecorator-Protocol.h"

@class NSString;
@protocol NCLRunContextProvider;

@interface NCLRegionFileNameDecorator : NSObject <NCLFileNameDecorator>
{
    NSString *_currentRegion;
    NSObject<NCLRunContextProvider> *_runContextProvider;
}

@property(retain, nonatomic) NSObject<NCLRunContextProvider> *runContextProvider; // @synthesize runContextProvider=_runContextProvider;
@property(retain, nonatomic) NSString *currentRegion; // @synthesize currentRegion=_currentRegion;
- (void).cxx_destruct;
- (id)computeRegionFromProvider;
- (id)decorate:(id)arg1;
- (id)initWithContextProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
