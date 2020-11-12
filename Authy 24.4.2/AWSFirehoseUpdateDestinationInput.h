//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSRequest.h>

@class AWSFirehoseRedshiftDestinationUpdate, AWSFirehoseS3DestinationUpdate, NSString;

@interface AWSFirehoseUpdateDestinationInput : AWSRequest
{
    NSString *_currentDeliveryStreamVersionId;
    NSString *_deliveryStreamName;
    NSString *_destinationId;
    AWSFirehoseRedshiftDestinationUpdate *_redshiftDestinationUpdate;
    AWSFirehoseS3DestinationUpdate *_s3DestinationUpdate;
}

+ (id)s3DestinationUpdateJSONTransformer;
+ (id)redshiftDestinationUpdateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) AWSFirehoseS3DestinationUpdate *s3DestinationUpdate; // @synthesize s3DestinationUpdate=_s3DestinationUpdate;
@property(retain, nonatomic) AWSFirehoseRedshiftDestinationUpdate *redshiftDestinationUpdate; // @synthesize redshiftDestinationUpdate=_redshiftDestinationUpdate;
@property(retain, nonatomic) NSString *destinationId; // @synthesize destinationId=_destinationId;
@property(retain, nonatomic) NSString *deliveryStreamName; // @synthesize deliveryStreamName=_deliveryStreamName;
@property(retain, nonatomic) NSString *currentDeliveryStreamVersionId; // @synthesize currentDeliveryStreamVersionId=_currentDeliveryStreamVersionId;

@end
