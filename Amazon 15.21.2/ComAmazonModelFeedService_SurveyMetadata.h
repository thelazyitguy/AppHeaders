//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComAmazonModelFeedService_MetadataBase.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface ComAmazonModelFeedService_SurveyMetadata : ComAmazonModelFeedService_MetadataBase <NSCoding, NSCopying>
{
    NSString *_template;
    NSString *_narrativeId;
    NSString *_pageId;
}

+ (id)type;
@property(copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(copy, nonatomic) NSString *narrativeId; // @synthesize narrativeId=_narrativeId;
@property(copy, nonatomic) NSString *template; // @synthesize template=_template;
- (void).cxx_destruct;

@end
