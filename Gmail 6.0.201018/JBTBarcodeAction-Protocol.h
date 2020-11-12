//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTClickableAction-Protocol.h"
#import "JBTSmartMailAction-Protocol.h"
#import "JavaObject-Protocol.h"

@class JBTBarcodeAction_BarcodeType, NSString;
@protocol JBTRichText, JavaUtilList;

@protocol JBTBarcodeAction <JBTSmartMailAction, JBTClickableAction, JavaObject>
- (id <JavaUtilList>)getBarcodes;
- (id <JBTRichText>)getExpandedTitle;
- (id <JBTRichText>)getTitle;
- (id <JBTRichText>)getCaption;
- (JBTBarcodeAction_BarcodeType *)getBarcodeType;
- (NSString *)getBarcodeText;
@end
