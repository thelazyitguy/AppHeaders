//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

@interface CRGarbageCollector : NSObject
{
    NSManagedObjectContext *_context;
}

@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)contextWillSave;
- (long long)performGarbageCollectionOnClass:(Class)arg1 currentCount:(long long)arg2;
- (unsigned long long)countForEntity:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end
