//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface FBSDKRestrictiveData : NSObject
{
    _Bool _deprecatedEvent;
    NSString *_eventName;
    NSDictionary *_restrictiveParams;
    NSArray *_deprecatedParams;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool deprecatedEvent; // @synthesize deprecatedEvent=_deprecatedEvent;
@property(readonly, copy, nonatomic) NSArray *deprecatedParams; // @synthesize deprecatedParams=_deprecatedParams;
@property(readonly, copy, nonatomic) NSDictionary *restrictiveParams; // @synthesize restrictiveParams=_restrictiveParams;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (id)initWithEventName:(id)arg1 params:(id)arg2;

@end
