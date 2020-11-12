//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/NSObject-Protocol.h>

@class NSArray, NSString, UINavigationItem, UIView;

@protocol GOOUINavigationUpdatableHeaderView <NSObject>
- (void)updateWithTitle:(NSString *)arg1 navigationItem:(UINavigationItem *)arg2;
- (void)setRightBarButtonItems:(NSArray *)arg1 animated:(_Bool)arg2;
- (void)setLeftBarButtonItems:(NSArray *)arg1 animated:(_Bool)arg2;
- (void)rightBarButtonItemAtIndex:(unsigned long long)arg1 didUpdateObject:(id)arg2 changedKey:(NSString *)arg3;
- (void)leftBarButtonItemAtIndex:(unsigned long long)arg1 didUpdateObject:(id)arg2 changedKey:(NSString *)arg3;
- (void)viewControllerDidUpdateTitleView:(UIView *)arg1;
- (void)viewControllerDidUpdateTitle:(NSString *)arg1 navigationItemTitle:(NSString *)arg2;
@end
