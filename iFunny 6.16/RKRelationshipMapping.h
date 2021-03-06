//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/RKPropertyMapping.h>

@class RKMapping;

@interface RKRelationshipMapping : RKPropertyMapping
{
    RKMapping *_mapping;
    long long _assignmentPolicy;
}

+ (id)relationshipMappingFromKeyPath:(id)arg1 toKeyPath:(id)arg2 withMapping:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long assignmentPolicy; // @synthesize assignmentPolicy=_assignmentPolicy;
@property(retain, nonatomic) RKMapping *mapping; // @synthesize mapping=_mapping;
- (_Bool)isEqualToMapping:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

