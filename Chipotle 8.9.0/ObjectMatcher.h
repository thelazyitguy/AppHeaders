//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface ObjectMatcher : NSObject
{
    NSDictionary *_config;
    NSMutableDictionary *_matcher;
}

@property(retain, nonatomic) NSMutableDictionary *matcher; // @synthesize matcher=_matcher;
- (void)setConfig:(id)arg1;
@property(retain, nonatomic) NSDictionary * y; // @synthesize  y=_config;
- (void).cxx_destruct;
- (_Bool)c;
- (id)initWithDictionary:(id)arg1 propertyMap:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSONConfig:(id)arg1 propertyMap:(id)arg2;
- (id)initWithJSONConfig:(id)arg1;

@end
