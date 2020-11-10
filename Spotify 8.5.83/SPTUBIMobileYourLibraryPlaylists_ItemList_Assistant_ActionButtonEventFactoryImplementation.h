//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileYourLibraryPlaylists_ItemList_Assistant_ActionButtonEventFactory-Protocol.h"

@class NSArray, NSString;
@protocol SPTUBIEventAbsoluteLocation;

@interface SPTUBIMobileYourLibraryPlaylists_ItemList_Assistant_ActionButtonEventFactoryImplementation : NSObject <SPTUBIMobileYourLibraryPlaylists_ItemList_Assistant_ActionButtonEventFactory>
{
    NSArray *_components;
    id <SPTUBIEventAbsoluteLocation> _parentAbsoluteLocation;
}

+ (id)factoryWithIdentifier:(id)arg1 components:(id)arg2 parentAbsoluteLocation:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTUBIEventAbsoluteLocation> parentAbsoluteLocation; // @synthesize parentAbsoluteLocation=_parentAbsoluteLocation;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)hitUiNavigateWithDestination:(id)arg1;
- (id)hitUiReveal;
- (id)absoluteLocation;
- (id)_location;
- (id)initWithIdentifier:(id)arg1 components:(id)arg2 parentAbsoluteLocation:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

