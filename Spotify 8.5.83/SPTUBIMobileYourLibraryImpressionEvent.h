//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIImpressionEvent-Protocol.h"

@class NSArray, NSString, SPTUBIMobileYourLibraryEventLocation;
@protocol SPTUBIEventAbsoluteLocation;

@interface SPTUBIMobileYourLibraryImpressionEvent : NSObject <SPTUBIImpressionEvent>
{
    SPTUBIMobileYourLibraryEventLocation *_location;
    id <SPTUBIEventAbsoluteLocation> _parentAbsoluteLocation;
    NSArray *_errors;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) id <SPTUBIEventAbsoluteLocation> parentAbsoluteLocation; // @synthesize parentAbsoluteLocation=_parentAbsoluteLocation;
@property(retain, nonatomic) SPTUBIMobileYourLibraryEventLocation *location; // @synthesize location=_location;
- (id)initWithComponents:(id)arg1 parentAbsoluteLocation:(id)arg2 errors:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

