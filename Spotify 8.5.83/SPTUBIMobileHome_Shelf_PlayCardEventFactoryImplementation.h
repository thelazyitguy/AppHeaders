//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileHome_Shelf_PlayCardEventFactory-Protocol.h"

@class NSArray, NSString;
@protocol SPTUBIEventAbsoluteLocation;

@interface SPTUBIMobileHome_Shelf_PlayCardEventFactoryImplementation : NSObject <SPTUBIMobileHome_Shelf_PlayCardEventFactory>
{
    NSArray *_components;
    id <SPTUBIEventAbsoluteLocation> _parentAbsoluteLocation;
}

+ (id)factoryWithIdentifier:(id)arg1 position:(long long)arg2 uri:(id)arg3 components:(id)arg4 parentAbsoluteLocation:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTUBIEventAbsoluteLocation> parentAbsoluteLocation; // @synthesize parentAbsoluteLocation=_parentAbsoluteLocation;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)hitPlayWithItemToBePlayed:(id)arg1;
- (id)impression;
- (id)absoluteLocation;
- (id)_location;
- (id)initWithIdentifier:(id)arg1 position:(long long)arg2 uri:(id)arg3 components:(id)arg4 parentAbsoluteLocation:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

