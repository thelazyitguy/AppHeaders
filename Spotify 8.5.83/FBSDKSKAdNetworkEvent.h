//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FBSDKSKAdNetworkEvent : NSObject
{
    NSString *_eventName;
    NSDictionary *_values;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *values; // @synthesize values=_values;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (id)initWithJSON:(id)arg1;

@end

