//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class JBTStructuredQuery_SearchSubset_MailSubset, NSString;
@protocol JBTStructuredQuery_SearchSubset, JBTStructuredQuery_SearchSubset_Builder;

@protocol JBTStructuredQuery_SearchSubset_Builder <JavaObject>
- (id <JBTStructuredQuery_SearchSubset>)build;
- (id <JBTStructuredQuery_SearchSubset_Builder>)setLabelNameWithNSString:(NSString *)arg1;
- (id <JBTStructuredQuery_SearchSubset_Builder>)setMailSubsetWithJBTStructuredQuery_SearchSubset_MailSubset:(JBTStructuredQuery_SearchSubset_MailSubset *)arg1;
@end
