//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont, UIImage;

@interface UAMessageCenterStyle : NSObject
{
    _Bool _navigationBarOpaque;
    _Bool _iconsEnabled;
    UIFont *_titleFont;
    UIColor *_titleColor;
    UIColor *_tintColor;
    UIColor *_navigationBarColor;
    unsigned long long _navigationBarStyle;
    UIColor *_listColor;
    UIColor *_refreshTintColor;
    UIImage *_placeholderIcon;
    UIFont *_cellTitleFont;
    UIFont *_cellDateFont;
    UIColor *_cellColor;
    UIColor *_cellHighlightedColor;
    UIColor *_cellTitleColor;
    UIColor *_cellTitleHighlightedColor;
    UIColor *_cellDateColor;
    UIColor *_cellDateHighlightedColor;
    UIColor *_cellSeparatorColor;
    UIColor *_cellTintColor;
    UIColor *_unreadIndicatorColor;
    UIColor *_selectAllButtonTitleColor;
    UIColor *_deleteButtonTitleColor;
    UIColor *_markAsReadButtonTitleColor;
    UIColor *_editButtonTitleColor;
    UIColor *_cancelButtonTitleColor;
}

+ (id)createIcon:(id)arg1;
+ (id)createFont:(id)arg1;
+ (id)createColor:(id)arg1;
+ (id)normalizeDictionary:(id)arg1;
+ (unsigned long long)parseNavigationBarStyle:(id)arg1;
+ (id)styleWithContentsOfFile:(id)arg1;
+ (id)style;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *cancelButtonTitleColor; // @synthesize cancelButtonTitleColor=_cancelButtonTitleColor;
@property(retain, nonatomic) UIColor *editButtonTitleColor; // @synthesize editButtonTitleColor=_editButtonTitleColor;
@property(retain, nonatomic) UIColor *markAsReadButtonTitleColor; // @synthesize markAsReadButtonTitleColor=_markAsReadButtonTitleColor;
@property(retain, nonatomic) UIColor *deleteButtonTitleColor; // @synthesize deleteButtonTitleColor=_deleteButtonTitleColor;
@property(retain, nonatomic) UIColor *selectAllButtonTitleColor; // @synthesize selectAllButtonTitleColor=_selectAllButtonTitleColor;
@property(retain, nonatomic) UIColor *unreadIndicatorColor; // @synthesize unreadIndicatorColor=_unreadIndicatorColor;
@property(retain, nonatomic) UIColor *cellTintColor; // @synthesize cellTintColor=_cellTintColor;
@property(retain, nonatomic) UIColor *cellSeparatorColor; // @synthesize cellSeparatorColor=_cellSeparatorColor;
@property(retain, nonatomic) UIColor *cellDateHighlightedColor; // @synthesize cellDateHighlightedColor=_cellDateHighlightedColor;
@property(retain, nonatomic) UIColor *cellDateColor; // @synthesize cellDateColor=_cellDateColor;
@property(retain, nonatomic) UIColor *cellTitleHighlightedColor; // @synthesize cellTitleHighlightedColor=_cellTitleHighlightedColor;
@property(retain, nonatomic) UIColor *cellTitleColor; // @synthesize cellTitleColor=_cellTitleColor;
@property(retain, nonatomic) UIColor *cellHighlightedColor; // @synthesize cellHighlightedColor=_cellHighlightedColor;
@property(retain, nonatomic) UIColor *cellColor; // @synthesize cellColor=_cellColor;
@property(retain, nonatomic) UIFont *cellDateFont; // @synthesize cellDateFont=_cellDateFont;
@property(retain, nonatomic) UIFont *cellTitleFont; // @synthesize cellTitleFont=_cellTitleFont;
@property(retain, nonatomic) UIImage *placeholderIcon; // @synthesize placeholderIcon=_placeholderIcon;
@property(nonatomic) _Bool iconsEnabled; // @synthesize iconsEnabled=_iconsEnabled;
@property(retain, nonatomic) UIColor *refreshTintColor; // @synthesize refreshTintColor=_refreshTintColor;
@property(retain, nonatomic) UIColor *listColor; // @synthesize listColor=_listColor;
@property(nonatomic) unsigned long long navigationBarStyle; // @synthesize navigationBarStyle=_navigationBarStyle;
@property(nonatomic) _Bool navigationBarOpaque; // @synthesize navigationBarOpaque=_navigationBarOpaque;
@property(retain, nonatomic) UIColor *navigationBarColor; // @synthesize navigationBarColor=_navigationBarColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToMessageCenterStyle:(id)arg1;
- (id)init;

@end
