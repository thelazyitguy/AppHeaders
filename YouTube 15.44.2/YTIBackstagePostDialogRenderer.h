//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTBaseCreatePostViewModel-Protocol.h>

@class NSData, NSString, YTIBackstageAccessRestrictionsSupportedRenderers, YTIBackstageAttachmentSupportedRenderers, YTIBackstageImageCreationSupportedRenderers, YTIBackstageVideoLinkSupportedRenderers, YTIButtonSupportedRenderers, YTICommand, YTIFormattedString, YTILoggingDirectives, YTIPollCreationSupportedRenderers, YTIPollEditorInfo, YTIPostCreationDialogElementRenderer, YTIPrefilledAttachmentData, YTIPrefilledImageData, YTIRenderer, YTIThumbnailDetails;

@interface YTIBackstagePostDialogRenderer : GPBMessage <YTBaseCreatePostViewModel>
{
}

+ (id)descriptor;
@property(readonly, nonatomic) YTIPostCreationDialogElementRenderer *elementsDialog;
@property(readonly, nonatomic) YTIBackstagePostDialogRenderer *dialog;
@property(readonly, nonatomic) NSString *titleString;

// Remaining properties
@property(copy, nonatomic) NSString *accessRestrictionSelectorKey; // @dynamic accessRestrictionSelectorKey;
@property(retain, nonatomic) YTIBackstageAccessRestrictionsSupportedRenderers *accessRestrictionsSelector; // @dynamic accessRestrictionsSelector;
@property(retain, nonatomic) YTIButtonSupportedRenderers *attachLightweightVideoButton; // @dynamic attachLightweightVideoButton;
@property(retain, nonatomic) YTIButtonSupportedRenderers *attachmentDismissButton; // @dynamic attachmentDismissButton;
@property(retain, nonatomic) YTIRenderer *attachmentElementRenderer; // @dynamic attachmentElementRenderer;
@property(retain, nonatomic) YTIFormattedString *authorText; // @dynamic authorText;
@property(retain, nonatomic) YTIThumbnailDetails *authorThumbnail; // @dynamic authorThumbnail;
@property(retain, nonatomic) YTIBackstageAttachmentSupportedRenderers *backstageAttachment; // @dynamic backstageAttachment;
@property(retain, nonatomic) YTIButtonSupportedRenderers *cancelButton; // @dynamic cancelButton;
@property(nonatomic) int charLimit; // @dynamic charLimit;
@property(retain, nonatomic) YTIRenderer *creatorOnboardingPromoRenderer; // @dynamic creatorOnboardingPromoRenderer;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) YTIRenderer *dialogBanner; // @dynamic dialogBanner;
@property(retain, nonatomic) YTIFormattedString *editableText; // @dynamic editableText;
@property(nonatomic) _Bool enableAsyncImageUpload; // @dynamic enableAsyncImageUpload;
@property(retain, nonatomic) YTIFormattedString *errorMessage; // @dynamic errorMessage;
@property(nonatomic) _Bool hasAccessRestrictionSelectorKey; // @dynamic hasAccessRestrictionSelectorKey;
@property(nonatomic) _Bool hasAccessRestrictionsSelector; // @dynamic hasAccessRestrictionsSelector;
@property(nonatomic) _Bool hasAttachLightweightVideoButton; // @dynamic hasAttachLightweightVideoButton;
@property(nonatomic) _Bool hasAttachmentDismissButton; // @dynamic hasAttachmentDismissButton;
@property(nonatomic) _Bool hasAttachmentElementRenderer; // @dynamic hasAttachmentElementRenderer;
@property(nonatomic) _Bool hasAuthorText; // @dynamic hasAuthorText;
@property(nonatomic) _Bool hasAuthorThumbnail; // @dynamic hasAuthorThumbnail;
@property(nonatomic) _Bool hasBackstageAttachment; // @dynamic hasBackstageAttachment;
@property(nonatomic) _Bool hasCancelButton; // @dynamic hasCancelButton;
@property(nonatomic) _Bool hasCharLimit; // @dynamic hasCharLimit;
@property(nonatomic) _Bool hasCreatorOnboardingPromoRenderer; // @dynamic hasCreatorOnboardingPromoRenderer;
@property(nonatomic) _Bool hasDialogBanner; // @dynamic hasDialogBanner;
@property(nonatomic) _Bool hasEditableText; // @dynamic hasEditableText;
@property(nonatomic) _Bool hasEnableAsyncImageUpload; // @dynamic hasEnableAsyncImageUpload;
@property(nonatomic) _Bool hasErrorMessage; // @dynamic hasErrorMessage;
@property(nonatomic) _Bool hasHeaderRenderer; // @dynamic hasHeaderRenderer;
@property(nonatomic) _Bool hasImageButton; // @dynamic hasImageButton;
@property(nonatomic) _Bool hasImageCarouselEditor; // @dynamic hasImageCarouselEditor;
@property(nonatomic) _Bool hasImagePostPlaceholderText; // @dynamic hasImagePostPlaceholderText;
@property(nonatomic) _Bool hasLoggingDirectives; // @dynamic hasLoggingDirectives;
@property(nonatomic) _Bool hasPlaceholderText; // @dynamic hasPlaceholderText;
@property(nonatomic) _Bool hasPollButton; // @dynamic hasPollButton;
@property(nonatomic) _Bool hasPollEditorInfo; // @dynamic hasPollEditorInfo;
@property(nonatomic) _Bool hasPollPostPlaceholderText; // @dynamic hasPollPostPlaceholderText;
@property(nonatomic) _Bool hasPostButton; // @dynamic hasPostButton;
@property(nonatomic) _Bool hasPostCreationDisabledAnnotation; // @dynamic hasPostCreationDisabledAnnotation;
@property(nonatomic) _Bool hasPostCreationDisabledText; // @dynamic hasPostCreationDisabledText;
@property(nonatomic) _Bool hasPostOptionsMenu; // @dynamic hasPostOptionsMenu;
@property(nonatomic) _Bool hasPrefilledAttachment; // @dynamic hasPrefilledAttachment;
@property(nonatomic) _Bool hasPrefilledImageData; // @dynamic hasPrefilledImageData;
@property(nonatomic) _Bool hasPrefilledPlaceholderText; // @dynamic hasPrefilledPlaceholderText;
@property(nonatomic) _Bool hasPurpose; // @dynamic hasPurpose;
@property(nonatomic) _Bool hasScheduleButton; // @dynamic hasScheduleButton;
@property(nonatomic) _Bool hasScheduleIconButton; // @dynamic hasScheduleIconButton;
@property(nonatomic) _Bool hasScheduledPublishTimeBar; // @dynamic hasScheduledPublishTimeBar;
@property(nonatomic) _Bool hasScheduledPublishTimeSec; // @dynamic hasScheduledPublishTimeSec;
@property(nonatomic) _Bool hasSchedulingDateTimePicker; // @dynamic hasSchedulingDateTimePicker;
@property(nonatomic) _Bool hasSerializedCreationItemInfo; // @dynamic hasSerializedCreationItemInfo;
@property(nonatomic) _Bool hasTimestampEntityKey; // @dynamic hasTimestampEntityKey;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUserMentionSuggestionsEndpoint; // @dynamic hasUserMentionSuggestionsEndpoint;
@property(nonatomic) _Bool hasVideoLinkButton; // @dynamic hasVideoLinkButton;
@property(nonatomic) _Bool hasVideoLinkPostPlaceholderText; // @dynamic hasVideoLinkPostPlaceholderText;
@property(nonatomic) _Bool hasVisibilityLabel; // @dynamic hasVisibilityLabel;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIRenderer *headerRenderer; // @dynamic headerRenderer;
@property(retain, nonatomic) YTIBackstageImageCreationSupportedRenderers *imageButton; // @dynamic imageButton;
@property(retain, nonatomic) YTIRenderer *imageCarouselEditor; // @dynamic imageCarouselEditor;
@property(retain, nonatomic) YTIFormattedString *imagePostPlaceholderText; // @dynamic imagePostPlaceholderText;
@property(retain, nonatomic) YTILoggingDirectives *loggingDirectives; // @dynamic loggingDirectives;
@property(retain, nonatomic) YTIFormattedString *placeholderText; // @dynamic placeholderText;
@property(retain, nonatomic) YTIPollCreationSupportedRenderers *pollButton; // @dynamic pollButton;
@property(retain, nonatomic) YTIPollEditorInfo *pollEditorInfo; // @dynamic pollEditorInfo;
@property(retain, nonatomic) YTIFormattedString *pollPostPlaceholderText; // @dynamic pollPostPlaceholderText;
@property(retain, nonatomic) YTIButtonSupportedRenderers *postButton; // @dynamic postButton;
@property(retain, nonatomic) YTIFormattedString *postCreationDisabledAnnotation; // @dynamic postCreationDisabledAnnotation;
@property(retain, nonatomic) YTIFormattedString *postCreationDisabledText; // @dynamic postCreationDisabledText;
@property(retain, nonatomic) YTIRenderer *postOptionsMenu; // @dynamic postOptionsMenu;
@property(retain, nonatomic) YTIPrefilledAttachmentData *prefilledAttachment; // @dynamic prefilledAttachment;
@property(retain, nonatomic) YTIPrefilledImageData *prefilledImageData; // @dynamic prefilledImageData;
@property(retain, nonatomic) YTIFormattedString *prefilledPlaceholderText; // @dynamic prefilledPlaceholderText;
@property(nonatomic) int purpose; // @dynamic purpose;
@property(retain, nonatomic) YTIRenderer *scheduleButton; // @dynamic scheduleButton;
@property(retain, nonatomic) YTIRenderer *scheduleIconButton; // @dynamic scheduleIconButton;
@property(retain, nonatomic) YTIRenderer *scheduledPublishTimeBar; // @dynamic scheduledPublishTimeBar;
@property(nonatomic) unsigned long long scheduledPublishTimeSec; // @dynamic scheduledPublishTimeSec;
@property(retain, nonatomic) YTIRenderer *schedulingDateTimePicker; // @dynamic schedulingDateTimePicker;
@property(copy, nonatomic) NSData *serializedCreationItemInfo; // @dynamic serializedCreationItemInfo;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *timestampEntityKey; // @dynamic timestampEntityKey;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTICommand *userMentionSuggestionsEndpoint; // @dynamic userMentionSuggestionsEndpoint;
@property(retain, nonatomic) YTIBackstageVideoLinkSupportedRenderers *videoLinkButton; // @dynamic videoLinkButton;
@property(retain, nonatomic) YTIFormattedString *videoLinkPostPlaceholderText; // @dynamic videoLinkPostPlaceholderText;
@property(retain, nonatomic) YTIFormattedString *visibilityLabel; // @dynamic visibilityLabel;

@end

