//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileSearch_Content_OnlineResults_TopResults_RecommendationResults_RecommendationItemEventFactory-Protocol.h"

@class NSArray, NSString;
@protocol SPTUBIEventAbsoluteLocation;

@interface SPTUBIMobileSearch_Content_OnlineResults_TopResults_RecommendationResults_RecommendationItemEventFactoryImplementation : NSObject <SPTUBIMobileSearch_Content_OnlineResults_TopResults_RecommendationResults_RecommendationItemEventFactory>
{
    NSArray *_components;
    id <SPTUBIEventAbsoluteLocation> _parentAbsoluteLocation;
}

+ (id)factoryWithPosition:(long long)arg1 uri:(id)arg2 components:(id)arg3 parentAbsoluteLocation:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTUBIEventAbsoluteLocation> parentAbsoluteLocation; // @synthesize parentAbsoluteLocation=_parentAbsoluteLocation;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)hitUiNavigateWithDestination:(id)arg1;
- (id)impression;
- (id)absoluteLocation;
- (id)_location;
- (id)initWithPosition:(long long)arg1 uri:(id)arg2 components:(id)arg3 parentAbsoluteLocation:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

