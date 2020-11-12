//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIImpressionEvent-Protocol.h"

@class NSArray, NSString;
@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation;

@interface SPTUBIEventFactoryImpression : NSObject <SPTUBIImpressionEvent>
{
    id <SPTUBIEventAbsoluteLocation> _parentAbsoluteLocation;
    id <SPTUBIEventLocation> _location;
    NSArray *_errors;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(readonly, nonatomic) id <SPTUBIEventLocation> location; // @synthesize location=_location;
@property(readonly, nonatomic) id <SPTUBIEventAbsoluteLocation> parentAbsoluteLocation; // @synthesize parentAbsoluteLocation=_parentAbsoluteLocation;
- (id)initWithLocation:(id)arg1 errors:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
