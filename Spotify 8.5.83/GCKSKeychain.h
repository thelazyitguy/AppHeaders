//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCKSKeychain : NSObject
{
}

- (void)dumpItems;
- (id)loadIdentitiesWithLabel:(id)arg1 error:(id *)arg2;
- (int)removeIdentity:(id)arg1;
- (int)addIdentity:(id)arg1;
- (id)init;

@end

