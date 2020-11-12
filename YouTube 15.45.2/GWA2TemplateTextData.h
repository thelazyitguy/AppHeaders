//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWA2Data.h>

#import <Module_Framework/GWA2DisplayTextListener-Protocol.h>

@class GWA2TemplateTextDataValue, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface GWA2TemplateTextData : GWA2Data <GWA2DisplayTextListener>
{
    GWA2TemplateTextDataValue *_templateTextDataValue;
    NSArray *_childDataReferences;
    NSMutableArray *_orderedChildDataReferences;
    NSMutableDictionary *_dynamicTexts;
    NSString *_templateText;
    NSString *_templateTextValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *templateTextValue; // @synthesize templateTextValue=_templateTextValue;
@property(readonly, copy) NSString *debugDescription;
- (id)dataAccessibilityLabel;
- (void)displayTextDidChange:(id)arg1;
- (id)displayText;
- (id)dynamicDisplayTexts;
- (void)updateTemplateText;
- (void)updateOrderedChildDataReferences;
- (void)updateDynamicDisplayTexts;
- (void)subscribeToDisplayTextProviders;
- (void)updateDataValue:(id)arg1;
- (id)initWithData:(id)arg1 pageContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
