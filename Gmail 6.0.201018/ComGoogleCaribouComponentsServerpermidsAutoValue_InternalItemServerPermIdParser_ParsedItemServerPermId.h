//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCaribouComponentsServerpermidsInternalItemServerPermIdParser_ParsedItemServerPermId.h"

@class ComGoogleCaribouComponentsClientassignedidsThreadId, ComGoogleCaribouComponentsServerpermidsInternalItemServerPermIdParser_ParsedItemServerPermId_ItemServerPermIdType, ComGoogleCommonBaseOptional;

@interface ComGoogleCaribouComponentsServerpermidsAutoValue_InternalItemServerPermIdParser_ParsedItemServerPermId : ComGoogleCaribouComponentsServerpermidsInternalItemServerPermIdParser_ParsedItemServerPermId
{
    ComGoogleCaribouComponentsServerpermidsInternalItemServerPermIdParser_ParsedItemServerPermId_ItemServerPermIdType *itemServerPermIdType_;
    ComGoogleCaribouComponentsClientassignedidsThreadId *threadId_;
    ComGoogleCommonBaseOptional *messageId_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)getMessageId;
- (id)getThreadId;
- (id)getItemServerPermIdType;

@end

