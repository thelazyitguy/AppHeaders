//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNProtoDynamiteClientMetadata_SmartReplySource, JavaUtilOptional;

@interface DYNSSyncSmartReplyManagerImpl_SmartReplyList : NSObject
{
    JavaUtilOptional *uiSmartReplyList_;
    _Bool hasBeenUsed_;
    DYNProtoDynamiteClientMetadata_SmartReplySource *source_;
}

- (void)dealloc;
- (id)getSmartReplySet;
- (id)getLastMessageId;
- (id)getSource;
- (void)setUsed;
- (_Bool)hasBeenUsed;
- (id)getUiSmartReplyList;

@end
