//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TDLLink_DocumentLink_Builder;

@interface ComGoogleAppsTasksSharedDataProtoBusinessobjectBusinessObjectBuilders_BaseLinkDocumentLinkBuilder : NSObject
{
    TDLLink_DocumentLink_Builder *protoBuilder_;
}

- (void)dealloc;
- (id)build;
- (id)asProtoBuilder;
- (id)setDocumentTitleWithNSString:(id)arg1;
- (id)setDocumentIdWithNSString:(id)arg1;
- (id)setPermalinkUrlWithNSString:(id)arg1;
- (id)setEditorWithTDLLink_DocumentLink_Editor:(id)arg1;

@end
