//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/NSFastEnumeration-Protocol.h>

@interface RLMSyncPermissionResults : NSObject <NSFastEnumeration>
{
    unique_ptr_766c78df _results;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)sortedResultsUsingProperty:(unsigned long long)arg1 ascending:(_Bool)arg2;
- (id)objectsWithPredicate:(id)arg1;
- (long long)indexOfObject:(id)arg1;
- (id)lastObject;
- (id)firstObject;
- (id)initWithResults:(unique_ptr_766c78df)arg1;
- (id)objectAtIndex:(long long)arg1;
- (id)addNotificationBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long count;

@end
