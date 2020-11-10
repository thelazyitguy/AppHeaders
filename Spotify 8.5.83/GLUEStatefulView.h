//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEReusable-Protocol.h"
#import "GLUEStatefulItem-Protocol.h"
#import "GLUEStyleable-Protocol.h"

@class GLUEStatefulStyle, NSString;

@interface GLUEStatefulView : UIView <GLUEStatefulItem, GLUEStyleable, GLUEReusable>
{
    _Bool _shouldManageAccessibilityTraits;
    _Bool _shouldManageUserInteractionEnabled;
    unsigned long long _state;
    GLUEStatefulStyle *_style;
}

- (void).cxx_destruct;
@property(copy, nonatomic) GLUEStatefulStyle *style; // @synthesize style=_style;
@property(nonatomic) _Bool shouldManageUserInteractionEnabled; // @synthesize shouldManageUserInteractionEnabled=_shouldManageUserInteractionEnabled;
@property(nonatomic) _Bool shouldManageAccessibilityTraits; // @synthesize shouldManageAccessibilityTraits=_shouldManageAccessibilityTraits;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)updateStateBasedStyle;
- (void)applyStateStyle:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)prepareForReuse;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic, getter=isDisabled) _Bool disabled;
- (void)updateUserInteractionEnabledIfOptedIn;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

