//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface NIAttributedLabelImage : NSObject
{
    int _verticalTextAlignment;
    long long _index;
    UIImage *_image;
    double _fontAscent;
    double _fontDescent;
    struct UIEdgeInsets _margins;
}

- (void).cxx_destruct;
@property(nonatomic) double fontDescent; // @synthesize fontDescent=_fontDescent;
@property(nonatomic) double fontAscent; // @synthesize fontAscent=_fontAscent;
@property(nonatomic) int verticalTextAlignment; // @synthesize verticalTextAlignment=_verticalTextAlignment;
@property(nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long index; // @synthesize index=_index;
- (struct CGSize)boxSize;

@end
