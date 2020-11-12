//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileTrackPageFreeEventFactory-Protocol.h"

@class NSArray, NSString;
@protocol SPTUBIEventAbsoluteLocation;

@interface SPTUBIMobileTrackPageFreeEventFactoryImplementation : NSObject <SPTUBIMobileTrackPageFreeEventFactory>
{
    NSArray *_components;
    id <SPTUBIEventAbsoluteLocation> _parentAbsoluteLocation;
}

+ (id)factoryWithPageReason:(id)arg1 parentAbsoluteLocation:(id)arg2;
+ (id)factoryWithPageReason:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTUBIEventAbsoluteLocation> parentAbsoluteLocation; // @synthesize parentAbsoluteLocation=_parentAbsoluteLocation;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)itemFactoryWithIdentifier:(id)arg1 position:(long long)arg2 uri:(id)arg3;
- (id)appearsOnCarouselFactory;
- (id)trackCloudFactory;
- (id)shufflePlayButtonFactory;
- (id)addToPlaylistButtonFactory;
- (id)toolbarFactory;
- (id)absoluteLocation;
- (id)_location;
- (id)initWithPageReason:(id)arg1 parentAbsoluteLocation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
