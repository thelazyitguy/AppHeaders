//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class MDCItemBar, UITabBarItem;

@protocol MDCItemBarDelegate <NSObject>
- (void)itemBar:(MDCItemBar *)arg1 didSelectItem:(UITabBarItem *)arg2;
- (_Bool)itemBar:(MDCItemBar *)arg1 shouldSelectItem:(UITabBarItem *)arg2;
@end
