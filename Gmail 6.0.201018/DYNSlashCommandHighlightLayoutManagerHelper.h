//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNLayoutManagerHelper-Protocol.h"

@class DYNMessageLayoutManager, NSString;

@interface DYNSlashCommandHighlightLayoutManagerHelper : NSObject <DYNLayoutManagerHelper>
{
    DYNMessageLayoutManager *_layoutManager;
}

+ (id)attributeName;
- (void).cxx_destruct;
@property(nonatomic) __weak DYNMessageLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
- (void)drawPerLineBackgroundForAttribute:(id)arg1 lineGlyphRange:(struct _NSRange)arg2 lineCharacterRange:(struct _NSRange)arg3 lineAttributeRect:(struct CGRect)arg4 atPoint:(struct CGPoint)arg5;
- (id)initWithLayoutManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
