//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZXPDF417DetectionResultColumn.h"

@interface ZXPDF417DetectionResultRowIndicatorColumn : ZXPDF417DetectionResultColumn
{
    _Bool _isLeft;
}

@property(readonly, nonatomic) _Bool isLeft; // @synthesize isLeft=_isLeft;
- (id)description;
- (void)removeIncorrectCodewords:(id)arg1;
- (id)barcodeMetadata;
- (int)adjustIncompleteIndicatorColumnRowNumbers:(id)arg1;
- (_Bool)getRowHeights:(id *)arg1;
- (int)adjustCompleteIndicatorColumnRowNumbers:(id)arg1;
- (void)setRowNumbers;
- (id)initWithBoundingBox:(id)arg1 isLeft:(_Bool)arg2;

@end
