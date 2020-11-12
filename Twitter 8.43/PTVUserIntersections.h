//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface PTVUserIntersections : NSObject
{
    _Bool _hasLargeFollowerCount;
    NSNumber *_totalIntersectionsCount;
    NSArray *_mostRecentIntersections;
    NSArray *_followersWithIntersections;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasLargeFollowerCount; // @synthesize hasLargeFollowerCount=_hasLargeFollowerCount;
@property(readonly, nonatomic) NSArray *followersWithIntersections; // @synthesize followersWithIntersections=_followersWithIntersections;
@property(readonly, nonatomic) NSArray *mostRecentIntersections; // @synthesize mostRecentIntersections=_mostRecentIntersections;
@property(readonly, nonatomic) NSNumber *totalIntersectionsCount; // @synthesize totalIntersectionsCount=_totalIntersectionsCount;
- (id)localizedIntersectionsString;
- (id)unpackUserList:(id)arg1 loggedInUser:(id)arg2;
- (id)initWithDictionary:(id)arg1 loggedInUser:(id)arg2;

@end
