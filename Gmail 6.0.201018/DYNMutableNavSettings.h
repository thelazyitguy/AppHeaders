//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNNavSettings.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSArray, NSString, UIBarButtonItem, UIView;

@interface DYNMutableNavSettings : DYNNavSettings <NSCopying, NSMutableCopying>
{
}

@property(retain, nonatomic) UIView *bottomView; // @dynamic bottomView;
@property(retain, nonatomic) NSArray *additionalRightBarButtonItems; // @dynamic additionalRightBarButtonItems;
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem; // @dynamic rightBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem; // @dynamic backBarButtonItem;
@property(nonatomic) _Bool titleViewIsSelfSizing; // @dynamic titleViewIsSelfSizing;
@property(retain, nonatomic) UIView *titleView; // @dynamic titleView;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

