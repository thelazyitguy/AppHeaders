//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRDate, AIRInquiryPropertyListing, AIRListing, AIRMessageThreadBlock, AIRPost, AIRPricingQuote, AIRReservation, AIRSpecialOffer, AIRThreadExperience, AIRUser, AIRUserFlag, NSDate, NSMutableSet, NSNumber, NSString, NSURL;

@interface AIRThread : AIRModel
{
    _Bool _unread;
    _Bool _responded;
    _Bool _requiresResponse;
    _Bool _isArchived;
    _Bool _isGroupPaymentEnabled;
    _Bool _hasPendingAlterationRequest;
    _Bool _hasPastReservationsHost;
    _Bool _shouldLeaveReviewReminder;
    _Bool _shouldTranslate;
    _Bool _isBlockable;
    AIRDate *_inquiryCheckInDate;
    AIRDate *_inquiryCheckOutDate;
    NSString *_threadId;
    NSString *_unifiedMessageThreadId;
    NSString *_unifiedMessageThreadType;
    NSDate *_updatedAt;
    NSString *_preview;
    NSNumber *_previewUserId;
    NSMutableSet *_posts;
    NSMutableSet *_users;
    NSDate *_postsUpdatedAt;
    NSString *_status;
    NSString *_displayStatus;
    NSString *_caption;
    NSString *_guestAvatarStatusValue;
    AIRUser *_otherUser;
    AIRListing *_inquiryListing;
    AIRSpecialOffer *_inquirySpecialOffer;
    AIRReservation *_inquiryReservation;
    AIRSpecialOffer *_latestSpecialOffer;
    AIRInquiryPropertyListing *_inquiryPropertyListing;
    NSString *_resolutionStatus;
    AIRUserFlag *_userFlag;
    AIRPost *_activeInquiry;
    AIRPost *_inquiryPost;
    NSDate *_expiresAt;
    NSDate *_countdownAt;
    NSNumber *_inquiryNumberOfGuests;
    NSNumber *_inquiryPriceNative;
    NSString *_statusString;
    NSString *_inferredRole;
    NSString *_inboxName;
    AIRUser *_guest;
    NSDate *_lastMessageAt;
    AIRListing *_listing;
    NSNumber *_nights;
    NSNumber *_numberOfGuests;
    NSString *_reservationConfirmationCode;
    NSString *_reservationId;
    NSString *_textPreview;
    NSString *_type;
    NSString *_reviewId;
    NSString *_reviewDeeplink;
    NSDate *_userThreadUpdatedAt;
    NSURL *_imageURL;
    NSString *_businessPurpose;
    NSString *_threadSubType;
    AIRThreadExperience *_experience;
    NSString *_localizedTitle;
    AIRMessageThreadBlock *_messageThreadBlock;
    NSString *_suspiciousContentType;
    AIRPricingQuote *_pricingQuote;
    NSString *_totalReservationPrice;
    AIRDate *_startDate;
}

+ (void)blockThread:(id)arg1 withBlockedUserID:(id)arg2 session:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onFailure:(CDUnknownBlockType)arg5;
+ (id)modelWithJSONDictionary:(id)arg1 error:(id *)arg2;
+ (id)_jsonStringWithPrettyPrint:(_Bool)arg1 data:(id)arg2;
+ (void)updateThread:(id)arg1 withReply:(id)arg2 status:(id)arg3 session:(id)arg4 acceptedKoreanCancellationPolicy:(_Bool)arg5 onSuccess:(CDUnknownBlockType)arg6 onFailure:(CDUnknownBlockType)arg7;
+ (void)getThreadWithID:(id)arg1 params:(id)arg2 session:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onFailure:(CDUnknownBlockType)arg5;
+ (id)lastMessagePreviewFromPosts:(id)arg1;
+ (id)processModelsWithJSONArray:(id)arg1 forFormat:(id)arg2 mergedWithCache:(_Bool)arg3 shouldCache:(_Bool)arg4 error:(id *)arg5;
+ (id)processModelsWithJSONArray:(id)arg1 forFormat:(id)arg2 error:(id *)arg3;
+ (id)processModelWithJSONDictionary:(id)arg1 forFormat:(id)arg2 mergedWithCache:(_Bool)arg3 shouldCache:(_Bool)arg4 error:(id *)arg5;
+ (id)processModelWithJSONDictionary:(id)arg1 forFormat:(id)arg2 error:(id *)arg3;
+ (id)modelWithJSONDictionary:(id)arg1 error:(id *)arg2;
+ (id)customTransformers;
+ (id)customKeyPathMapping;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIRDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) NSString *totalReservationPrice; // @synthesize totalReservationPrice=_totalReservationPrice;
@property(readonly, copy, nonatomic) AIRPricingQuote *pricingQuote; // @synthesize pricingQuote=_pricingQuote;
@property(readonly, copy, nonatomic) NSString *suspiciousContentType; // @synthesize suspiciousContentType=_suspiciousContentType;
@property(readonly, nonatomic) _Bool isBlockable; // @synthesize isBlockable=_isBlockable;
@property(readonly, copy, nonatomic) AIRMessageThreadBlock *messageThreadBlock; // @synthesize messageThreadBlock=_messageThreadBlock;
@property(readonly, nonatomic) _Bool shouldTranslate; // @synthesize shouldTranslate=_shouldTranslate;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, copy, nonatomic) AIRThreadExperience *experience; // @synthesize experience=_experience;
@property(readonly, copy, nonatomic) NSString *threadSubType; // @synthesize threadSubType=_threadSubType;
@property(readonly, copy, nonatomic) NSString *businessPurpose; // @synthesize businessPurpose=_businessPurpose;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSDate *userThreadUpdatedAt; // @synthesize userThreadUpdatedAt=_userThreadUpdatedAt;
@property(readonly, nonatomic) _Bool shouldLeaveReviewReminder; // @synthesize shouldLeaveReviewReminder=_shouldLeaveReviewReminder;
@property(readonly, copy, nonatomic) NSString *reviewDeeplink; // @synthesize reviewDeeplink=_reviewDeeplink;
@property(readonly, copy, nonatomic) NSString *reviewId; // @synthesize reviewId=_reviewId;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *textPreview; // @synthesize textPreview=_textPreview;
@property(readonly, copy, nonatomic) NSString *reservationId; // @synthesize reservationId=_reservationId;
@property(readonly, copy, nonatomic) NSString *reservationConfirmationCode; // @synthesize reservationConfirmationCode=_reservationConfirmationCode;
@property(readonly, copy, nonatomic) NSNumber *numberOfGuests; // @synthesize numberOfGuests=_numberOfGuests;
@property(readonly, copy, nonatomic) NSNumber *nights; // @synthesize nights=_nights;
@property(readonly, copy, nonatomic) AIRListing *listing; // @synthesize listing=_listing;
@property(copy, nonatomic) NSDate *lastMessageAt; // @synthesize lastMessageAt=_lastMessageAt;
@property(readonly, copy, nonatomic) AIRUser *guest; // @synthesize guest=_guest;
@property(readonly, copy, nonatomic) NSString *inboxName; // @synthesize inboxName=_inboxName;
@property(readonly, copy, nonatomic) NSString *inferredRole; // @synthesize inferredRole=_inferredRole;
@property(readonly, copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(copy, nonatomic) NSNumber *inquiryPriceNative; // @synthesize inquiryPriceNative=_inquiryPriceNative;
@property(readonly, copy, nonatomic) NSNumber *inquiryNumberOfGuests; // @synthesize inquiryNumberOfGuests=_inquiryNumberOfGuests;
@property(readonly, copy, nonatomic) NSDate *countdownAt; // @synthesize countdownAt=_countdownAt;
@property(readonly, copy, nonatomic) NSDate *expiresAt; // @synthesize expiresAt=_expiresAt;
@property(readonly, nonatomic) _Bool hasPastReservationsHost; // @synthesize hasPastReservationsHost=_hasPastReservationsHost;
@property(readonly, copy, nonatomic) AIRPost *inquiryPost; // @synthesize inquiryPost=_inquiryPost;
@property(readonly, copy, nonatomic) AIRPost *activeInquiry; // @synthesize activeInquiry=_activeInquiry;
@property(readonly, copy, nonatomic) AIRUserFlag *userFlag; // @synthesize userFlag=_userFlag;
@property(readonly, copy, nonatomic) NSString *resolutionStatus; // @synthesize resolutionStatus=_resolutionStatus;
@property(readonly, copy, nonatomic) AIRInquiryPropertyListing *inquiryPropertyListing; // @synthesize inquiryPropertyListing=_inquiryPropertyListing;
@property(readonly, copy, nonatomic) AIRSpecialOffer *latestSpecialOffer; // @synthesize latestSpecialOffer=_latestSpecialOffer;
@property(copy, nonatomic) AIRReservation *inquiryReservation; // @synthesize inquiryReservation=_inquiryReservation;
@property(readonly, copy, nonatomic) AIRSpecialOffer *inquirySpecialOffer; // @synthesize inquirySpecialOffer=_inquirySpecialOffer;
@property(readonly, copy, nonatomic) AIRListing *inquiryListing; // @synthesize inquiryListing=_inquiryListing;
@property(copy, nonatomic) AIRUser *otherUser; // @synthesize otherUser=_otherUser;
@property(readonly, copy, nonatomic) NSString *guestAvatarStatusValue; // @synthesize guestAvatarStatusValue=_guestAvatarStatusValue;
@property(readonly, copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(readonly, copy, nonatomic) NSString *displayStatus; // @synthesize displayStatus=_displayStatus;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSDate *postsUpdatedAt; // @synthesize postsUpdatedAt=_postsUpdatedAt;
@property(readonly, copy, nonatomic) NSMutableSet *users; // @synthesize users=_users;
@property(readonly, copy, nonatomic) NSMutableSet *posts; // @synthesize posts=_posts;
@property(readonly, nonatomic) _Bool hasPendingAlterationRequest; // @synthesize hasPendingAlterationRequest=_hasPendingAlterationRequest;
@property(readonly, nonatomic) _Bool isGroupPaymentEnabled; // @synthesize isGroupPaymentEnabled=_isGroupPaymentEnabled;
@property(readonly, nonatomic) _Bool isArchived; // @synthesize isArchived=_isArchived;
@property(readonly, nonatomic) _Bool requiresResponse; // @synthesize requiresResponse=_requiresResponse;
@property(readonly, nonatomic) _Bool responded; // @synthesize responded=_responded;
@property(readonly, nonatomic) _Bool unread; // @synthesize unread=_unread;
@property(readonly, copy, nonatomic) NSNumber *previewUserId; // @synthesize previewUserId=_previewUserId;
@property(readonly, copy, nonatomic) NSString *preview; // @synthesize preview=_preview;
@property(readonly, copy, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(readonly, copy, nonatomic) NSString *unifiedMessageThreadType; // @synthesize unifiedMessageThreadType=_unifiedMessageThreadType;
@property(readonly, copy, nonatomic) NSString *unifiedMessageThreadId; // @synthesize unifiedMessageThreadId=_unifiedMessageThreadId;
@property(readonly, copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)endDate;
@property(readonly, copy, nonatomic) AIRDate *inquiryCheckOutDate; // @synthesize inquiryCheckOutDate=_inquiryCheckOutDate;
@property(readonly, copy, nonatomic) AIRDate *inquiryCheckInDate; // @synthesize inquiryCheckInDate=_inquiryCheckInDate;
@property(readonly, copy, nonatomic) AIRPost *latestPost;
- (void)updateWithReply:(id)arg1 status:(id)arg2 session:(id)arg3 acceptedKoreanCancellationPolicy:(_Bool)arg4 onSuccess:(CDUnknownBlockType)arg5 onFailure:(CDUnknownBlockType)arg6;
- (void)updateWithReply:(id)arg1 status:(id)arg2 session:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onFailure:(CDUnknownBlockType)arg5;
- (void)updateWithReply:(id)arg1 session:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onFailure:(CDUnknownBlockType)arg4;
- (id)inquiryGuestDetails;
- (_Bool)userIsHostOrCohost:(id)arg1;

@end
