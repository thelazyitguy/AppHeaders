//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol PDLPerson;

@interface PDLLookupPersonCacheEntry : NSObject
{
    id <PDLPerson> _person;
    NSDate *_createdTime;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *createdTime; // @synthesize createdTime=_createdTime;
@property(readonly, nonatomic) id <PDLPerson> person; // @synthesize person=_person;
- (id)initWithPerson:(id)arg1;

@end

