//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNAnnotationHandler-Protocol.h"

@class NSString;

@interface DYNAnnotationStyleHandler : NSObject <DYNAnnotationHandler>
{
}

+ (_Bool)isHidden:(id)arg1 inRange:(struct _NSRange)arg2;
+ (_Bool)isItalic:(id)arg1 inRange:(struct _NSRange)arg2;
+ (_Bool)isBold:(id)arg1 inRange:(struct _NSRange)arg2;
+ (void)renderAnnotation:(id)arg1 inChip:(id)arg2;
+ (void)renderAnnotations:(id)arg1 inMutableAttributedString:(id)arg2 withFontSize:(double)arg3 isForSnippets:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
