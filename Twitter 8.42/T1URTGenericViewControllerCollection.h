//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TFNTwitterAccount;
@protocol T1URTGenericViewControllerCollectionDelegate;

@interface T1URTGenericViewControllerCollection : NSObject
{
    // Error parsing type: , name: account
    // Error parsing type: , name: entries
    // Error parsing type: , name: delegate
    // Error parsing type: , name: workQueue
    // Error parsing type: , name: displayLocation
}

- (void).cxx_destruct;
- (id)init;
- (double)preferredMaximumBarHeightInSegmentedViewController:(id)arg1;
- (void)segmentedViewController:(id)arg1 didSelectContentViewController:(id)arg2 atIndex:(long long)arg3 indexChanged:(_Bool)arg4 userGestureType:(long long)arg5;
- (id)segmentedViewController:(id)arg1 entityTokenAtIndex:(long long)arg2;
- (id)segmentedViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (id)segmentedViewController:(id)arg1 titleAtIndex:(long long)arg2;
- (long long)numberOfEntriesForSegmentedViewController:(id)arg1;
- (id)initWithAccount:(id)arg1 entries:(id)arg2 priorityQueueActions:(_Bool)arg3 displayLocation:(long long)arg4;
@property(nonatomic) __weak id <T1URTGenericViewControllerCollectionDelegate> delegate; // @synthesize delegate;
@property(nonatomic, readonly) NSArray *entries;
@property(nonatomic, readonly) TFNTwitterAccount *account; // @synthesize account;

@end

