//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CORenewableObject.h"

@class NSNumber, NSString;

@interface COEntity : CORenewableObject
{
    NSNumber *_entityId;
    NSString *_entityIdString;
    NSString *_entityType;
    NSNumber *_overrideActionEntityId;
    NSString *_overrideActionEntityType;
}

+ (id)falcorKeyPathMap;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *overrideActionEntityType; // @synthesize overrideActionEntityType=_overrideActionEntityType;
@property(copy, nonatomic) NSNumber *overrideActionEntityId; // @synthesize overrideActionEntityId=_overrideActionEntityId;
@property(readonly, copy, nonatomic) NSString *entityType; // @synthesize entityType=_entityType;
@property(copy, nonatomic) NSString *entityIdString; // @synthesize entityIdString=_entityIdString;
@property(readonly, copy, nonatomic) NSNumber *entityId; // @synthesize entityId=_entityId;

@end
