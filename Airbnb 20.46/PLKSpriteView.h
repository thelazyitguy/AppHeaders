//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIColor, UIImage;

@interface PLKSpriteView : UIView
{
    _Bool _selected;
    UIImage *_atlas;
    NSString *_text;
    UIColor *_highlightedTextColor;
    NSArray *_characterMapping;
    struct CGSize _spriteSize;
}

- (void).cxx_destruct;
@property(retain) NSArray *characterMapping; // @synthesize characterMapping=_characterMapping;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(nonatomic) struct CGSize spriteSize; // @synthesize spriteSize=_spriteSize;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIImage *atlas; // @synthesize atlas=_atlas;
- (id)layerForGlyph:(unsigned long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)update;
@property(copy, nonatomic) NSString *characterMap;
- (void)setTintColor:(id)arg1;

@end
