//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface SPTEncoreIconImageConfiguration : NSObject
{
    _Bool _boundingRect;
    unsigned long long _icon;
    long long _iconSize;
    UIColor *_backgroundColor;
    UIColor *_iconColor;
    long long _textAlignment;
    UIColor *_boundingRectColor;
    struct CGSize _imageSize;
    struct UIEdgeInsets _iconEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *boundingRectColor; // @synthesize boundingRectColor=_boundingRectColor;
@property(nonatomic) _Bool boundingRect; // @synthesize boundingRect=_boundingRect;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) struct UIEdgeInsets iconEdgeInsets; // @synthesize iconEdgeInsets=_iconEdgeInsets;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) unsigned long long icon; // @synthesize icon=_icon;
- (id)init;

@end

