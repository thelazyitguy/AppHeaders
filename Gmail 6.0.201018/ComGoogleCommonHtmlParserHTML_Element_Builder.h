//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleCommonHtmlParserHTML_Element;

@interface ComGoogleCommonHtmlParserHTML_Element_Builder : NSObject
{
    ComGoogleCommonHtmlParserHTML_Element *incompleteElement_;
}

- (void)dealloc;
- (id)build;
- (id)setElementTypeWithInt:(int)arg1;
- (id)setEmptyWithBoolean:(_Bool)arg1;
- (id)setFlowWithComGoogleCommonHtmlParserHTML_Element_Flow:(id)arg1;
- (id)setBreaksFlowWithBoolean:(_Bool)arg1;
- (id)setSiblingConstraintsWithComGoogleCommonHtmlParserHTML_Element_ConstraintPolicy:(id)arg1;
- (id)setChildrenConstraintsWithComGoogleCommonHtmlParserHTML_Element_ConstraintPolicy:(id)arg1;
- (id)setRequiredParentsWithJavaUtilList:(id)arg1;
- (id)setContentTypesWithComGoogleCommonHtmlParserHTML_Element_ContentTypeArray:(id)arg1;
- (id)setLegalAttributesWithNSStringArray:(id)arg1;
- (id)setEndTagWithComGoogleCommonHtmlParserHTML_Element_TagOpts:(id)arg1;
- (id)setStartTagWithComGoogleCommonHtmlParserHTML_Element_TagOpts:(id)arg1;
- (id)setNameWithNSString:(id)arg1;
- (id)peekIncompleteElement;
- (id)resetToDefault;

@end
