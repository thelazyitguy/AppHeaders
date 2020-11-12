//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MDCTextControlVerticalPositioningReference-Protocol.h>

@class NSString;

@interface MDCTextControlVerticalPositioningReferenceFilled : NSObject <MDCTextControlVerticalPositioningReference>
{
    double _paddingBetweenContainerTopAndFloatingLabel;
    double _paddingBetweenContainerTopAndNormalLabel;
    double _paddingBetweenFloatingLabelAndEditingText;
    double _paddingBetweenEditingTextAndContainerBottom;
    double _paddingAboveAssistiveLabels;
    double _paddingBelowAssistiveLabels;
    double _containerHeightWithFloatingLabel;
    double _containerHeightWithoutFloatingLabel;
    double _paddingAroundTextWhenNoFloatingLabel;
}

@property(readonly, nonatomic) double paddingAroundTextWhenNoFloatingLabel; // @synthesize paddingAroundTextWhenNoFloatingLabel=_paddingAroundTextWhenNoFloatingLabel;
@property(readonly, nonatomic) double containerHeightWithoutFloatingLabel; // @synthesize containerHeightWithoutFloatingLabel=_containerHeightWithoutFloatingLabel;
@property(readonly, nonatomic) double containerHeightWithFloatingLabel; // @synthesize containerHeightWithFloatingLabel=_containerHeightWithFloatingLabel;
@property(readonly, nonatomic) double paddingBelowAssistiveLabels; // @synthesize paddingBelowAssistiveLabels=_paddingBelowAssistiveLabels;
@property(readonly, nonatomic) double paddingAboveAssistiveLabels; // @synthesize paddingAboveAssistiveLabels=_paddingAboveAssistiveLabels;
@property(readonly, nonatomic) double paddingBetweenEditingTextAndContainerBottom; // @synthesize paddingBetweenEditingTextAndContainerBottom=_paddingBetweenEditingTextAndContainerBottom;
@property(readonly, nonatomic) double paddingBetweenFloatingLabelAndEditingText; // @synthesize paddingBetweenFloatingLabelAndEditingText=_paddingBetweenFloatingLabelAndEditingText;
@property(readonly, nonatomic) double paddingBetweenContainerTopAndNormalLabel; // @synthesize paddingBetweenContainerTopAndNormalLabel=_paddingBetweenContainerTopAndNormalLabel;
@property(readonly, nonatomic) double paddingBetweenContainerTopAndFloatingLabel; // @synthesize paddingBetweenContainerTopAndFloatingLabel=_paddingBetweenContainerTopAndFloatingLabel;
- (id)initWithFloatingFontLineHeight:(double)arg1 normalFontLineHeight:(double)arg2 textRowHeight:(double)arg3 numberOfTextRows:(double)arg4 density:(double)arg5 preferredContainerHeight:(double)arg6 isMultilineTextControl:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
