//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PisaJsonObject.h"

@class NSDate, NSString;

@interface PisaResponse : PisaJsonObject
{
    NSString *_pisaQueryId;
    NSDate *_cacheTime;
}

@property(retain, nonatomic) NSDate *cacheTime; // @synthesize cacheTime=_cacheTime;
@property(retain, nonatomic) NSString *pisaQueryId; // @synthesize pisaQueryId=_pisaQueryId;
- (void).cxx_destruct;
- (id)init;
- (id)initFromJsonDictionary:(id)arg1;

@end
