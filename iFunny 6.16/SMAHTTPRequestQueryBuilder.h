//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAHTTPRequestPropertyObjectBuilding-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface SMAHTTPRequestQueryBuilder : NSObject <SMAHTTPRequestPropertyObjectBuilding>
{
    NSMutableArray *_items;
}

@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *query;
- (void)addNumberAsIntegerValue:(id)arg1 forKey:(id)arg2;
- (void)addNumberAsBoolIntegerValue:(id)arg1 forKey:(id)arg2;
- (void)addNumberAsBoolValue:(id)arg1 forKey:(id)arg2;
- (void)addStringValue:(id)arg1 forKey:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
