// WARNING! All changes made in this file will be lost!
// Created from 'lang.strings' by 'codegen_style'
//
// This file is part of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/desktop-app/legal/blob/master/LEGAL
//
#pragma once

#include "lang/lang_tag.h"
#include "lang/lang_values.h"

namespace Lang {

inline constexpr auto kTagsCount = ushort(156);
inline constexpr auto kKeysCount = ushort(8862);

} // namespace Lang

enum lngtag_month : int { lt_month = 0 };
enum lngtag_day : int { lt_day = 1 };
enum lngtag_year : int { lt_year = 2 };
enum lngtag_count : int { lt_count = 3, lt_count_short = 1003, lt_count_decimal = 2003 };
enum lngtag_time : int { lt_time = 4 };
enum lngtag_date : int { lt_date = 5 };
enum lngtag_members_count : int { lt_members_count = 6 };
enum lngtag_online_count : int { lt_online_count = 7 };
enum lngtag_user : int { lt_user = 8 };
enum lngtag_type : int { lt_type = 9 };
enum lngtag_link : int { lt_link = 10 };
enum lngtag_size : int { lt_size = 11 };
enum lngtag_more_info : int { lt_more_info = 12 };
enum lngtag_server : int { lt_server = 13 };
enum lngtag_port : int { lt_port = 14 };
enum lngtag_phone_number : int { lt_phone_number = 15 };
enum lngtag_email : int { lt_email = 16 };
enum lngtag_minutes : int { lt_minutes = 17 };
enum lngtag_seconds : int { lt_seconds = 18 };
enum lngtag_password_hint : int { lt_password_hint = 19 };
enum lngtag_recover_email : int { lt_recover_email = 20 };
enum lngtag_when : int { lt_when = 21 };
enum lngtag_days_count : int { lt_days_count = 22 };
enum lngtag_hours_count : int { lt_hours_count = 23 };
enum lngtag_minutes_count : int { lt_minutes_count = 24 };
enum lngtag_phone : int { lt_phone = 25 };
enum lngtag_username : int { lt_username = 26 };
enum lngtag_price : int { lt_price = 27 };
enum lngtag_exceptions : int { lt_exceptions = 28 };
enum lngtag_reaction : int { lt_reaction = 29 };
enum lngtag_text : int { lt_text = 30 };
enum lngtag_emoji : int { lt_emoji = 31 };
enum lngtag_name : int { lt_name = 32 };
enum lngtag_title : int { lt_title = 33 };
enum lngtag_version : int { lt_version = 34 };
enum lngtag_index : int { lt_index = 35 };
enum lngtag_progress : int { lt_progress = 36 };
enum lngtag_domain : int { lt_domain = 37 };
enum lngtag_duration : int { lt_duration = 38 };
enum lngtag_after_duration : int { lt_after_duration = 39 };
enum lngtag_limit : int { lt_limit = 40 };
enum lngtag_transport : int { lt_transport = 41 };
enum lngtag_ping : int { lt_ping = 42 };
enum lngtag_users : int { lt_users = 43 };
enum lngtag_percent : int { lt_percent = 44 };
enum lngtag_amount : int { lt_amount = 45 };
enum lngtag_last : int { lt_last = 46 };
enum lngtag_terms : int { lt_terms = 47 };
enum lngtag_same_count : int { lt_same_count = 48 };
enum lngtag_bot : int { lt_bot = 49 };
enum lngtag_sort : int { lt_sort = 50 };
enum lngtag_app : int { lt_app = 51 };
enum lngtag_arrow : int { lt_arrow = 52 };
enum lngtag_group : int { lt_group = 53 };
enum lngtag_channel : int { lt_channel = 54 };
enum lngtag_contact : int { lt_contact = 55 };
enum lngtag_days : int { lt_days = 56 };
enum lngtag_seconds_count : int { lt_seconds_count = 57 };
enum lngtag_from : int { lt_from = 58 };
enum lngtag_chat : int { lt_chat = 59 };
enum lngtag_accumulated : int { lt_accumulated = 60 };
enum lngtag_media : int { lt_media = 61 };
enum lngtag_game : int { lt_game = 62 };
enum lngtag_invoice : int { lt_invoice = 63 };
enum lngtag_documents : int { lt_documents = 64 };
enum lngtag_distance : int { lt_distance = 65 };
enum lngtag_cost : int { lt_cost = 66 };
enum lngtag_topic : int { lt_topic = 67 };
enum lngtag_peer : int { lt_peer = 68 };
enum lngtag_action : int { lt_action = 69 };
enum lngtag_tasks : int { lt_tasks = 70 };
enum lngtag_task : int { lt_task = 71 };
enum lngtag_multiplier : int { lt_multiplier = 72 };
enum lngtag_total : int { lt_total = 73 };
enum lngtag_inline_bot : int { lt_inline_bot = 74 };
enum lngtag_second_user : int { lt_second_user = 75 };
enum lngtag_policy : int { lt_policy = 76 };
enum lngtag_recipient : int { lt_recipient = 77 };
enum lngtag_photo : int { lt_photo = 78 };
enum lngtag_video : int { lt_video = 79 };
enum lngtag_shortcut : int { lt_shortcut = 80 };
enum lngtag_links : int { lt_links = 81 };
enum lngtag_post : int { lt_post = 82 };
enum lngtag_left : int { lt_left = 83 };
enum lngtag_other : int { lt_other = 84 };
enum lngtag_gift : int { lt_gift = 85 };
enum lngtag_channels : int { lt_channels = 86 };
enum lngtag_country : int { lt_country = 87 };
enum lngtag_prize : int { lt_prize = 88 };
enum lngtag_countries : int { lt_countries = 89 };
enum lngtag_admins : int { lt_admins = 90 };
enum lngtag_winners : int { lt_winners = 91 };
enum lngtag_start_date : int { lt_start_date = 92 };
enum lngtag_cup : int { lt_cup = 93 };
enum lngtag_features : int { lt_features = 94 };
enum lngtag_platform : int { lt_platform = 95 };
enum lngtag_stars : int { lt_stars = 96 };
enum lngtag_sticker_pack : int { lt_sticker_pack = 97 };
enum lngtag_types : int { lt_types = 98 };
enum lngtag_chats : int { lt_chats = 99 };
enum lngtag_from_part : int { lt_from_part = 100 };
enum lngtag_message : int { lt_message = 101 };
enum lngtag_media_part : int { lt_media_part = 102 };
enum lngtag_caption : int { lt_caption = 103 };
enum lngtag_bot_name : int { lt_bot_name = 104 };
enum lngtag_retry : int { lt_retry = 105 };
enum lngtag_ready : int { lt_ready = 106 };
enum lngtag_mb : int { lt_mb = 107 };
enum lngtag_played : int { lt_played = 108 };
enum lngtag_language : int { lt_language = 109 };
enum lngtag_api_link : int { lt_api_link = 110 };
enum lngtag_gpl_link : int { lt_gpl_link = 111 };
enum lngtag_github_link : int { lt_github_link = 112 };
enum lngtag_faq_link : int { lt_faq_link = 113 };
enum lngtag_n : int { lt_n = 114 };
enum lngtag_file : int { lt_file = 115 };
enum lngtag_downloads : int { lt_downloads = 116 };
enum lngtag_speed : int { lt_speed = 117 };
enum lngtag_changes : int { lt_changes = 118 };
enum lngtag_first_name : int { lt_first_name = 119 };
enum lngtag_last_name : int { lt_last_name = 120 };
enum lngtag_provider : int { lt_provider = 121 };
enum lngtag_bot1 : int { lt_bot1 = 122 };
enum lngtag_bot2 : int { lt_bot2 = 123 };
enum lngtag_bot3 : int { lt_bot3 = 124 };
enum lngtag_card : int { lt_card = 125 };
enum lngtag_status : int { lt_status = 126 };
enum lngtag_delay : int { lt_delay = 127 };
enum lngtag_third : int { lt_third = 128 };
enum lngtag_interval : int { lt_interval = 129 };
enum lngtag_query : int { lt_query = 130 };
enum lngtag_until : int { lt_until = 131 };
enum lngtag_sticker_set : int { lt_sticker_set = 132 };
enum lngtag_address : int { lt_address = 133 };
enum lngtag_previous : int { lt_previous = 134 };
enum lngtag_color : int { lt_color = 135 };
enum lngtag_mention : int { lt_mention = 136 };
enum lngtag_new_topic : int { lt_new_topic = 137 };
enum lngtag_document : int { lt_document = 138 };
enum lngtag_second_document : int { lt_second_document = 139 };
enum lngtag_existing : int { lt_existing = 140 };
enum lngtag_path : int { lt_path = 141 };
enum lngtag_format : int { lt_format = 142 };
enum lngtag_till : int { lt_till = 143 };
enum lngtag_hours : int { lt_hours = 144 };
enum lngtag_lang_name : int { lt_lang_name = 145 };
enum lngtag_extension : int { lt_extension = 146 };
enum lngtag_folder : int { lt_folder = 147 };
enum lngtag_rights : int { lt_rights = 148 };
enum lngtag_increase : int { lt_increase = 149 };
enum lngtag_telegram : int { lt_telegram = 150 };
enum lngtag_item : int { lt_item = 151 };
enum lngtag_amount1 : int { lt_amount1 = 152 };
enum lngtag_amount2 : int { lt_amount2 = 153 };
enum lngtag_count1 : int { lt_count1 = 154 };
enum lngtag_count2 : int { lt_count2 = 155 };

namespace Lang {

ushort GetTagIndex(QLatin1String tag);
ushort GetKeyIndex(QLatin1String key);
bool IsTagReplaced(ushort key, ushort tag);
QString GetOriginalValue(ushort key);

namespace details {

template <typename Tag>
struct TagData;

template <typename Tag>
inline constexpr ushort TagValue() {
	return TagData<Tag>::value;
}

template <> struct TagData<lngtag_month> : std::integral_constant<ushort, ushort(lt_month)> {};
template <> struct TagData<lngtag_day> : std::integral_constant<ushort, ushort(lt_day)> {};
template <> struct TagData<lngtag_year> : std::integral_constant<ushort, ushort(lt_year)> {};
template <> struct TagData<lngtag_count> : std::integral_constant<ushort, ushort(lt_count)> {};
template <> struct TagData<lngtag_time> : std::integral_constant<ushort, ushort(lt_time)> {};
template <> struct TagData<lngtag_date> : std::integral_constant<ushort, ushort(lt_date)> {};
template <> struct TagData<lngtag_members_count> : std::integral_constant<ushort, ushort(lt_members_count)> {};
template <> struct TagData<lngtag_online_count> : std::integral_constant<ushort, ushort(lt_online_count)> {};
template <> struct TagData<lngtag_user> : std::integral_constant<ushort, ushort(lt_user)> {};
template <> struct TagData<lngtag_type> : std::integral_constant<ushort, ushort(lt_type)> {};
template <> struct TagData<lngtag_link> : std::integral_constant<ushort, ushort(lt_link)> {};
template <> struct TagData<lngtag_size> : std::integral_constant<ushort, ushort(lt_size)> {};
template <> struct TagData<lngtag_more_info> : std::integral_constant<ushort, ushort(lt_more_info)> {};
template <> struct TagData<lngtag_server> : std::integral_constant<ushort, ushort(lt_server)> {};
template <> struct TagData<lngtag_port> : std::integral_constant<ushort, ushort(lt_port)> {};
template <> struct TagData<lngtag_phone_number> : std::integral_constant<ushort, ushort(lt_phone_number)> {};
template <> struct TagData<lngtag_email> : std::integral_constant<ushort, ushort(lt_email)> {};
template <> struct TagData<lngtag_minutes> : std::integral_constant<ushort, ushort(lt_minutes)> {};
template <> struct TagData<lngtag_seconds> : std::integral_constant<ushort, ushort(lt_seconds)> {};
template <> struct TagData<lngtag_password_hint> : std::integral_constant<ushort, ushort(lt_password_hint)> {};
template <> struct TagData<lngtag_recover_email> : std::integral_constant<ushort, ushort(lt_recover_email)> {};
template <> struct TagData<lngtag_when> : std::integral_constant<ushort, ushort(lt_when)> {};
template <> struct TagData<lngtag_days_count> : std::integral_constant<ushort, ushort(lt_days_count)> {};
template <> struct TagData<lngtag_hours_count> : std::integral_constant<ushort, ushort(lt_hours_count)> {};
template <> struct TagData<lngtag_minutes_count> : std::integral_constant<ushort, ushort(lt_minutes_count)> {};
template <> struct TagData<lngtag_phone> : std::integral_constant<ushort, ushort(lt_phone)> {};
template <> struct TagData<lngtag_username> : std::integral_constant<ushort, ushort(lt_username)> {};
template <> struct TagData<lngtag_price> : std::integral_constant<ushort, ushort(lt_price)> {};
template <> struct TagData<lngtag_exceptions> : std::integral_constant<ushort, ushort(lt_exceptions)> {};
template <> struct TagData<lngtag_reaction> : std::integral_constant<ushort, ushort(lt_reaction)> {};
template <> struct TagData<lngtag_text> : std::integral_constant<ushort, ushort(lt_text)> {};
template <> struct TagData<lngtag_emoji> : std::integral_constant<ushort, ushort(lt_emoji)> {};
template <> struct TagData<lngtag_name> : std::integral_constant<ushort, ushort(lt_name)> {};
template <> struct TagData<lngtag_title> : std::integral_constant<ushort, ushort(lt_title)> {};
template <> struct TagData<lngtag_version> : std::integral_constant<ushort, ushort(lt_version)> {};
template <> struct TagData<lngtag_index> : std::integral_constant<ushort, ushort(lt_index)> {};
template <> struct TagData<lngtag_progress> : std::integral_constant<ushort, ushort(lt_progress)> {};
template <> struct TagData<lngtag_domain> : std::integral_constant<ushort, ushort(lt_domain)> {};
template <> struct TagData<lngtag_duration> : std::integral_constant<ushort, ushort(lt_duration)> {};
template <> struct TagData<lngtag_after_duration> : std::integral_constant<ushort, ushort(lt_after_duration)> {};
template <> struct TagData<lngtag_limit> : std::integral_constant<ushort, ushort(lt_limit)> {};
template <> struct TagData<lngtag_transport> : std::integral_constant<ushort, ushort(lt_transport)> {};
template <> struct TagData<lngtag_ping> : std::integral_constant<ushort, ushort(lt_ping)> {};
template <> struct TagData<lngtag_users> : std::integral_constant<ushort, ushort(lt_users)> {};
template <> struct TagData<lngtag_percent> : std::integral_constant<ushort, ushort(lt_percent)> {};
template <> struct TagData<lngtag_amount> : std::integral_constant<ushort, ushort(lt_amount)> {};
template <> struct TagData<lngtag_last> : std::integral_constant<ushort, ushort(lt_last)> {};
template <> struct TagData<lngtag_terms> : std::integral_constant<ushort, ushort(lt_terms)> {};
template <> struct TagData<lngtag_same_count> : std::integral_constant<ushort, ushort(lt_same_count)> {};
template <> struct TagData<lngtag_bot> : std::integral_constant<ushort, ushort(lt_bot)> {};
template <> struct TagData<lngtag_sort> : std::integral_constant<ushort, ushort(lt_sort)> {};
template <> struct TagData<lngtag_app> : std::integral_constant<ushort, ushort(lt_app)> {};
template <> struct TagData<lngtag_arrow> : std::integral_constant<ushort, ushort(lt_arrow)> {};
template <> struct TagData<lngtag_group> : std::integral_constant<ushort, ushort(lt_group)> {};
template <> struct TagData<lngtag_channel> : std::integral_constant<ushort, ushort(lt_channel)> {};
template <> struct TagData<lngtag_contact> : std::integral_constant<ushort, ushort(lt_contact)> {};
template <> struct TagData<lngtag_days> : std::integral_constant<ushort, ushort(lt_days)> {};
template <> struct TagData<lngtag_seconds_count> : std::integral_constant<ushort, ushort(lt_seconds_count)> {};
template <> struct TagData<lngtag_from> : std::integral_constant<ushort, ushort(lt_from)> {};
template <> struct TagData<lngtag_chat> : std::integral_constant<ushort, ushort(lt_chat)> {};
template <> struct TagData<lngtag_accumulated> : std::integral_constant<ushort, ushort(lt_accumulated)> {};
template <> struct TagData<lngtag_media> : std::integral_constant<ushort, ushort(lt_media)> {};
template <> struct TagData<lngtag_game> : std::integral_constant<ushort, ushort(lt_game)> {};
template <> struct TagData<lngtag_invoice> : std::integral_constant<ushort, ushort(lt_invoice)> {};
template <> struct TagData<lngtag_documents> : std::integral_constant<ushort, ushort(lt_documents)> {};
template <> struct TagData<lngtag_distance> : std::integral_constant<ushort, ushort(lt_distance)> {};
template <> struct TagData<lngtag_cost> : std::integral_constant<ushort, ushort(lt_cost)> {};
template <> struct TagData<lngtag_topic> : std::integral_constant<ushort, ushort(lt_topic)> {};
template <> struct TagData<lngtag_peer> : std::integral_constant<ushort, ushort(lt_peer)> {};
template <> struct TagData<lngtag_action> : std::integral_constant<ushort, ushort(lt_action)> {};
template <> struct TagData<lngtag_tasks> : std::integral_constant<ushort, ushort(lt_tasks)> {};
template <> struct TagData<lngtag_task> : std::integral_constant<ushort, ushort(lt_task)> {};
template <> struct TagData<lngtag_multiplier> : std::integral_constant<ushort, ushort(lt_multiplier)> {};
template <> struct TagData<lngtag_total> : std::integral_constant<ushort, ushort(lt_total)> {};
template <> struct TagData<lngtag_inline_bot> : std::integral_constant<ushort, ushort(lt_inline_bot)> {};
template <> struct TagData<lngtag_second_user> : std::integral_constant<ushort, ushort(lt_second_user)> {};
template <> struct TagData<lngtag_policy> : std::integral_constant<ushort, ushort(lt_policy)> {};
template <> struct TagData<lngtag_recipient> : std::integral_constant<ushort, ushort(lt_recipient)> {};
template <> struct TagData<lngtag_photo> : std::integral_constant<ushort, ushort(lt_photo)> {};
template <> struct TagData<lngtag_video> : std::integral_constant<ushort, ushort(lt_video)> {};
template <> struct TagData<lngtag_shortcut> : std::integral_constant<ushort, ushort(lt_shortcut)> {};
template <> struct TagData<lngtag_links> : std::integral_constant<ushort, ushort(lt_links)> {};
template <> struct TagData<lngtag_post> : std::integral_constant<ushort, ushort(lt_post)> {};
template <> struct TagData<lngtag_left> : std::integral_constant<ushort, ushort(lt_left)> {};
template <> struct TagData<lngtag_other> : std::integral_constant<ushort, ushort(lt_other)> {};
template <> struct TagData<lngtag_gift> : std::integral_constant<ushort, ushort(lt_gift)> {};
template <> struct TagData<lngtag_channels> : std::integral_constant<ushort, ushort(lt_channels)> {};
template <> struct TagData<lngtag_country> : std::integral_constant<ushort, ushort(lt_country)> {};
template <> struct TagData<lngtag_prize> : std::integral_constant<ushort, ushort(lt_prize)> {};
template <> struct TagData<lngtag_countries> : std::integral_constant<ushort, ushort(lt_countries)> {};
template <> struct TagData<lngtag_admins> : std::integral_constant<ushort, ushort(lt_admins)> {};
template <> struct TagData<lngtag_winners> : std::integral_constant<ushort, ushort(lt_winners)> {};
template <> struct TagData<lngtag_start_date> : std::integral_constant<ushort, ushort(lt_start_date)> {};
template <> struct TagData<lngtag_cup> : std::integral_constant<ushort, ushort(lt_cup)> {};
template <> struct TagData<lngtag_features> : std::integral_constant<ushort, ushort(lt_features)> {};
template <> struct TagData<lngtag_platform> : std::integral_constant<ushort, ushort(lt_platform)> {};
template <> struct TagData<lngtag_stars> : std::integral_constant<ushort, ushort(lt_stars)> {};
template <> struct TagData<lngtag_sticker_pack> : std::integral_constant<ushort, ushort(lt_sticker_pack)> {};
template <> struct TagData<lngtag_types> : std::integral_constant<ushort, ushort(lt_types)> {};
template <> struct TagData<lngtag_chats> : std::integral_constant<ushort, ushort(lt_chats)> {};
template <> struct TagData<lngtag_from_part> : std::integral_constant<ushort, ushort(lt_from_part)> {};
template <> struct TagData<lngtag_message> : std::integral_constant<ushort, ushort(lt_message)> {};
template <> struct TagData<lngtag_media_part> : std::integral_constant<ushort, ushort(lt_media_part)> {};
template <> struct TagData<lngtag_caption> : std::integral_constant<ushort, ushort(lt_caption)> {};
template <> struct TagData<lngtag_bot_name> : std::integral_constant<ushort, ushort(lt_bot_name)> {};
template <> struct TagData<lngtag_retry> : std::integral_constant<ushort, ushort(lt_retry)> {};
template <> struct TagData<lngtag_ready> : std::integral_constant<ushort, ushort(lt_ready)> {};
template <> struct TagData<lngtag_mb> : std::integral_constant<ushort, ushort(lt_mb)> {};
template <> struct TagData<lngtag_played> : std::integral_constant<ushort, ushort(lt_played)> {};
template <> struct TagData<lngtag_language> : std::integral_constant<ushort, ushort(lt_language)> {};
template <> struct TagData<lngtag_api_link> : std::integral_constant<ushort, ushort(lt_api_link)> {};
template <> struct TagData<lngtag_gpl_link> : std::integral_constant<ushort, ushort(lt_gpl_link)> {};
template <> struct TagData<lngtag_github_link> : std::integral_constant<ushort, ushort(lt_github_link)> {};
template <> struct TagData<lngtag_faq_link> : std::integral_constant<ushort, ushort(lt_faq_link)> {};
template <> struct TagData<lngtag_n> : std::integral_constant<ushort, ushort(lt_n)> {};
template <> struct TagData<lngtag_file> : std::integral_constant<ushort, ushort(lt_file)> {};
template <> struct TagData<lngtag_downloads> : std::integral_constant<ushort, ushort(lt_downloads)> {};
template <> struct TagData<lngtag_speed> : std::integral_constant<ushort, ushort(lt_speed)> {};
template <> struct TagData<lngtag_changes> : std::integral_constant<ushort, ushort(lt_changes)> {};
template <> struct TagData<lngtag_first_name> : std::integral_constant<ushort, ushort(lt_first_name)> {};
template <> struct TagData<lngtag_last_name> : std::integral_constant<ushort, ushort(lt_last_name)> {};
template <> struct TagData<lngtag_provider> : std::integral_constant<ushort, ushort(lt_provider)> {};
template <> struct TagData<lngtag_bot1> : std::integral_constant<ushort, ushort(lt_bot1)> {};
template <> struct TagData<lngtag_bot2> : std::integral_constant<ushort, ushort(lt_bot2)> {};
template <> struct TagData<lngtag_bot3> : std::integral_constant<ushort, ushort(lt_bot3)> {};
template <> struct TagData<lngtag_card> : std::integral_constant<ushort, ushort(lt_card)> {};
template <> struct TagData<lngtag_status> : std::integral_constant<ushort, ushort(lt_status)> {};
template <> struct TagData<lngtag_delay> : std::integral_constant<ushort, ushort(lt_delay)> {};
template <> struct TagData<lngtag_third> : std::integral_constant<ushort, ushort(lt_third)> {};
template <> struct TagData<lngtag_interval> : std::integral_constant<ushort, ushort(lt_interval)> {};
template <> struct TagData<lngtag_query> : std::integral_constant<ushort, ushort(lt_query)> {};
template <> struct TagData<lngtag_until> : std::integral_constant<ushort, ushort(lt_until)> {};
template <> struct TagData<lngtag_sticker_set> : std::integral_constant<ushort, ushort(lt_sticker_set)> {};
template <> struct TagData<lngtag_address> : std::integral_constant<ushort, ushort(lt_address)> {};
template <> struct TagData<lngtag_previous> : std::integral_constant<ushort, ushort(lt_previous)> {};
template <> struct TagData<lngtag_color> : std::integral_constant<ushort, ushort(lt_color)> {};
template <> struct TagData<lngtag_mention> : std::integral_constant<ushort, ushort(lt_mention)> {};
template <> struct TagData<lngtag_new_topic> : std::integral_constant<ushort, ushort(lt_new_topic)> {};
template <> struct TagData<lngtag_document> : std::integral_constant<ushort, ushort(lt_document)> {};
template <> struct TagData<lngtag_second_document> : std::integral_constant<ushort, ushort(lt_second_document)> {};
template <> struct TagData<lngtag_existing> : std::integral_constant<ushort, ushort(lt_existing)> {};
template <> struct TagData<lngtag_path> : std::integral_constant<ushort, ushort(lt_path)> {};
template <> struct TagData<lngtag_format> : std::integral_constant<ushort, ushort(lt_format)> {};
template <> struct TagData<lngtag_till> : std::integral_constant<ushort, ushort(lt_till)> {};
template <> struct TagData<lngtag_hours> : std::integral_constant<ushort, ushort(lt_hours)> {};
template <> struct TagData<lngtag_lang_name> : std::integral_constant<ushort, ushort(lt_lang_name)> {};
template <> struct TagData<lngtag_extension> : std::integral_constant<ushort, ushort(lt_extension)> {};
template <> struct TagData<lngtag_folder> : std::integral_constant<ushort, ushort(lt_folder)> {};
template <> struct TagData<lngtag_rights> : std::integral_constant<ushort, ushort(lt_rights)> {};
template <> struct TagData<lngtag_increase> : std::integral_constant<ushort, ushort(lt_increase)> {};
template <> struct TagData<lngtag_telegram> : std::integral_constant<ushort, ushort(lt_telegram)> {};
template <> struct TagData<lngtag_item> : std::integral_constant<ushort, ushort(lt_item)> {};
template <> struct TagData<lngtag_amount1> : std::integral_constant<ushort, ushort(lt_amount1)> {};
template <> struct TagData<lngtag_amount2> : std::integral_constant<ushort, ushort(lt_amount2)> {};
template <> struct TagData<lngtag_count1> : std::integral_constant<ushort, ushort(lt_count1)> {};
template <> struct TagData<lngtag_count2> : std::integral_constant<ushort, ushort(lt_count2)> {};

} // namespace details
} // namespace Lang

namespace tr {
namespace details {

struct Identity {
	QString operator()(const QString &value) const {
		return value;
	}
};

} // namespace details

struct now_t {
};

inline constexpr now_t now{};

inline auto to_count() {
	return rpl::map([](auto value) {
		return float64(value);
	});
}

template <typename P>
using S = std::decay_t<decltype(std::declval<P>()(QString()))>;

template <typename ...Tags>
struct phrase;

template <>
struct phrase<> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(P p = P()) const {
		return ::Lang::details::Producer<>::Combine(base, std::move(p));
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, P p = P()) const {
		return ::Lang::details::Producer<>::Current(base, std::move(p));
	}

	ushort base;
};

template <>
struct phrase<lngtag_month, lngtag_day> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_month, rpl::producer<S<P>> month__val, lngtag_day, rpl::producer<S<P>> day__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_month, lngtag_day>::Combine(base, std::move(p), month__val, day__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_month, const S<P> &month__val, lngtag_day, const S<P> &day__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_month, lngtag_day>::Current(base, std::move(p), month__val, day__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_month, lngtag_day, lngtag_year> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_month, rpl::producer<S<P>> month__val, lngtag_day, rpl::producer<S<P>> day__val, lngtag_year, rpl::producer<S<P>> year__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_month, lngtag_day, lngtag_year>::Combine(base, std::move(p), month__val, day__val, year__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_month, const S<P> &month__val, lngtag_day, const S<P> &day__val, lngtag_year, const S<P> &year__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_month, lngtag_day, lngtag_year>::Current(base, std::move(p), month__val, day__val, year__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_month, lngtag_year> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_month, rpl::producer<S<P>> month__val, lngtag_year, rpl::producer<S<P>> year__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_month, lngtag_year>::Combine(base, std::move(p), month__val, year__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_month, const S<P> &month__val, lngtag_year, const S<P> &year__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_month, lngtag_year>::Current(base, std::move(p), month__val, year__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count>::Combine(base, std::move(p), type, count__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count>::Current(base, std::move(p), type, count__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_time> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_time, rpl::producer<S<P>> time__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_time>::Combine(base, std::move(p), time__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_time, const S<P> &time__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_time>::Current(base, std::move(p), time__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_date> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_date, rpl::producer<S<P>> date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_date>::Combine(base, std::move(p), date__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_date, const S<P> &date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_date>::Current(base, std::move(p), date__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_date, lngtag_time> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_date, rpl::producer<S<P>> date__val, lngtag_time, rpl::producer<S<P>> time__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_date, lngtag_time>::Combine(base, std::move(p), date__val, time__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_date, const S<P> &date__val, lngtag_time, const S<P> &time__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_date, lngtag_time>::Current(base, std::move(p), date__val, time__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_members_count, lngtag_online_count> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_members_count, rpl::producer<S<P>> members_count__val, lngtag_online_count, rpl::producer<S<P>> online_count__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_members_count, lngtag_online_count>::Combine(base, std::move(p), members_count__val, online_count__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_members_count, const S<P> &members_count__val, lngtag_online_count, const S<P> &online_count__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_members_count, lngtag_online_count>::Current(base, std::move(p), members_count__val, online_count__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_user> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_user, rpl::producer<S<P>> user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user>::Combine(base, std::move(p), user__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_user, const S<P> &user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user>::Current(base, std::move(p), user__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_type, lngtag_time> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_type, rpl::producer<S<P>> type__val, lngtag_time, rpl::producer<S<P>> time__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_type, lngtag_time>::Combine(base, std::move(p), type__val, time__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_type, const S<P> &type__val, lngtag_time, const S<P> &time__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_type, lngtag_time>::Current(base, std::move(p), type__val, time__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_link> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_link, rpl::producer<S<P>> link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_link>::Combine(base, std::move(p), type, count__val, link__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_link, const S<P> &link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_link>::Current(base, std::move(p), type, count__val, link__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_size> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_size, rpl::producer<S<P>> size__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_size>::Combine(base, std::move(p), size__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_size, const S<P> &size__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_size>::Current(base, std::move(p), size__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_more_info> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_more_info, rpl::producer<S<P>> more_info__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_more_info>::Combine(base, std::move(p), more_info__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_more_info, const S<P> &more_info__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_more_info>::Current(base, std::move(p), more_info__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_server, lngtag_port> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_server, rpl::producer<S<P>> server__val, lngtag_port, rpl::producer<S<P>> port__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_server, lngtag_port>::Combine(base, std::move(p), server__val, port__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_server, const S<P> &server__val, lngtag_port, const S<P> &port__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_server, lngtag_port>::Current(base, std::move(p), server__val, port__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_phone_number> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_phone_number, rpl::producer<S<P>> phone_number__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_phone_number>::Combine(base, std::move(p), phone_number__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_phone_number, const S<P> &phone_number__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_phone_number>::Current(base, std::move(p), phone_number__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_email> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_email, rpl::producer<S<P>> email__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_email>::Combine(base, std::move(p), email__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_email, const S<P> &email__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_email>::Current(base, std::move(p), email__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_minutes, lngtag_seconds> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_minutes, rpl::producer<S<P>> minutes__val, lngtag_seconds, rpl::producer<S<P>> seconds__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_minutes, lngtag_seconds>::Combine(base, std::move(p), minutes__val, seconds__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_minutes, const S<P> &minutes__val, lngtag_seconds, const S<P> &seconds__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_minutes, lngtag_seconds>::Current(base, std::move(p), minutes__val, seconds__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_password_hint> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_password_hint, rpl::producer<S<P>> password_hint__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_password_hint>::Combine(base, std::move(p), password_hint__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_password_hint, const S<P> &password_hint__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_password_hint>::Current(base, std::move(p), password_hint__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_recover_email> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_recover_email, rpl::producer<S<P>> recover_email__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_recover_email>::Combine(base, std::move(p), recover_email__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_recover_email, const S<P> &recover_email__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_recover_email>::Current(base, std::move(p), recover_email__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_phone_number, lngtag_when> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_phone_number, rpl::producer<S<P>> phone_number__val, lngtag_when, rpl::producer<S<P>> when__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_phone_number, lngtag_when>::Combine(base, std::move(p), phone_number__val, when__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_phone_number, const S<P> &phone_number__val, lngtag_when, const S<P> &when__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_phone_number, lngtag_when>::Current(base, std::move(p), phone_number__val, when__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_days_count, lngtag_hours_count, lngtag_minutes_count> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_days_count, rpl::producer<S<P>> days_count__val, lngtag_hours_count, rpl::producer<S<P>> hours_count__val, lngtag_minutes_count, rpl::producer<S<P>> minutes_count__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_days_count, lngtag_hours_count, lngtag_minutes_count>::Combine(base, std::move(p), days_count__val, hours_count__val, minutes_count__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_days_count, const S<P> &days_count__val, lngtag_hours_count, const S<P> &hours_count__val, lngtag_minutes_count, const S<P> &minutes_count__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_days_count, lngtag_hours_count, lngtag_minutes_count>::Current(base, std::move(p), days_count__val, hours_count__val, minutes_count__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_hours_count, lngtag_minutes_count> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_hours_count, rpl::producer<S<P>> hours_count__val, lngtag_minutes_count, rpl::producer<S<P>> minutes_count__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_hours_count, lngtag_minutes_count>::Combine(base, std::move(p), hours_count__val, minutes_count__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_hours_count, const S<P> &hours_count__val, lngtag_minutes_count, const S<P> &minutes_count__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_hours_count, lngtag_minutes_count>::Current(base, std::move(p), hours_count__val, minutes_count__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_link> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_link, rpl::producer<S<P>> link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_link>::Combine(base, std::move(p), link__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_link, const S<P> &link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_link>::Current(base, std::move(p), link__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_phone> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_phone, rpl::producer<S<P>> phone__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_phone>::Combine(base, std::move(p), phone__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_phone, const S<P> &phone__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_phone>::Current(base, std::move(p), phone__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_username> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_username, rpl::producer<S<P>> username__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_username>::Combine(base, std::move(p), username__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_username, const S<P> &username__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_username>::Current(base, std::move(p), username__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_date, lngtag_price> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_date, rpl::producer<S<P>> date__val, lngtag_price, rpl::producer<S<P>> price__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_date, lngtag_price>::Combine(base, std::move(p), date__val, price__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_date, const S<P> &date__val, lngtag_price, const S<P> &price__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_date, lngtag_price>::Current(base, std::move(p), date__val, price__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_exceptions> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_exceptions, rpl::producer<S<P>> exceptions__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_exceptions>::Combine(base, std::move(p), exceptions__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_exceptions, const S<P> &exceptions__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_exceptions>::Current(base, std::move(p), exceptions__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_reaction, lngtag_text> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_reaction, rpl::producer<S<P>> reaction__val, lngtag_text, rpl::producer<S<P>> text__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_reaction, lngtag_text>::Combine(base, std::move(p), reaction__val, text__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_reaction, const S<P> &reaction__val, lngtag_text, const S<P> &text__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_reaction, lngtag_text>::Current(base, std::move(p), reaction__val, text__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_reaction> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_reaction, rpl::producer<S<P>> reaction__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_reaction>::Combine(base, std::move(p), reaction__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_reaction, const S<P> &reaction__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_reaction>::Current(base, std::move(p), reaction__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_reaction, lngtag_emoji> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_reaction, rpl::producer<S<P>> reaction__val, lngtag_emoji, rpl::producer<S<P>> emoji__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_reaction, lngtag_emoji>::Combine(base, std::move(p), reaction__val, emoji__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_reaction, const S<P> &reaction__val, lngtag_emoji, const S<P> &emoji__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_reaction, lngtag_emoji>::Current(base, std::move(p), reaction__val, emoji__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_reaction, lngtag_name> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_reaction, rpl::producer<S<P>> reaction__val, lngtag_name, rpl::producer<S<P>> name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_reaction, lngtag_name>::Combine(base, std::move(p), reaction__val, name__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_reaction, const S<P> &reaction__val, lngtag_name, const S<P> &name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_reaction, lngtag_name>::Current(base, std::move(p), reaction__val, name__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_reaction, lngtag_title> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_reaction, rpl::producer<S<P>> reaction__val, lngtag_title, rpl::producer<S<P>> title__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_reaction, lngtag_title>::Combine(base, std::move(p), reaction__val, title__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_reaction, const S<P> &reaction__val, lngtag_title, const S<P> &title__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_reaction, lngtag_title>::Current(base, std::move(p), reaction__val, title__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_version> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_version, rpl::producer<S<P>> version__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_version>::Combine(base, std::move(p), version__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_version, const S<P> &version__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_version>::Current(base, std::move(p), version__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_text> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_text, rpl::producer<S<P>> text__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_text>::Combine(base, std::move(p), text__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_text, const S<P> &text__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_text>::Current(base, std::move(p), text__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_index> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_index, rpl::producer<S<P>> index__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_index>::Combine(base, std::move(p), index__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_index, const S<P> &index__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_index>::Current(base, std::move(p), index__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_progress> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_progress, rpl::producer<S<P>> progress__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_progress>::Combine(base, std::move(p), progress__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_progress, const S<P> &progress__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_progress>::Current(base, std::move(p), progress__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_domain> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_domain, rpl::producer<S<P>> domain__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_domain>::Combine(base, std::move(p), domain__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_domain, const S<P> &domain__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_domain>::Current(base, std::move(p), domain__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_name> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_name, rpl::producer<S<P>> name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name>::Combine(base, std::move(p), name__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_name, const S<P> &name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name>::Current(base, std::move(p), name__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_emoji> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_emoji, rpl::producer<S<P>> emoji__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_emoji>::Combine(base, std::move(p), emoji__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_emoji, const S<P> &emoji__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_emoji>::Current(base, std::move(p), emoji__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_duration> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_duration, rpl::producer<S<P>> duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_duration>::Combine(base, std::move(p), duration__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_duration, const S<P> &duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_duration>::Current(base, std::move(p), duration__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_after_duration> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_after_duration, rpl::producer<S<P>> after_duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_after_duration>::Combine(base, std::move(p), after_duration__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_after_duration, const S<P> &after_duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_after_duration>::Current(base, std::move(p), after_duration__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_duration> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_duration, rpl::producer<S<P>> duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_duration>::Combine(base, std::move(p), type, count__val, duration__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_duration, const S<P> &duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_duration>::Current(base, std::move(p), type, count__val, duration__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_limit> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_limit, rpl::producer<S<P>> limit__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_limit>::Combine(base, std::move(p), limit__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_limit, const S<P> &limit__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_limit>::Current(base, std::move(p), limit__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_transport> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_transport, rpl::producer<S<P>> transport__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_transport>::Combine(base, std::move(p), transport__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_transport, const S<P> &transport__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_transport>::Current(base, std::move(p), transport__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_ping> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_ping, rpl::producer<S<P>> ping__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_ping>::Combine(base, std::move(p), ping__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_ping, const S<P> &ping__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_ping>::Current(base, std::move(p), ping__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_users> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_users, rpl::producer<S<P>> users__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_users>::Combine(base, std::move(p), users__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_users, const S<P> &users__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_users>::Current(base, std::move(p), users__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_percent, lngtag_amount> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_percent, rpl::producer<S<P>> percent__val, lngtag_amount, rpl::producer<S<P>> amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_percent, lngtag_amount>::Combine(base, std::move(p), percent__val, amount__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_percent, const S<P> &percent__val, lngtag_amount, const S<P> &amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_percent, lngtag_amount>::Current(base, std::move(p), percent__val, amount__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_users> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_users, rpl::producer<S<P>> users__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_users>::Combine(base, std::move(p), type, count__val, users__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_users, const S<P> &users__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_users>::Current(base, std::move(p), type, count__val, users__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_users, lngtag_last> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_users, rpl::producer<S<P>> users__val, lngtag_last, rpl::producer<S<P>> last__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_users, lngtag_last>::Combine(base, std::move(p), users__val, last__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_users, const S<P> &users__val, lngtag_last, const S<P> &last__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_users, lngtag_last>::Current(base, std::move(p), users__val, last__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_date> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_date, rpl::producer<S<P>> date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_date>::Combine(base, std::move(p), type, count__val, date__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_date, const S<P> &date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_date>::Current(base, std::move(p), type, count__val, date__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_emoji, lngtag_date> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_emoji, rpl::producer<S<P>> emoji__val, lngtag_date, rpl::producer<S<P>> date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_emoji, lngtag_date>::Combine(base, std::move(p), emoji__val, date__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_emoji, const S<P> &emoji__val, lngtag_date, const S<P> &date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_emoji, lngtag_date>::Current(base, std::move(p), emoji__val, date__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_terms> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_terms, rpl::producer<S<P>> terms__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_terms>::Combine(base, std::move(p), terms__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_terms, const S<P> &terms__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_terms>::Current(base, std::move(p), terms__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_same_count> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_same_count, rpl::producer<S<P>> same_count__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_same_count>::Combine(base, std::move(p), type, count__val, same_count__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_same_count, const S<P> &same_count__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_same_count>::Current(base, std::move(p), type, count__val, same_count__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_bot, lngtag_amount> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_bot, rpl::producer<S<P>> bot__val, lngtag_amount, rpl::producer<S<P>> amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_bot, lngtag_amount>::Combine(base, std::move(p), bot__val, amount__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_bot, const S<P> &bot__val, lngtag_amount, const S<P> &amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_bot, lngtag_amount>::Current(base, std::move(p), bot__val, amount__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_bot> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_bot, rpl::producer<S<P>> bot__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_bot>::Combine(base, std::move(p), bot__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_bot, const S<P> &bot__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_bot>::Current(base, std::move(p), bot__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_sort> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_sort, rpl::producer<S<P>> sort__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_sort>::Combine(base, std::move(p), sort__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_sort, const S<P> &sort__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_sort>::Current(base, std::move(p), sort__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_app, lngtag_amount, lngtag_duration> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_app, rpl::producer<S<P>> app__val, lngtag_amount, rpl::producer<S<P>> amount__val, lngtag_duration, rpl::producer<S<P>> duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_app, lngtag_amount, lngtag_duration>::Combine(base, std::move(p), app__val, amount__val, duration__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_app, const S<P> &app__val, lngtag_amount, const S<P> &amount__val, lngtag_duration, const S<P> &duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_app, lngtag_amount, lngtag_duration>::Current(base, std::move(p), app__val, amount__val, duration__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_amount> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_amount, rpl::producer<S<P>> amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount>::Combine(base, std::move(p), amount__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_amount, const S<P> &amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount>::Current(base, std::move(p), amount__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_amount, lngtag_app, lngtag_duration> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_amount, rpl::producer<S<P>> amount__val, lngtag_app, rpl::producer<S<P>> app__val, lngtag_duration, rpl::producer<S<P>> duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount, lngtag_app, lngtag_duration>::Combine(base, std::move(p), amount__val, app__val, duration__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_amount, const S<P> &amount__val, lngtag_app, const S<P> &app__val, lngtag_duration, const S<P> &duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount, lngtag_app, lngtag_duration>::Current(base, std::move(p), amount__val, app__val, duration__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_app> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_app, rpl::producer<S<P>> app__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_app>::Combine(base, std::move(p), app__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_app, const S<P> &app__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_app>::Current(base, std::move(p), app__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_app> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_app, rpl::producer<S<P>> app__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_app>::Combine(base, std::move(p), type, count__val, app__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_app, const S<P> &app__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_app>::Current(base, std::move(p), type, count__val, app__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_amount, lngtag_app> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_amount, rpl::producer<S<P>> amount__val, lngtag_app, rpl::producer<S<P>> app__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount, lngtag_app>::Combine(base, std::move(p), amount__val, app__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_amount, const S<P> &amount__val, lngtag_app, const S<P> &app__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount, lngtag_app>::Current(base, std::move(p), amount__val, app__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_when, lngtag_link> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_when, rpl::producer<S<P>> when__val, lngtag_link, rpl::producer<S<P>> link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_when, lngtag_link>::Combine(base, std::move(p), type, count__val, when__val, link__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_when, const S<P> &when__val, lngtag_link, const S<P> &link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_when, lngtag_link>::Current(base, std::move(p), type, count__val, when__val, link__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_arrow> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_arrow, rpl::producer<S<P>> arrow__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_arrow>::Combine(base, std::move(p), arrow__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_arrow, const S<P> &arrow__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_arrow>::Current(base, std::move(p), arrow__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_group> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_group, rpl::producer<S<P>> group__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_group>::Combine(base, std::move(p), group__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_group, const S<P> &group__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_group>::Current(base, std::move(p), group__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_group, lngtag_channel> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_group, rpl::producer<S<P>> group__val, lngtag_channel, rpl::producer<S<P>> channel__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_group, lngtag_channel>::Combine(base, std::move(p), group__val, channel__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_group, const S<P> &group__val, lngtag_channel, const S<P> &channel__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_group, lngtag_channel>::Current(base, std::move(p), group__val, channel__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_channel> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_channel, rpl::producer<S<P>> channel__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_channel>::Combine(base, std::move(p), channel__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_channel, const S<P> &channel__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_channel>::Current(base, std::move(p), channel__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_user, lngtag_group> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_user, rpl::producer<S<P>> user__val, lngtag_group, rpl::producer<S<P>> group__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_group>::Combine(base, std::move(p), user__val, group__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_user, const S<P> &user__val, lngtag_group, const S<P> &group__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_group>::Current(base, std::move(p), user__val, group__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_group> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_group, rpl::producer<S<P>> group__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_group>::Combine(base, std::move(p), type, count__val, group__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_group, const S<P> &group__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_group>::Current(base, std::move(p), type, count__val, group__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_contact> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_contact, rpl::producer<S<P>> contact__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_contact>::Combine(base, std::move(p), contact__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_contact, const S<P> &contact__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_contact>::Current(base, std::move(p), contact__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_days> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_days, rpl::producer<S<P>> days__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_days>::Combine(base, std::move(p), days__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_days, const S<P> &days__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_days>::Current(base, std::move(p), days__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_minutes_count, lngtag_seconds_count> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_minutes_count, rpl::producer<S<P>> minutes_count__val, lngtag_seconds_count, rpl::producer<S<P>> seconds_count__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_minutes_count, lngtag_seconds_count>::Combine(base, std::move(p), minutes_count__val, seconds_count__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_minutes_count, const S<P> &minutes_count__val, lngtag_seconds_count, const S<P> &seconds_count__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_minutes_count, lngtag_seconds_count>::Current(base, std::move(p), minutes_count__val, seconds_count__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_user, lngtag_chat> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_user, rpl::producer<S<P>> user__val, lngtag_chat, rpl::producer<S<P>> chat__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_user, lngtag_chat>::Combine(base, std::move(p), from__val, user__val, chat__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_user, const S<P> &user__val, lngtag_chat, const S<P> &chat__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_user, lngtag_chat>::Current(base, std::move(p), from__val, user__val, chat__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_users, lngtag_chat> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_users, rpl::producer<S<P>> users__val, lngtag_chat, rpl::producer<S<P>> chat__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_users, lngtag_chat>::Combine(base, std::move(p), from__val, users__val, chat__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_users, const S<P> &users__val, lngtag_chat, const S<P> &chat__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_users, lngtag_chat>::Current(base, std::move(p), from__val, users__val, chat__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_accumulated, lngtag_user> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_accumulated, rpl::producer<S<P>> accumulated__val, lngtag_user, rpl::producer<S<P>> user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_accumulated, lngtag_user>::Combine(base, std::move(p), accumulated__val, user__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_accumulated, const S<P> &accumulated__val, lngtag_user, const S<P> &user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_accumulated, lngtag_user>::Current(base, std::move(p), accumulated__val, user__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from>::Combine(base, std::move(p), from__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from>::Current(base, std::move(p), from__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_date> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_date, rpl::producer<S<P>> date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_date>::Combine(base, std::move(p), from__val, date__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_date, const S<P> &date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_date>::Current(base, std::move(p), from__val, date__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_duration> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_duration, rpl::producer<S<P>> duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_duration>::Combine(base, std::move(p), from__val, duration__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_duration, const S<P> &duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_duration>::Current(base, std::move(p), from__val, duration__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_user> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_user, rpl::producer<S<P>> user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_user>::Combine(base, std::move(p), from__val, user__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_user, const S<P> &user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_user>::Current(base, std::move(p), from__val, user__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_users> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_users, rpl::producer<S<P>> users__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_users>::Combine(base, std::move(p), from__val, users__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_users, const S<P> &users__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_users>::Current(base, std::move(p), from__val, users__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_title> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_title, rpl::producer<S<P>> title__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_title>::Combine(base, std::move(p), from__val, title__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_title, const S<P> &title__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_title>::Current(base, std::move(p), from__val, title__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_title> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_title, rpl::producer<S<P>> title__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_title>::Combine(base, std::move(p), title__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_title, const S<P> &title__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_title>::Current(base, std::move(p), title__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_text> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_text, rpl::producer<S<P>> text__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_text>::Combine(base, std::move(p), from__val, text__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_text, const S<P> &text__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_text>::Current(base, std::move(p), from__val, text__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_media> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_media, rpl::producer<S<P>> media__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_media>::Combine(base, std::move(p), from__val, media__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_media, const S<P> &media__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_media>::Current(base, std::move(p), from__val, media__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_game> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_game, rpl::producer<S<P>> game__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_game>::Combine(base, std::move(p), game__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_game, const S<P> &game__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_game>::Current(base, std::move(p), game__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_from, lngtag_game> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_from, rpl::producer<S<P>> from__val, lngtag_game, rpl::producer<S<P>> game__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_from, lngtag_game>::Combine(base, std::move(p), type, count__val, from__val, game__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_from, const S<P> &from__val, lngtag_game, const S<P> &game__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_from, lngtag_game>::Current(base, std::move(p), type, count__val, from__val, game__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_game> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_game, rpl::producer<S<P>> game__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_game>::Combine(base, std::move(p), type, count__val, game__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_game, const S<P> &game__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_game>::Current(base, std::move(p), type, count__val, game__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_from> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_from, rpl::producer<S<P>> from__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_from>::Combine(base, std::move(p), type, count__val, from__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_from, const S<P> &from__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_from>::Current(base, std::move(p), type, count__val, from__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_amount, lngtag_user> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_amount, rpl::producer<S<P>> amount__val, lngtag_user, rpl::producer<S<P>> user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount, lngtag_user>::Combine(base, std::move(p), amount__val, user__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_amount, const S<P> &amount__val, lngtag_user, const S<P> &user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount, lngtag_user>::Current(base, std::move(p), amount__val, user__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_amount, lngtag_user, lngtag_invoice> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_amount, rpl::producer<S<P>> amount__val, lngtag_user, rpl::producer<S<P>> user__val, lngtag_invoice, rpl::producer<S<P>> invoice__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount, lngtag_user, lngtag_invoice>::Combine(base, std::move(p), amount__val, user__val, invoice__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_amount, const S<P> &amount__val, lngtag_user, const S<P> &user__val, lngtag_invoice, const S<P> &invoice__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount, lngtag_user, lngtag_invoice>::Current(base, std::move(p), amount__val, user__val, invoice__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_user, lngtag_documents> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_user, rpl::producer<S<P>> user__val, lngtag_documents, rpl::producer<S<P>> documents__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_documents>::Combine(base, std::move(p), user__val, documents__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_user, const S<P> &user__val, lngtag_documents, const S<P> &documents__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_documents>::Current(base, std::move(p), user__val, documents__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_distance, lngtag_user> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_distance, rpl::producer<S<P>> distance__val, lngtag_user, rpl::producer<S<P>> user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_distance, lngtag_user>::Combine(base, std::move(p), from__val, distance__val, user__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_distance, const S<P> &distance__val, lngtag_user, const S<P> &user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_distance, lngtag_user>::Current(base, std::move(p), from__val, distance__val, user__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_distance> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_distance, rpl::producer<S<P>> distance__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_distance>::Combine(base, std::move(p), from__val, distance__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_distance, const S<P> &distance__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_distance>::Current(base, std::move(p), from__val, distance__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_distance, lngtag_user> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_distance, rpl::producer<S<P>> distance__val, lngtag_user, rpl::producer<S<P>> user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_distance, lngtag_user>::Combine(base, std::move(p), distance__val, user__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_distance, const S<P> &distance__val, lngtag_user, const S<P> &user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_distance, lngtag_user>::Current(base, std::move(p), distance__val, user__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_emoji> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_emoji, rpl::producer<S<P>> emoji__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_emoji>::Combine(base, std::move(p), from__val, emoji__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_emoji, const S<P> &emoji__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_emoji>::Current(base, std::move(p), from__val, emoji__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_name> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_name, rpl::producer<S<P>> name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_name>::Combine(base, std::move(p), from__val, name__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_name, const S<P> &name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_name>::Current(base, std::move(p), from__val, name__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_user, lngtag_cost> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_user, rpl::producer<S<P>> user__val, lngtag_cost, rpl::producer<S<P>> cost__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_cost>::Combine(base, std::move(p), user__val, cost__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_user, const S<P> &user__val, lngtag_cost, const S<P> &cost__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_cost>::Current(base, std::move(p), user__val, cost__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_cost> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_cost, rpl::producer<S<P>> cost__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_cost>::Combine(base, std::move(p), cost__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_cost, const S<P> &cost__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_cost>::Current(base, std::move(p), cost__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_user, lngtag_channel> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_user, rpl::producer<S<P>> user__val, lngtag_channel, rpl::producer<S<P>> channel__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_channel>::Combine(base, std::move(p), user__val, channel__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_user, const S<P> &user__val, lngtag_channel, const S<P> &channel__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_channel>::Current(base, std::move(p), user__val, channel__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_cost, lngtag_user> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_cost, rpl::producer<S<P>> cost__val, lngtag_user, rpl::producer<S<P>> user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_cost, lngtag_user>::Combine(base, std::move(p), from__val, cost__val, user__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_cost, const S<P> &cost__val, lngtag_user, const S<P> &user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_cost, lngtag_user>::Current(base, std::move(p), from__val, cost__val, user__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_cost, lngtag_name, lngtag_user> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_cost, rpl::producer<S<P>> cost__val, lngtag_name, rpl::producer<S<P>> name__val, lngtag_user, rpl::producer<S<P>> user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_cost, lngtag_name, lngtag_user>::Combine(base, std::move(p), cost__val, name__val, user__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_cost, const S<P> &cost__val, lngtag_name, const S<P> &name__val, lngtag_user, const S<P> &user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_cost, lngtag_name, lngtag_user>::Current(base, std::move(p), cost__val, name__val, user__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_cost> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_cost, rpl::producer<S<P>> cost__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_cost>::Combine(base, std::move(p), from__val, cost__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_cost, const S<P> &cost__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_cost>::Current(base, std::move(p), from__val, cost__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_cost, lngtag_name> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_cost, rpl::producer<S<P>> cost__val, lngtag_name, rpl::producer<S<P>> name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_cost, lngtag_name>::Combine(base, std::move(p), cost__val, name__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_cost, const S<P> &cost__val, lngtag_name, const S<P> &name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_cost, lngtag_name>::Current(base, std::move(p), cost__val, name__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_user, lngtag_name, lngtag_cost> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_user, rpl::producer<S<P>> user__val, lngtag_name, rpl::producer<S<P>> name__val, lngtag_cost, rpl::producer<S<P>> cost__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_name, lngtag_cost>::Combine(base, std::move(p), user__val, name__val, cost__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_user, const S<P> &user__val, lngtag_name, const S<P> &name__val, lngtag_cost, const S<P> &cost__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_name, lngtag_cost>::Current(base, std::move(p), user__val, name__val, cost__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_name, lngtag_cost> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_name, rpl::producer<S<P>> name__val, lngtag_cost, rpl::producer<S<P>> cost__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_cost>::Combine(base, std::move(p), name__val, cost__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_name, const S<P> &name__val, lngtag_cost, const S<P> &cost__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_cost>::Current(base, std::move(p), name__val, cost__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_user> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_user, rpl::producer<S<P>> user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_user>::Combine(base, std::move(p), type, count__val, user__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_user, const S<P> &user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_user>::Current(base, std::move(p), type, count__val, user__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_topic> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_topic, rpl::producer<S<P>> topic__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_topic>::Combine(base, std::move(p), topic__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_topic, const S<P> &topic__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_topic>::Current(base, std::move(p), topic__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_link, lngtag_title> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_link, rpl::producer<S<P>> link__val, lngtag_title, rpl::producer<S<P>> title__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_link, lngtag_title>::Combine(base, std::move(p), from__val, link__val, title__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_link, const S<P> &link__val, lngtag_title, const S<P> &title__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_link, lngtag_title>::Current(base, std::move(p), from__val, link__val, title__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_link, lngtag_emoji> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_link, rpl::producer<S<P>> link__val, lngtag_emoji, rpl::producer<S<P>> emoji__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_link, lngtag_emoji>::Combine(base, std::move(p), from__val, link__val, emoji__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_link, const S<P> &link__val, lngtag_emoji, const S<P> &emoji__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_link, lngtag_emoji>::Current(base, std::move(p), from__val, link__val, emoji__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_link> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_link, rpl::producer<S<P>> link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_link>::Combine(base, std::move(p), from__val, link__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_link, const S<P> &link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_link>::Current(base, std::move(p), from__val, link__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_chat, lngtag_bot> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_chat, rpl::producer<S<P>> chat__val, lngtag_bot, rpl::producer<S<P>> bot__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_chat, lngtag_bot>::Combine(base, std::move(p), chat__val, bot__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_chat, const S<P> &chat__val, lngtag_bot, const S<P> &bot__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_chat, lngtag_bot>::Current(base, std::move(p), chat__val, bot__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_amount> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_amount, rpl::producer<S<P>> amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_amount>::Combine(base, std::move(p), from__val, amount__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_amount, const S<P> &amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_amount>::Current(base, std::move(p), from__val, amount__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_peer, lngtag_amount> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_peer, rpl::producer<S<P>> peer__val, lngtag_amount, rpl::producer<S<P>> amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_peer, lngtag_amount>::Combine(base, std::move(p), peer__val, amount__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_peer, const S<P> &peer__val, lngtag_amount, const S<P> &amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_peer, lngtag_amount>::Current(base, std::move(p), peer__val, amount__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_action> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_action, rpl::producer<S<P>> action__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_action>::Combine(base, std::move(p), type, count__val, action__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_action, const S<P> &action__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_action>::Current(base, std::move(p), type, count__val, action__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_name> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_name, rpl::producer<S<P>> name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_name>::Combine(base, std::move(p), type, count__val, name__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_name, const S<P> &name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_name>::Current(base, std::move(p), type, count__val, name__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_tasks> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_tasks, rpl::producer<S<P>> tasks__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_tasks>::Combine(base, std::move(p), from__val, tasks__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_tasks, const S<P> &tasks__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_tasks>::Current(base, std::move(p), from__val, tasks__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_tasks> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_tasks, rpl::producer<S<P>> tasks__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_tasks>::Combine(base, std::move(p), tasks__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_tasks, const S<P> &tasks__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_tasks>::Current(base, std::move(p), tasks__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_tasks, lngtag_task> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_tasks, rpl::producer<S<P>> tasks__val, lngtag_task, rpl::producer<S<P>> task__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_tasks, lngtag_task>::Combine(base, std::move(p), tasks__val, task__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_tasks, const S<P> &tasks__val, lngtag_task, const S<P> &task__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_tasks, lngtag_task>::Current(base, std::move(p), tasks__val, task__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_link, lngtag_group> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_link, rpl::producer<S<P>> link__val, lngtag_group, rpl::producer<S<P>> group__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_link, lngtag_group>::Combine(base, std::move(p), link__val, group__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_link, const S<P> &link__val, lngtag_group, const S<P> &group__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_link, lngtag_group>::Current(base, std::move(p), link__val, group__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_channel, lngtag_price> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_channel, rpl::producer<S<P>> channel__val, lngtag_price, rpl::producer<S<P>> price__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_channel, lngtag_price>::Combine(base, std::move(p), channel__val, price__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_channel, const S<P> &channel__val, lngtag_price, const S<P> &price__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_channel, lngtag_price>::Current(base, std::move(p), channel__val, price__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_when> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_when, rpl::producer<S<P>> when__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_when>::Combine(base, std::move(p), when__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_when, const S<P> &when__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_when>::Current(base, std::move(p), when__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_emoji, lngtag_price, lngtag_multiplier, lngtag_total> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_emoji, rpl::producer<S<P>> emoji__val, lngtag_price, rpl::producer<S<P>> price__val, lngtag_multiplier, rpl::producer<S<P>> multiplier__val, lngtag_total, rpl::producer<S<P>> total__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_emoji, lngtag_price, lngtag_multiplier, lngtag_total>::Combine(base, std::move(p), emoji__val, price__val, multiplier__val, total__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_emoji, const S<P> &emoji__val, lngtag_price, const S<P> &price__val, lngtag_multiplier, const S<P> &multiplier__val, lngtag_total, const S<P> &total__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_emoji, lngtag_price, lngtag_multiplier, lngtag_total>::Current(base, std::move(p), emoji__val, price__val, multiplier__val, total__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_emoji, lngtag_price> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_emoji, rpl::producer<S<P>> emoji__val, lngtag_price, rpl::producer<S<P>> price__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_emoji, lngtag_price>::Combine(base, std::move(p), emoji__val, price__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_emoji, const S<P> &emoji__val, lngtag_price, const S<P> &price__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_emoji, lngtag_price>::Current(base, std::move(p), emoji__val, price__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_total> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_total, rpl::producer<S<P>> total__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_total>::Combine(base, std::move(p), total__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_total, const S<P> &total__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_total>::Current(base, std::move(p), total__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_user, lngtag_inline_bot> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_user, rpl::producer<S<P>> user__val, lngtag_inline_bot, rpl::producer<S<P>> inline_bot__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_inline_bot>::Combine(base, std::move(p), user__val, inline_bot__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_user, const S<P> &user__val, lngtag_inline_bot, const S<P> &inline_bot__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_inline_bot>::Current(base, std::move(p), user__val, inline_bot__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_channel, lngtag_inline_bot> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_channel, rpl::producer<S<P>> channel__val, lngtag_inline_bot, rpl::producer<S<P>> inline_bot__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_channel, lngtag_inline_bot>::Combine(base, std::move(p), channel__val, inline_bot__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_channel, const S<P> &channel__val, lngtag_inline_bot, const S<P> &inline_bot__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_channel, lngtag_inline_bot>::Current(base, std::move(p), channel__val, inline_bot__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_channel, lngtag_user> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_channel, rpl::producer<S<P>> channel__val, lngtag_user, rpl::producer<S<P>> user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_channel, lngtag_user>::Combine(base, std::move(p), channel__val, user__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_channel, const S<P> &channel__val, lngtag_user, const S<P> &user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_channel, lngtag_user>::Current(base, std::move(p), channel__val, user__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_percent, lngtag_progress> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_percent, rpl::producer<S<P>> percent__val, lngtag_progress, rpl::producer<S<P>> progress__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_percent, lngtag_progress>::Combine(base, std::move(p), percent__val, progress__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_percent, const S<P> &percent__val, lngtag_progress, const S<P> &progress__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_percent, lngtag_progress>::Current(base, std::move(p), percent__val, progress__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_user, lngtag_link> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_user, rpl::producer<S<P>> user__val, lngtag_link, rpl::producer<S<P>> link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_link>::Combine(base, std::move(p), user__val, link__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_user, const S<P> &user__val, lngtag_link, const S<P> &link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_link>::Current(base, std::move(p), user__val, link__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_user, lngtag_second_user> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_user, rpl::producer<S<P>> user__val, lngtag_second_user, rpl::producer<S<P>> second_user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_second_user>::Combine(base, std::move(p), user__val, second_user__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_user, const S<P> &user__val, lngtag_second_user, const S<P> &second_user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_second_user>::Current(base, std::move(p), user__val, second_user__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_user, lngtag_second_user, lngtag_name> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_user, rpl::producer<S<P>> user__val, lngtag_second_user, rpl::producer<S<P>> second_user__val, lngtag_name, rpl::producer<S<P>> name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_second_user, lngtag_name>::Combine(base, std::move(p), user__val, second_user__val, name__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_user, const S<P> &user__val, lngtag_second_user, const S<P> &second_user__val, lngtag_name, const S<P> &name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_second_user, lngtag_name>::Current(base, std::move(p), user__val, second_user__val, name__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_user, lngtag_second_user, lngtag_name> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_user, rpl::producer<S<P>> user__val, lngtag_second_user, rpl::producer<S<P>> second_user__val, lngtag_name, rpl::producer<S<P>> name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_user, lngtag_second_user, lngtag_name>::Combine(base, std::move(p), type, count__val, user__val, second_user__val, name__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_user, const S<P> &user__val, lngtag_second_user, const S<P> &second_user__val, lngtag_name, const S<P> &name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_user, lngtag_second_user, lngtag_name>::Current(base, std::move(p), type, count__val, user__val, second_user__val, name__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_emoji> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_emoji, rpl::producer<S<P>> emoji__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_emoji>::Combine(base, std::move(p), type, count__val, emoji__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_emoji, const S<P> &emoji__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_emoji>::Current(base, std::move(p), type, count__val, emoji__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_link, lngtag_policy> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_link, rpl::producer<S<P>> link__val, lngtag_policy, rpl::producer<S<P>> policy__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_link, lngtag_policy>::Combine(base, std::move(p), link__val, policy__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_link, const S<P> &link__val, lngtag_policy, const S<P> &policy__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_link, lngtag_policy>::Current(base, std::move(p), link__val, policy__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_percent, lngtag_link> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_percent, rpl::producer<S<P>> percent__val, lngtag_link, rpl::producer<S<P>> link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_percent, lngtag_link>::Combine(base, std::move(p), percent__val, link__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_percent, const S<P> &percent__val, lngtag_link, const S<P> &link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_percent, lngtag_link>::Current(base, std::move(p), percent__val, link__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_emoji, lngtag_amount> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_emoji, rpl::producer<S<P>> emoji__val, lngtag_amount, rpl::producer<S<P>> amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_emoji, lngtag_amount>::Combine(base, std::move(p), emoji__val, amount__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_emoji, const S<P> &emoji__val, lngtag_amount, const S<P> &amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_emoji, lngtag_amount>::Current(base, std::move(p), emoji__val, amount__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_text, lngtag_bot> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_text, rpl::producer<S<P>> text__val, lngtag_bot, rpl::producer<S<P>> bot__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_text, lngtag_bot>::Combine(base, std::move(p), type, count__val, text__val, bot__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_text, const S<P> &text__val, lngtag_bot, const S<P> &bot__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_text, lngtag_bot>::Current(base, std::move(p), type, count__val, text__val, bot__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_media, lngtag_chat> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_media, rpl::producer<S<P>> media__val, lngtag_chat, rpl::producer<S<P>> chat__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_media, lngtag_chat>::Combine(base, std::move(p), type, count__val, media__val, chat__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_media, const S<P> &media__val, lngtag_chat, const S<P> &chat__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_media, lngtag_chat>::Current(base, std::move(p), type, count__val, media__val, chat__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_media, lngtag_user> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_media, rpl::producer<S<P>> media__val, lngtag_user, rpl::producer<S<P>> user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_media, lngtag_user>::Combine(base, std::move(p), type, count__val, media__val, user__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_media, const S<P> &media__val, lngtag_user, const S<P> &user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_media, lngtag_user>::Current(base, std::move(p), type, count__val, media__val, user__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_title, lngtag_recipient> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_title, rpl::producer<S<P>> title__val, lngtag_recipient, rpl::producer<S<P>> recipient__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_title, lngtag_recipient>::Combine(base, std::move(p), type, count__val, title__val, recipient__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_title, const S<P> &title__val, lngtag_recipient, const S<P> &recipient__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_title, lngtag_recipient>::Current(base, std::move(p), type, count__val, title__val, recipient__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_photo, lngtag_video> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_photo, rpl::producer<S<P>> photo__val, lngtag_video, rpl::producer<S<P>> video__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_photo, lngtag_video>::Combine(base, std::move(p), photo__val, video__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_photo, const S<P> &photo__val, lngtag_video, const S<P> &video__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_photo, lngtag_video>::Current(base, std::move(p), photo__val, video__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_chat> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_chat, rpl::producer<S<P>> chat__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_chat>::Combine(base, std::move(p), type, count__val, chat__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_chat, const S<P> &chat__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_chat>::Current(base, std::move(p), type, count__val, chat__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_emoji, lngtag_cost> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_emoji, rpl::producer<S<P>> emoji__val, lngtag_cost, rpl::producer<S<P>> cost__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_emoji, lngtag_cost>::Combine(base, std::move(p), emoji__val, cost__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_emoji, const S<P> &emoji__val, lngtag_cost, const S<P> &cost__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_emoji, lngtag_cost>::Current(base, std::move(p), emoji__val, cost__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_shortcut> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_shortcut, rpl::producer<S<P>> shortcut__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_shortcut>::Combine(base, std::move(p), shortcut__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_shortcut, const S<P> &shortcut__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_shortcut>::Current(base, std::move(p), shortcut__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_links> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_links, rpl::producer<S<P>> links__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_links>::Combine(base, std::move(p), links__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_links, const S<P> &links__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_links>::Current(base, std::move(p), links__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_username, lngtag_link> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_username, rpl::producer<S<P>> username__val, lngtag_link, rpl::producer<S<P>> link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_username, lngtag_link>::Combine(base, std::move(p), username__val, link__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_username, const S<P> &username__val, lngtag_link, const S<P> &link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_username, lngtag_link>::Current(base, std::move(p), username__val, link__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_channel> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_channel, rpl::producer<S<P>> channel__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_channel>::Combine(base, std::move(p), type, count__val, channel__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_channel, const S<P> &channel__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_channel>::Current(base, std::move(p), type, count__val, channel__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_post> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_post, rpl::producer<S<P>> post__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_post>::Combine(base, std::move(p), type, count__val, post__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_post, const S<P> &post__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_post>::Current(base, std::move(p), type, count__val, post__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_left> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_left, rpl::producer<S<P>> left__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_left>::Combine(base, std::move(p), left__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_left, const S<P> &left__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_left>::Current(base, std::move(p), left__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_channel, lngtag_other> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_channel, rpl::producer<S<P>> channel__val, lngtag_other, rpl::producer<S<P>> other__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_channel, lngtag_other>::Combine(base, std::move(p), channel__val, other__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_channel, const S<P> &channel__val, lngtag_other, const S<P> &other__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_channel, lngtag_other>::Current(base, std::move(p), channel__val, other__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_channel, lngtag_gift> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_channel, rpl::producer<S<P>> channel__val, lngtag_gift, rpl::producer<S<P>> gift__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_channel, lngtag_gift>::Combine(base, std::move(p), channel__val, gift__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_channel, const S<P> &channel__val, lngtag_gift, const S<P> &gift__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_channel, lngtag_gift>::Current(base, std::move(p), channel__val, gift__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_channels> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_channels, rpl::producer<S<P>> channels__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_channels>::Combine(base, std::move(p), type, count__val, channels__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_channels, const S<P> &channels__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_channels>::Current(base, std::move(p), type, count__val, channels__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_country> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_country, rpl::producer<S<P>> country__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_country>::Combine(base, std::move(p), country__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_country, const S<P> &country__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_country>::Current(base, std::move(p), country__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_price, lngtag_amount> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_price, rpl::producer<S<P>> price__val, lngtag_amount, rpl::producer<S<P>> amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_price, lngtag_amount>::Combine(base, std::move(p), price__val, amount__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_price, const S<P> &price__val, lngtag_amount, const S<P> &amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_price, lngtag_amount>::Current(base, std::move(p), price__val, amount__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_prize, lngtag_duration> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_prize, rpl::producer<S<P>> prize__val, lngtag_duration, rpl::producer<S<P>> duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_prize, lngtag_duration>::Combine(base, std::move(p), type, count__val, prize__val, duration__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_prize, const S<P> &prize__val, lngtag_duration, const S<P> &duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_prize, lngtag_duration>::Current(base, std::move(p), type, count__val, prize__val, duration__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_prize, lngtag_amount> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_prize, rpl::producer<S<P>> prize__val, lngtag_amount, rpl::producer<S<P>> amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_prize, lngtag_amount>::Combine(base, std::move(p), type, count__val, prize__val, amount__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_prize, const S<P> &prize__val, lngtag_amount, const S<P> &amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_prize, lngtag_amount>::Current(base, std::move(p), type, count__val, prize__val, amount__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_prize> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_prize, rpl::producer<S<P>> prize__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_prize>::Combine(base, std::move(p), type, count__val, prize__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_prize, const S<P> &prize__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_prize>::Current(base, std::move(p), type, count__val, prize__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_amount> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_amount, rpl::producer<S<P>> amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_amount>::Combine(base, std::move(p), type, count__val, amount__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_amount, const S<P> &amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_amount>::Current(base, std::move(p), type, count__val, amount__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_countries> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_countries, rpl::producer<S<P>> countries__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_countries>::Combine(base, std::move(p), countries__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_countries, const S<P> &countries__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_countries>::Current(base, std::move(p), countries__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_countries, lngtag_country> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_countries, rpl::producer<S<P>> countries__val, lngtag_country, rpl::producer<S<P>> country__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_countries, lngtag_country>::Combine(base, std::move(p), countries__val, country__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_countries, const S<P> &countries__val, lngtag_country, const S<P> &country__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_countries, lngtag_country>::Current(base, std::move(p), countries__val, country__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_admins> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_admins, rpl::producer<S<P>> admins__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_admins>::Combine(base, std::move(p), admins__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_admins, const S<P> &admins__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_admins>::Current(base, std::move(p), admins__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_channel, lngtag_duration> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_channel, rpl::producer<S<P>> channel__val, lngtag_duration, rpl::producer<S<P>> duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_channel, lngtag_duration>::Combine(base, std::move(p), type, count__val, channel__val, duration__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_channel, const S<P> &channel__val, lngtag_duration, const S<P> &duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_channel, lngtag_duration>::Current(base, std::move(p), type, count__val, channel__val, duration__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_channel, lngtag_amount> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_channel, rpl::producer<S<P>> channel__val, lngtag_amount, rpl::producer<S<P>> amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_channel, lngtag_amount>::Combine(base, std::move(p), channel__val, amount__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_channel, const S<P> &channel__val, lngtag_amount, const S<P> &amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_channel, lngtag_amount>::Current(base, std::move(p), channel__val, amount__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_channel, lngtag_prize> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_channel, rpl::producer<S<P>> channel__val, lngtag_prize, rpl::producer<S<P>> prize__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_channel, lngtag_prize>::Combine(base, std::move(p), type, count__val, channel__val, prize__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_channel, const S<P> &channel__val, lngtag_prize, const S<P> &prize__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_channel, lngtag_prize>::Current(base, std::move(p), type, count__val, channel__val, prize__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_date, lngtag_winners> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_date, rpl::producer<S<P>> date__val, lngtag_winners, rpl::producer<S<P>> winners__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_date, lngtag_winners>::Combine(base, std::move(p), date__val, winners__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_date, const S<P> &date__val, lngtag_winners, const S<P> &winners__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_date, lngtag_winners>::Current(base, std::move(p), date__val, winners__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_channel, lngtag_start_date> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_channel, rpl::producer<S<P>> channel__val, lngtag_start_date, rpl::producer<S<P>> start_date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_channel, lngtag_start_date>::Combine(base, std::move(p), type, count__val, channel__val, start_date__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_channel, const S<P> &channel__val, lngtag_start_date, const S<P> &start_date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_channel, lngtag_start_date>::Current(base, std::move(p), type, count__val, channel__val, start_date__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_channel, lngtag_date> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_channel, rpl::producer<S<P>> channel__val, lngtag_date, rpl::producer<S<P>> date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_channel, lngtag_date>::Combine(base, std::move(p), channel__val, date__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_channel, const S<P> &channel__val, lngtag_date, const S<P> &date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_channel, lngtag_date>::Current(base, std::move(p), channel__val, date__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_cup> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_cup, rpl::producer<S<P>> cup__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_cup>::Combine(base, std::move(p), cup__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_cup, const S<P> &cup__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_cup>::Current(base, std::move(p), cup__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_amount, lngtag_cup> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_amount, rpl::producer<S<P>> amount__val, lngtag_cup, rpl::producer<S<P>> cup__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount, lngtag_cup>::Combine(base, std::move(p), amount__val, cup__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_amount, const S<P> &amount__val, lngtag_cup, const S<P> &cup__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount, lngtag_cup>::Current(base, std::move(p), amount__val, cup__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_date, lngtag_link> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_date, rpl::producer<S<P>> date__val, lngtag_link, rpl::producer<S<P>> link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_date, lngtag_link>::Combine(base, std::move(p), date__val, link__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_date, const S<P> &date__val, lngtag_link, const S<P> &link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_date, lngtag_link>::Current(base, std::move(p), date__val, link__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_name, lngtag_features> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_name, rpl::producer<S<P>> name__val, lngtag_features, rpl::producer<S<P>> features__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_features>::Combine(base, std::move(p), name__val, features__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_name, const S<P> &name__val, lngtag_features, const S<P> &features__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_features>::Current(base, std::move(p), name__val, features__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_name, lngtag_link> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_name, rpl::producer<S<P>> name__val, lngtag_link, rpl::producer<S<P>> link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_link>::Combine(base, std::move(p), name__val, link__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_name, const S<P> &name__val, lngtag_link, const S<P> &link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_link>::Current(base, std::move(p), name__val, link__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_amount, lngtag_link> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_amount, rpl::producer<S<P>> amount__val, lngtag_link, rpl::producer<S<P>> link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount, lngtag_link>::Combine(base, std::move(p), amount__val, link__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_amount, const S<P> &amount__val, lngtag_link, const S<P> &link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount, lngtag_link>::Current(base, std::move(p), amount__val, link__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_user, lngtag_recipient> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_user, rpl::producer<S<P>> user__val, lngtag_recipient, rpl::producer<S<P>> recipient__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_recipient>::Combine(base, std::move(p), user__val, recipient__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_user, const S<P> &user__val, lngtag_recipient, const S<P> &recipient__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_recipient>::Current(base, std::move(p), user__val, recipient__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_price> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_price, rpl::producer<S<P>> price__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_price>::Combine(base, std::move(p), price__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_price, const S<P> &price__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_price>::Current(base, std::move(p), price__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_name, lngtag_price, lngtag_user> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_name, rpl::producer<S<P>> name__val, lngtag_price, rpl::producer<S<P>> price__val, lngtag_user, rpl::producer<S<P>> user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_price, lngtag_user>::Combine(base, std::move(p), name__val, price__val, user__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_name, const S<P> &name__val, lngtag_price, const S<P> &price__val, lngtag_user, const S<P> &user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_price, lngtag_user>::Current(base, std::move(p), name__val, price__val, user__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_name, lngtag_price> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_name, rpl::producer<S<P>> name__val, lngtag_price, rpl::producer<S<P>> price__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_price>::Combine(base, std::move(p), name__val, price__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_name, const S<P> &name__val, lngtag_price, const S<P> &price__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_price>::Current(base, std::move(p), name__val, price__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_gift> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_gift, rpl::producer<S<P>> gift__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_gift>::Combine(base, std::move(p), gift__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_gift, const S<P> &gift__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_gift>::Current(base, std::move(p), gift__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_index, lngtag_name> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_index, rpl::producer<S<P>> index__val, lngtag_name, rpl::producer<S<P>> name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_index, lngtag_name>::Combine(base, std::move(p), index__val, name__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_index, const S<P> &index__val, lngtag_name, const S<P> &name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_index, lngtag_name>::Current(base, std::move(p), index__val, name__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_percent> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_percent, rpl::producer<S<P>> percent__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_percent>::Combine(base, std::move(p), percent__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_percent, const S<P> &percent__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_percent>::Current(base, std::move(p), percent__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_recipient, lngtag_date> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_recipient, rpl::producer<S<P>> recipient__val, lngtag_date, rpl::producer<S<P>> date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_recipient, lngtag_date>::Combine(base, std::move(p), recipient__val, date__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_recipient, const S<P> &recipient__val, lngtag_date, const S<P> &date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_recipient, lngtag_date>::Current(base, std::move(p), recipient__val, date__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_recipient, lngtag_date> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_recipient, rpl::producer<S<P>> recipient__val, lngtag_date, rpl::producer<S<P>> date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_recipient, lngtag_date>::Combine(base, std::move(p), from__val, recipient__val, date__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_recipient, const S<P> &recipient__val, lngtag_date, const S<P> &date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_recipient, lngtag_date>::Current(base, std::move(p), from__val, recipient__val, date__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_recipient, lngtag_date, lngtag_text> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_recipient, rpl::producer<S<P>> recipient__val, lngtag_date, rpl::producer<S<P>> date__val, lngtag_text, rpl::producer<S<P>> text__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_recipient, lngtag_date, lngtag_text>::Combine(base, std::move(p), from__val, recipient__val, date__val, text__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_recipient, const S<P> &recipient__val, lngtag_date, const S<P> &date__val, lngtag_text, const S<P> &text__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_recipient, lngtag_date, lngtag_text>::Current(base, std::move(p), from__val, recipient__val, date__val, text__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_recipient, lngtag_date, lngtag_text> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_recipient, rpl::producer<S<P>> recipient__val, lngtag_date, rpl::producer<S<P>> date__val, lngtag_text, rpl::producer<S<P>> text__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_recipient, lngtag_date, lngtag_text>::Combine(base, std::move(p), recipient__val, date__val, text__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_recipient, const S<P> &recipient__val, lngtag_date, const S<P> &date__val, lngtag_text, const S<P> &text__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_recipient, lngtag_date, lngtag_text>::Current(base, std::move(p), recipient__val, date__val, text__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_gift, lngtag_platform> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_gift, rpl::producer<S<P>> gift__val, lngtag_platform, rpl::producer<S<P>> platform__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_gift, lngtag_platform>::Combine(base, std::move(p), gift__val, platform__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_gift, const S<P> &gift__val, lngtag_platform, const S<P> &platform__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_gift, lngtag_platform>::Current(base, std::move(p), gift__val, platform__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_stars, lngtag_amount> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_stars, rpl::producer<S<P>> stars__val, lngtag_amount, rpl::producer<S<P>> amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_stars, lngtag_amount>::Combine(base, std::move(p), stars__val, amount__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_stars, const S<P> &stars__val, lngtag_amount, const S<P> &amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_stars, lngtag_amount>::Current(base, std::move(p), stars__val, amount__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_amount, lngtag_gift> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_amount, rpl::producer<S<P>> amount__val, lngtag_gift, rpl::producer<S<P>> gift__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount, lngtag_gift>::Combine(base, std::move(p), amount__val, gift__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_amount, const S<P> &amount__val, lngtag_gift, const S<P> &gift__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount, lngtag_gift>::Current(base, std::move(p), amount__val, gift__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_emoji, lngtag_platform, lngtag_arrow> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_emoji, rpl::producer<S<P>> emoji__val, lngtag_platform, rpl::producer<S<P>> platform__val, lngtag_arrow, rpl::producer<S<P>> arrow__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_emoji, lngtag_platform, lngtag_arrow>::Combine(base, std::move(p), type, count__val, emoji__val, platform__val, arrow__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_emoji, const S<P> &emoji__val, lngtag_platform, const S<P> &platform__val, lngtag_arrow, const S<P> &arrow__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_emoji, lngtag_platform, lngtag_arrow>::Current(base, std::move(p), type, count__val, emoji__val, platform__val, arrow__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_name, lngtag_recipient> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_name, rpl::producer<S<P>> name__val, lngtag_recipient, rpl::producer<S<P>> recipient__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_recipient>::Combine(base, std::move(p), name__val, recipient__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_name, const S<P> &name__val, lngtag_recipient, const S<P> &recipient__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_recipient>::Current(base, std::move(p), name__val, recipient__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_name, lngtag_recipient, lngtag_price> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_name, rpl::producer<S<P>> name__val, lngtag_recipient, rpl::producer<S<P>> recipient__val, lngtag_price, rpl::producer<S<P>> price__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_recipient, lngtag_price>::Combine(base, std::move(p), name__val, recipient__val, price__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_name, const S<P> &name__val, lngtag_recipient, const S<P> &recipient__val, lngtag_price, const S<P> &price__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_recipient, lngtag_price>::Current(base, std::move(p), name__val, recipient__val, price__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_inline_bot> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_inline_bot, rpl::producer<S<P>> inline_bot__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_inline_bot>::Combine(base, std::move(p), inline_bot__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_inline_bot, const S<P> &inline_bot__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_inline_bot>::Current(base, std::move(p), inline_bot__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_sticker_pack> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_sticker_pack, rpl::producer<S<P>> sticker_pack__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_sticker_pack>::Combine(base, std::move(p), sticker_pack__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_sticker_pack, const S<P> &sticker_pack__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_sticker_pack>::Current(base, std::move(p), sticker_pack__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_phone, lngtag_user> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_phone, rpl::producer<S<P>> phone__val, lngtag_user, rpl::producer<S<P>> user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_phone, lngtag_user>::Combine(base, std::move(p), phone__val, user__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_phone, const S<P> &phone__val, lngtag_user, const S<P> &user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_phone, lngtag_user>::Current(base, std::move(p), phone__val, user__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_user, lngtag_name> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_user, rpl::producer<S<P>> user__val, lngtag_name, rpl::producer<S<P>> name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_name>::Combine(base, std::move(p), user__val, name__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_user, const S<P> &user__val, lngtag_name, const S<P> &name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_name>::Current(base, std::move(p), user__val, name__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_emoji, lngtag_link> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_emoji, rpl::producer<S<P>> emoji__val, lngtag_link, rpl::producer<S<P>> link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_emoji, lngtag_link>::Combine(base, std::move(p), emoji__val, link__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_emoji, const S<P> &emoji__val, lngtag_link, const S<P> &link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_emoji, lngtag_link>::Current(base, std::move(p), emoji__val, link__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_emoji, lngtag_arrow> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_emoji, rpl::producer<S<P>> emoji__val, lngtag_arrow, rpl::producer<S<P>> arrow__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_emoji, lngtag_arrow>::Combine(base, std::move(p), type, count__val, emoji__val, arrow__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_emoji, const S<P> &emoji__val, lngtag_arrow, const S<P> &arrow__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_emoji, lngtag_arrow>::Current(base, std::move(p), type, count__val, emoji__val, arrow__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_name, lngtag_date> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_name, rpl::producer<S<P>> name__val, lngtag_date, rpl::producer<S<P>> date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_date>::Combine(base, std::move(p), name__val, date__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_name, const S<P> &name__val, lngtag_date, const S<P> &date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_date>::Current(base, std::move(p), name__val, date__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_types> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_types, rpl::producer<S<P>> types__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_types>::Combine(base, std::move(p), types__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_types, const S<P> &types__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_types>::Current(base, std::move(p), types__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_types, lngtag_last> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_types, rpl::producer<S<P>> types__val, lngtag_last, rpl::producer<S<P>> last__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_types, lngtag_last>::Combine(base, std::move(p), types__val, last__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_types, const S<P> &types__val, lngtag_last, const S<P> &last__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_types, lngtag_last>::Current(base, std::move(p), types__val, last__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_accumulated, lngtag_chat> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_accumulated, rpl::producer<S<P>> accumulated__val, lngtag_chat, rpl::producer<S<P>> chat__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_accumulated, lngtag_chat>::Combine(base, std::move(p), accumulated__val, chat__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_accumulated, const S<P> &accumulated__val, lngtag_chat, const S<P> &chat__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_accumulated, lngtag_chat>::Current(base, std::move(p), accumulated__val, chat__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_chats> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_chats, rpl::producer<S<P>> chats__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_chats>::Combine(base, std::move(p), type, count__val, chats__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_chats, const S<P> &chats__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_chats>::Current(base, std::move(p), type, count__val, chats__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from_part, lngtag_message> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from_part, rpl::producer<S<P>> from_part__val, lngtag_message, rpl::producer<S<P>> message__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from_part, lngtag_message>::Combine(base, std::move(p), from_part__val, message__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from_part, const S<P> &from_part__val, lngtag_message, const S<P> &message__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from_part, lngtag_message>::Current(base, std::move(p), from_part__val, message__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_media_part, lngtag_caption> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_media_part, rpl::producer<S<P>> media_part__val, lngtag_caption, rpl::producer<S<P>> caption__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_media_part, lngtag_caption>::Combine(base, std::move(p), media_part__val, caption__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_media_part, const S<P> &media_part__val, lngtag_caption, const S<P> &caption__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_media_part, lngtag_caption>::Current(base, std::move(p), media_part__val, caption__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_media> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_media, rpl::producer<S<P>> media__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_media>::Combine(base, std::move(p), media__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_media, const S<P> &media__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_media>::Current(base, std::move(p), media__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_topic> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_topic, rpl::producer<S<P>> topic__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_topic>::Combine(base, std::move(p), from__val, topic__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_topic, const S<P> &topic__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_topic>::Current(base, std::move(p), from__val, topic__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_emoji, lngtag_channels> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_emoji, rpl::producer<S<P>> emoji__val, lngtag_channels, rpl::producer<S<P>> channels__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_emoji, lngtag_channels>::Combine(base, std::move(p), type, count__val, emoji__val, channels__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_emoji, const S<P> &emoji__val, lngtag_channels, const S<P> &channels__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_emoji, lngtag_channels>::Current(base, std::move(p), type, count__val, emoji__val, channels__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_country> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_country, rpl::producer<S<P>> country__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_country>::Combine(base, std::move(p), from__val, country__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_country, const S<P> &country__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_country>::Current(base, std::move(p), from__val, country__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_country> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_country, rpl::producer<S<P>> country__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_country>::Combine(base, std::move(p), type, count__val, country__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_country, const S<P> &country__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_country>::Current(base, std::move(p), type, count__val, country__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_bot_name> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_bot_name, rpl::producer<S<P>> bot_name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_bot_name>::Combine(base, std::move(p), bot_name__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_bot_name, const S<P> &bot_name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_bot_name>::Current(base, std::move(p), bot_name__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_domain, lngtag_user> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_domain, rpl::producer<S<P>> domain__val, lngtag_user, rpl::producer<S<P>> user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_domain, lngtag_user>::Combine(base, std::move(p), domain__val, user__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_domain, const S<P> &domain__val, lngtag_user, const S<P> &user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_domain, lngtag_user>::Current(base, std::move(p), domain__val, user__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_bot, lngtag_name> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_bot, rpl::producer<S<P>> bot__val, lngtag_name, rpl::producer<S<P>> name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_bot, lngtag_name>::Combine(base, std::move(p), bot__val, name__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_bot, const S<P> &bot__val, lngtag_name, const S<P> &name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_bot, lngtag_name>::Current(base, std::move(p), bot__val, name__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_retry> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_retry, rpl::producer<S<P>> retry__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_retry>::Combine(base, std::move(p), retry__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_retry, const S<P> &retry__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_retry>::Current(base, std::move(p), retry__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_ready, lngtag_total, lngtag_mb> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_ready, rpl::producer<S<P>> ready__val, lngtag_total, rpl::producer<S<P>> total__val, lngtag_mb, rpl::producer<S<P>> mb__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_ready, lngtag_total, lngtag_mb>::Combine(base, std::move(p), ready__val, total__val, mb__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_ready, const S<P> &ready__val, lngtag_total, const S<P> &total__val, lngtag_mb, const S<P> &mb__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_ready, lngtag_total, lngtag_mb>::Current(base, std::move(p), ready__val, total__val, mb__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_duration, lngtag_size> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_duration, rpl::producer<S<P>> duration__val, lngtag_size, rpl::producer<S<P>> size__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_duration, lngtag_size>::Combine(base, std::move(p), duration__val, size__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_duration, const S<P> &duration__val, lngtag_size, const S<P> &size__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_duration, lngtag_size>::Current(base, std::move(p), duration__val, size__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_played, lngtag_duration> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_played, rpl::producer<S<P>> played__val, lngtag_duration, rpl::producer<S<P>> duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_played, lngtag_duration>::Combine(base, std::move(p), played__val, duration__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_played, const S<P> &played__val, lngtag_duration, const S<P> &duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_played, lngtag_duration>::Current(base, std::move(p), played__val, duration__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_date, lngtag_duration> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_date, rpl::producer<S<P>> date__val, lngtag_duration, rpl::producer<S<P>> duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_date, lngtag_duration>::Combine(base, std::move(p), date__val, duration__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_date, const S<P> &date__val, lngtag_duration, const S<P> &duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_date, lngtag_duration>::Current(base, std::move(p), date__val, duration__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_name, lngtag_amount> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_name, rpl::producer<S<P>> name__val, lngtag_amount, rpl::producer<S<P>> amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_amount>::Combine(base, std::move(p), name__val, amount__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_name, const S<P> &name__val, lngtag_amount, const S<P> &amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_amount>::Current(base, std::move(p), name__val, amount__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_language> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_language, rpl::producer<S<P>> language__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_language>::Combine(base, std::move(p), language__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_language, const S<P> &language__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_language>::Current(base, std::move(p), language__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_recipient> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_recipient, rpl::producer<S<P>> recipient__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_recipient>::Combine(base, std::move(p), recipient__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_recipient, const S<P> &recipient__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_recipient>::Current(base, std::move(p), recipient__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_percent> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_percent, rpl::producer<S<P>> percent__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_percent>::Combine(base, std::move(p), type, count__val, percent__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_percent, const S<P> &percent__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_percent>::Current(base, std::move(p), type, count__val, percent__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_channel, lngtag_percent, lngtag_date> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_channel, rpl::producer<S<P>> channel__val, lngtag_percent, rpl::producer<S<P>> percent__val, lngtag_date, rpl::producer<S<P>> date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_channel, lngtag_percent, lngtag_date>::Combine(base, std::move(p), type, count__val, channel__val, percent__val, date__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_channel, const S<P> &channel__val, lngtag_percent, const S<P> &percent__val, lngtag_date, const S<P> &date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_channel, lngtag_percent, lngtag_date>::Current(base, std::move(p), type, count__val, channel__val, percent__val, date__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_channel, lngtag_percent> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_channel, rpl::producer<S<P>> channel__val, lngtag_percent, rpl::producer<S<P>> percent__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_channel, lngtag_percent>::Combine(base, std::move(p), type, count__val, channel__val, percent__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_channel, const S<P> &channel__val, lngtag_percent, const S<P> &percent__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_channel, lngtag_percent>::Current(base, std::move(p), type, count__val, channel__val, percent__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_chat> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_chat, rpl::producer<S<P>> chat__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_chat>::Combine(base, std::move(p), chat__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_chat, const S<P> &chat__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_chat>::Current(base, std::move(p), chat__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_user, lngtag_chat> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_user, rpl::producer<S<P>> user__val, lngtag_chat, rpl::producer<S<P>> chat__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_chat>::Combine(base, std::move(p), user__val, chat__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_user, const S<P> &user__val, lngtag_chat, const S<P> &chat__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_chat>::Current(base, std::move(p), user__val, chat__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_api_link> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_api_link, rpl::producer<S<P>> api_link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_api_link>::Combine(base, std::move(p), api_link__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_api_link, const S<P> &api_link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_api_link>::Current(base, std::move(p), api_link__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_gpl_link, lngtag_github_link> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_gpl_link, rpl::producer<S<P>> gpl_link__val, lngtag_github_link, rpl::producer<S<P>> github_link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_gpl_link, lngtag_github_link>::Combine(base, std::move(p), gpl_link__val, github_link__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_gpl_link, const S<P> &gpl_link__val, lngtag_github_link, const S<P> &github_link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_gpl_link, lngtag_github_link>::Current(base, std::move(p), gpl_link__val, github_link__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_faq_link> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_faq_link, rpl::producer<S<P>> faq_link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_faq_link>::Combine(base, std::move(p), faq_link__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_faq_link, const S<P> &faq_link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_faq_link>::Current(base, std::move(p), faq_link__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_n, lngtag_amount> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_n, rpl::producer<S<P>> n__val, lngtag_amount, rpl::producer<S<P>> amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_n, lngtag_amount>::Combine(base, std::move(p), n__val, amount__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_n, const S<P> &n__val, lngtag_amount, const S<P> &amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_n, lngtag_amount>::Current(base, std::move(p), n__val, amount__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_file, lngtag_n, lngtag_amount> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_file, rpl::producer<S<P>> file__val, lngtag_n, rpl::producer<S<P>> n__val, lngtag_amount, rpl::producer<S<P>> amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_file, lngtag_n, lngtag_amount>::Combine(base, std::move(p), file__val, n__val, amount__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_file, const S<P> &file__val, lngtag_n, const S<P> &n__val, lngtag_amount, const S<P> &amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_file, lngtag_n, lngtag_amount>::Current(base, std::move(p), file__val, n__val, amount__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_downloads> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_downloads, rpl::producer<S<P>> downloads__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_downloads>::Combine(base, std::move(p), downloads__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_downloads, const S<P> &downloads__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_downloads>::Current(base, std::move(p), downloads__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_speed> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_speed, rpl::producer<S<P>> speed__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_speed>::Combine(base, std::move(p), speed__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_speed, const S<P> &speed__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_speed>::Current(base, std::move(p), speed__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_version, lngtag_changes, lngtag_link> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_version, rpl::producer<S<P>> version__val, lngtag_changes, rpl::producer<S<P>> changes__val, lngtag_link, rpl::producer<S<P>> link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_version, lngtag_changes, lngtag_link>::Combine(base, std::move(p), version__val, changes__val, link__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_version, const S<P> &version__val, lngtag_changes, const S<P> &changes__val, lngtag_link, const S<P> &link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_version, lngtag_changes, lngtag_link>::Current(base, std::move(p), version__val, changes__val, link__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_first_name, lngtag_last_name> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_first_name, rpl::producer<S<P>> first_name__val, lngtag_last_name, rpl::producer<S<P>> last_name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_first_name, lngtag_last_name>::Combine(base, std::move(p), first_name__val, last_name__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_first_name, const S<P> &first_name__val, lngtag_last_name, const S<P> &last_name__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_first_name, lngtag_last_name>::Current(base, std::move(p), first_name__val, last_name__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_amount, lngtag_title> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_amount, rpl::producer<S<P>> amount__val, lngtag_title, rpl::producer<S<P>> title__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount, lngtag_title>::Combine(base, std::move(p), amount__val, title__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_amount, const S<P> &amount__val, lngtag_title, const S<P> &title__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount, lngtag_title>::Current(base, std::move(p), amount__val, title__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_provider> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_provider, rpl::producer<S<P>> provider__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_provider>::Combine(base, std::move(p), provider__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_provider, const S<P> &provider__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_provider>::Current(base, std::move(p), provider__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_bot1, lngtag_provider, lngtag_bot2, lngtag_bot3> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_bot1, rpl::producer<S<P>> bot1__val, lngtag_provider, rpl::producer<S<P>> provider__val, lngtag_bot2, rpl::producer<S<P>> bot2__val, lngtag_bot3, rpl::producer<S<P>> bot3__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_bot1, lngtag_provider, lngtag_bot2, lngtag_bot3>::Combine(base, std::move(p), bot1__val, provider__val, bot2__val, bot3__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_bot1, const S<P> &bot1__val, lngtag_provider, const S<P> &provider__val, lngtag_bot2, const S<P> &bot2__val, lngtag_bot3, const S<P> &bot3__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_bot1, lngtag_provider, lngtag_bot2, lngtag_bot3>::Current(base, std::move(p), bot1__val, provider__val, bot2__val, bot3__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_card> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_card, rpl::producer<S<P>> card__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_card>::Combine(base, std::move(p), card__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_card, const S<P> &card__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_card>::Current(base, std::move(p), card__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_amount, lngtag_status> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_amount, rpl::producer<S<P>> amount__val, lngtag_status, rpl::producer<S<P>> status__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount, lngtag_status>::Combine(base, std::move(p), amount__val, status__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_amount, const S<P> &amount__val, lngtag_status, const S<P> &status__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount, lngtag_status>::Current(base, std::move(p), amount__val, status__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_time, lngtag_duration> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_time, rpl::producer<S<P>> time__val, lngtag_duration, rpl::producer<S<P>> duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_time, lngtag_duration>::Combine(base, std::move(p), time__val, duration__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_time, const S<P> &time__val, lngtag_duration, const S<P> &duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_time, lngtag_duration>::Current(base, std::move(p), time__val, duration__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_type, lngtag_duration> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_type, rpl::producer<S<P>> type__val, lngtag_duration, rpl::producer<S<P>> duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_type, lngtag_duration>::Combine(base, std::move(p), type__val, duration__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_type, const S<P> &type__val, lngtag_duration, const S<P> &duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_type, lngtag_duration>::Current(base, std::move(p), type__val, duration__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_delay> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_delay, rpl::producer<S<P>> delay__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_delay>::Combine(base, std::move(p), delay__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_delay, const S<P> &delay__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_delay>::Current(base, std::move(p), delay__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_user, lngtag_other> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_user, rpl::producer<S<P>> user__val, lngtag_other, rpl::producer<S<P>> other__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_other>::Combine(base, std::move(p), user__val, other__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_user, const S<P> &user__val, lngtag_other, const S<P> &other__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_other>::Current(base, std::move(p), user__val, other__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_user, lngtag_other, lngtag_third> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_user, rpl::producer<S<P>> user__val, lngtag_other, rpl::producer<S<P>> other__val, lngtag_third, rpl::producer<S<P>> third__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_other, lngtag_third>::Combine(base, std::move(p), user__val, other__val, third__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_user, const S<P> &user__val, lngtag_other, const S<P> &other__val, lngtag_third, const S<P> &third__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_other, lngtag_third>::Current(base, std::move(p), user__val, other__val, third__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_user, lngtag_other> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_user, rpl::producer<S<P>> user__val, lngtag_other, rpl::producer<S<P>> other__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_user, lngtag_other>::Combine(base, std::move(p), type, count__val, user__val, other__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_user, const S<P> &user__val, lngtag_other, const S<P> &other__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_user, lngtag_other>::Current(base, std::move(p), type, count__val, user__val, other__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_user, lngtag_date> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_user, rpl::producer<S<P>> user__val, lngtag_date, rpl::producer<S<P>> date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_date>::Combine(base, std::move(p), user__val, date__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_user, const S<P> &user__val, lngtag_date, const S<P> &date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_date>::Current(base, std::move(p), user__val, date__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_interval> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_interval, rpl::producer<S<P>> interval__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_interval>::Combine(base, std::move(p), interval__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_interval, const S<P> &interval__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_interval>::Current(base, std::move(p), interval__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_group, lngtag_user> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_group, rpl::producer<S<P>> group__val, lngtag_user, rpl::producer<S<P>> user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_group, lngtag_user>::Combine(base, std::move(p), group__val, user__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_group, const S<P> &group__val, lngtag_user, const S<P> &user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_group, lngtag_user>::Current(base, std::move(p), group__val, user__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_user, lngtag_amount> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_user, rpl::producer<S<P>> user__val, lngtag_amount, rpl::producer<S<P>> amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_amount>::Combine(base, std::move(p), user__val, amount__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_user, const S<P> &user__val, lngtag_amount, const S<P> &amount__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_amount>::Current(base, std::move(p), user__val, amount__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_query> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_query, rpl::producer<S<P>> query__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_query>::Combine(base, std::move(p), query__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_query, const S<P> &query__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_query>::Current(base, std::move(p), query__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_link, lngtag_user> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_link, rpl::producer<S<P>> link__val, lngtag_user, rpl::producer<S<P>> user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_link, lngtag_user>::Combine(base, std::move(p), from__val, link__val, user__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_link, const S<P> &link__val, lngtag_user, const S<P> &user__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_link, lngtag_user>::Current(base, std::move(p), from__val, link__val, user__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_user, lngtag_until> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_user, rpl::producer<S<P>> user__val, lngtag_until, rpl::producer<S<P>> until__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_until>::Combine(base, std::move(p), user__val, until__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_user, const S<P> &user__val, lngtag_until, const S<P> &until__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_user, lngtag_until>::Current(base, std::move(p), user__val, until__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_sticker_set> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_sticker_set, rpl::producer<S<P>> sticker_set__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_sticker_set>::Combine(base, std::move(p), from__val, sticker_set__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_sticker_set, const S<P> &sticker_set__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_sticker_set>::Current(base, std::move(p), from__val, sticker_set__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_chat> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_chat, rpl::producer<S<P>> chat__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_chat>::Combine(base, std::move(p), from__val, chat__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_chat, const S<P> &chat__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_chat>::Current(base, std::move(p), from__val, chat__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_address> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_address, rpl::producer<S<P>> address__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_address>::Combine(base, std::move(p), from__val, address__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_address, const S<P> &address__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_address>::Current(base, std::move(p), from__val, address__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_user, lngtag_percent> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_user, rpl::producer<S<P>> user__val, lngtag_percent, rpl::producer<S<P>> percent__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_user, lngtag_percent>::Combine(base, std::move(p), from__val, user__val, percent__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_user, const S<P> &user__val, lngtag_percent, const S<P> &percent__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_user, lngtag_percent>::Current(base, std::move(p), from__val, user__val, percent__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_previous, lngtag_color> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_previous, rpl::producer<S<P>> previous__val, lngtag_color, rpl::producer<S<P>> color__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_previous, lngtag_color>::Combine(base, std::move(p), from__val, previous__val, color__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_previous, const S<P> &previous__val, lngtag_color, const S<P> &color__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_previous, lngtag_color>::Current(base, std::move(p), from__val, previous__val, color__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_previous, lngtag_emoji> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_previous, rpl::producer<S<P>> previous__val, lngtag_emoji, rpl::producer<S<P>> emoji__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_previous, lngtag_emoji>::Combine(base, std::move(p), from__val, previous__val, emoji__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_previous, const S<P> &previous__val, lngtag_emoji, const S<P> &emoji__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_previous, lngtag_emoji>::Current(base, std::move(p), from__val, previous__val, emoji__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_emoji, lngtag_date> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_emoji, rpl::producer<S<P>> emoji__val, lngtag_date, rpl::producer<S<P>> date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_emoji, lngtag_date>::Combine(base, std::move(p), from__val, emoji__val, date__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_emoji, const S<P> &emoji__val, lngtag_date, const S<P> &date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_emoji, lngtag_date>::Current(base, std::move(p), from__val, emoji__val, date__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_previous, lngtag_emoji, lngtag_date> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_previous, rpl::producer<S<P>> previous__val, lngtag_emoji, rpl::producer<S<P>> emoji__val, lngtag_date, rpl::producer<S<P>> date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_previous, lngtag_emoji, lngtag_date>::Combine(base, std::move(p), from__val, previous__val, emoji__val, date__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_previous, const S<P> &previous__val, lngtag_emoji, const S<P> &emoji__val, lngtag_date, const S<P> &date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_previous, lngtag_emoji, lngtag_date>::Current(base, std::move(p), from__val, previous__val, emoji__val, date__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_name, lngtag_mention> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_name, rpl::producer<S<P>> name__val, lngtag_mention, rpl::producer<S<P>> mention__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_mention>::Combine(base, std::move(p), name__val, mention__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_name, const S<P> &name__val, lngtag_mention, const S<P> &mention__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_name, lngtag_mention>::Current(base, std::move(p), name__val, mention__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_previous, lngtag_duration> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_previous, rpl::producer<S<P>> previous__val, lngtag_duration, rpl::producer<S<P>> duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_previous, lngtag_duration>::Combine(base, std::move(p), from__val, previous__val, duration__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_previous, const S<P> &previous__val, lngtag_duration, const S<P> &duration__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_previous, lngtag_duration>::Current(base, std::move(p), from__val, previous__val, duration__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_previous, lngtag_limit> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_previous, rpl::producer<S<P>> previous__val, lngtag_limit, rpl::producer<S<P>> limit__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_previous, lngtag_limit>::Combine(base, std::move(p), previous__val, limit__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_previous, const S<P> &previous__val, lngtag_limit, const S<P> &limit__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_previous, lngtag_limit>::Current(base, std::move(p), previous__val, limit__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_topic, lngtag_new_topic> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_topic, rpl::producer<S<P>> topic__val, lngtag_new_topic, rpl::producer<S<P>> new_topic__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_topic, lngtag_new_topic>::Combine(base, std::move(p), from__val, topic__val, new_topic__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_topic, const S<P> &topic__val, lngtag_new_topic, const S<P> &new_topic__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_topic, lngtag_new_topic>::Current(base, std::move(p), from__val, topic__val, new_topic__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_document, lngtag_second_document> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_document, rpl::producer<S<P>> document__val, lngtag_second_document, rpl::producer<S<P>> second_document__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_document, lngtag_second_document>::Combine(base, std::move(p), document__val, second_document__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_document, const S<P> &document__val, lngtag_second_document, const S<P> &second_document__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_document, lngtag_second_document>::Current(base, std::move(p), document__val, second_document__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_policy, lngtag_bot> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_policy, rpl::producer<S<P>> policy__val, lngtag_bot, rpl::producer<S<P>> bot__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_policy, lngtag_bot>::Combine(base, std::move(p), policy__val, bot__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_policy, const S<P> &policy__val, lngtag_bot, const S<P> &bot__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_policy, lngtag_bot>::Current(base, std::move(p), policy__val, bot__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_existing> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_existing, rpl::producer<S<P>> existing__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_existing>::Combine(base, std::move(p), existing__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_existing, const S<P> &existing__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_existing>::Current(base, std::move(p), existing__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_path> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_path, rpl::producer<S<P>> path__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_path>::Combine(base, std::move(p), path__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_path, const S<P> &path__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_path>::Current(base, std::move(p), path__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_format, lngtag_path> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_format, rpl::producer<S<P>> format__val, lngtag_path, rpl::producer<S<P>> path__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_format, lngtag_path>::Combine(base, std::move(p), format__val, path__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_format, const S<P> &format__val, lngtag_path, const S<P> &path__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_format, lngtag_path>::Current(base, std::move(p), format__val, path__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_from, lngtag_till> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_from, rpl::producer<S<P>> from__val, lngtag_till, rpl::producer<S<P>> till__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_till>::Combine(base, std::move(p), from__val, till__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_from, const S<P> &from__val, lngtag_till, const S<P> &till__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_from, lngtag_till>::Current(base, std::move(p), from__val, till__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_hours, lngtag_date> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_hours, rpl::producer<S<P>> hours__val, lngtag_date, rpl::producer<S<P>> date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_hours, lngtag_date>::Combine(base, std::move(p), hours__val, date__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_hours, const S<P> &hours__val, lngtag_date, const S<P> &date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_hours, lngtag_date>::Current(base, std::move(p), hours__val, date__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_lang_name, lngtag_percent, lngtag_link> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_lang_name, rpl::producer<S<P>> lang_name__val, lngtag_percent, rpl::producer<S<P>> percent__val, lngtag_link, rpl::producer<S<P>> link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_lang_name, lngtag_percent, lngtag_link>::Combine(base, std::move(p), lang_name__val, percent__val, link__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_lang_name, const S<P> &lang_name__val, lngtag_percent, const S<P> &percent__val, lngtag_link, const S<P> &link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_lang_name, lngtag_percent, lngtag_link>::Current(base, std::move(p), lang_name__val, percent__val, link__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_lang_name, lngtag_link> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_lang_name, rpl::producer<S<P>> lang_name__val, lngtag_link, rpl::producer<S<P>> link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_lang_name, lngtag_link>::Combine(base, std::move(p), lang_name__val, link__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_lang_name, const S<P> &lang_name__val, lngtag_link, const S<P> &link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_lang_name, lngtag_link>::Current(base, std::move(p), lang_name__val, link__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_extension> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_extension, rpl::producer<S<P>> extension__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_extension>::Combine(base, std::move(p), extension__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_extension, const S<P> &extension__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_extension>::Current(base, std::move(p), extension__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count, lngtag_total> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count type, rpl::producer<float64> count__val, lngtag_total, rpl::producer<S<P>> total__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_total>::Combine(base, std::move(p), type, count__val, total__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count type, float64 count__val, lngtag_total, const S<P> &total__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count, lngtag_total>::Current(base, std::move(p), type, count__val, total__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_chat, lngtag_folder> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_chat, rpl::producer<S<P>> chat__val, lngtag_folder, rpl::producer<S<P>> folder__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_chat, lngtag_folder>::Combine(base, std::move(p), chat__val, folder__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_chat, const S<P> &chat__val, lngtag_folder, const S<P> &folder__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_chat, lngtag_folder>::Current(base, std::move(p), chat__val, folder__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_folder> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_folder, rpl::producer<S<P>> folder__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_folder>::Combine(base, std::move(p), folder__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_folder, const S<P> &folder__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_folder>::Current(base, std::move(p), folder__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_rights> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_rights, rpl::producer<S<P>> rights__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_rights>::Combine(base, std::move(p), rights__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_rights, const S<P> &rights__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_rights>::Current(base, std::move(p), rights__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_rights, lngtag_last> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_rights, rpl::producer<S<P>> rights__val, lngtag_last, rpl::producer<S<P>> last__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_rights, lngtag_last>::Combine(base, std::move(p), rights__val, last__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_rights, const S<P> &rights__val, lngtag_last, const S<P> &last__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_rights, lngtag_last>::Current(base, std::move(p), rights__val, last__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_bot, lngtag_chat> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_bot, rpl::producer<S<P>> bot__val, lngtag_chat, rpl::producer<S<P>> chat__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_bot, lngtag_chat>::Combine(base, std::move(p), bot__val, chat__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_bot, const S<P> &bot__val, lngtag_chat, const S<P> &chat__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_bot, lngtag_chat>::Current(base, std::move(p), bot__val, chat__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_bot, lngtag_chat, lngtag_rights> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_bot, rpl::producer<S<P>> bot__val, lngtag_chat, rpl::producer<S<P>> chat__val, lngtag_rights, rpl::producer<S<P>> rights__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_bot, lngtag_chat, lngtag_rights>::Combine(base, std::move(p), bot__val, chat__val, rights__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_bot, const S<P> &bot__val, lngtag_chat, const S<P> &chat__val, lngtag_rights, const S<P> &rights__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_bot, lngtag_chat, lngtag_rights>::Current(base, std::move(p), bot__val, chat__val, rights__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_days_count, lngtag_month, lngtag_year> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_days_count, rpl::producer<S<P>> days_count__val, lngtag_month, rpl::producer<S<P>> month__val, lngtag_year, rpl::producer<S<P>> year__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_days_count, lngtag_month, lngtag_year>::Combine(base, std::move(p), days_count__val, month__val, year__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_days_count, const S<P> &days_count__val, lngtag_month, const S<P> &month__val, lngtag_year, const S<P> &year__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_days_count, lngtag_month, lngtag_year>::Current(base, std::move(p), days_count__val, month__val, year__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_days_count, lngtag_month> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_days_count, rpl::producer<S<P>> days_count__val, lngtag_month, rpl::producer<S<P>> month__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_days_count, lngtag_month>::Combine(base, std::move(p), days_count__val, month__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_days_count, const S<P> &days_count__val, lngtag_month, const S<P> &month__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_days_count, lngtag_month>::Current(base, std::move(p), days_count__val, month__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_day, lngtag_days_count, lngtag_month, lngtag_year> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_day, rpl::producer<S<P>> day__val, lngtag_days_count, rpl::producer<S<P>> days_count__val, lngtag_month, rpl::producer<S<P>> month__val, lngtag_year, rpl::producer<S<P>> year__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_day, lngtag_days_count, lngtag_month, lngtag_year>::Combine(base, std::move(p), day__val, days_count__val, month__val, year__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_day, const S<P> &day__val, lngtag_days_count, const S<P> &days_count__val, lngtag_month, const S<P> &month__val, lngtag_year, const S<P> &year__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_day, lngtag_days_count, lngtag_month, lngtag_year>::Current(base, std::move(p), day__val, days_count__val, month__val, year__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_day, lngtag_days_count, lngtag_month, lngtag_time> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_day, rpl::producer<S<P>> day__val, lngtag_days_count, rpl::producer<S<P>> days_count__val, lngtag_month, rpl::producer<S<P>> month__val, lngtag_time, rpl::producer<S<P>> time__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_day, lngtag_days_count, lngtag_month, lngtag_time>::Combine(base, std::move(p), day__val, days_count__val, month__val, time__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_day, const S<P> &day__val, lngtag_days_count, const S<P> &days_count__val, lngtag_month, const S<P> &month__val, lngtag_time, const S<P> &time__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_day, lngtag_days_count, lngtag_month, lngtag_time>::Current(base, std::move(p), day__val, days_count__val, month__val, time__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_link, lngtag_increase> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_link, rpl::producer<S<P>> link__val, lngtag_increase, rpl::producer<S<P>> increase__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_link, lngtag_increase>::Combine(base, std::move(p), link__val, increase__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_link, const S<P> &link__val, lngtag_increase, const S<P> &increase__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_link, lngtag_increase>::Current(base, std::move(p), link__val, increase__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_bot, lngtag_link> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_bot, rpl::producer<S<P>> bot__val, lngtag_link, rpl::producer<S<P>> link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_bot, lngtag_link>::Combine(base, std::move(p), bot__val, link__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_bot, const S<P> &bot__val, lngtag_link, const S<P> &link__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_bot, lngtag_link>::Current(base, std::move(p), bot__val, link__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_link, lngtag_date> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_link, rpl::producer<S<P>> link__val, lngtag_date, rpl::producer<S<P>> date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_link, lngtag_date>::Combine(base, std::move(p), link__val, date__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_link, const S<P> &link__val, lngtag_date, const S<P> &date__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_link, lngtag_date>::Current(base, std::move(p), link__val, date__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_file> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_file, rpl::producer<S<P>> file__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_file>::Combine(base, std::move(p), file__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_file, const S<P> &file__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_file>::Current(base, std::move(p), file__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_telegram> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_telegram, rpl::producer<S<P>> telegram__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_telegram>::Combine(base, std::move(p), telegram__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_telegram, const S<P> &telegram__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_telegram>::Current(base, std::move(p), telegram__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_item> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_item, rpl::producer<S<P>> item__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_item>::Combine(base, std::move(p), item__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_item, const S<P> &item__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_item>::Current(base, std::move(p), item__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_amount1, lngtag_amount2> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_amount1, rpl::producer<S<P>> amount1__val, lngtag_amount2, rpl::producer<S<P>> amount2__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount1, lngtag_amount2>::Combine(base, std::move(p), amount1__val, amount2__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_amount1, const S<P> &amount1__val, lngtag_amount2, const S<P> &amount2__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_amount1, lngtag_amount2>::Current(base, std::move(p), amount1__val, amount2__val);
	}

	ushort base;
};

template <>
struct phrase<lngtag_count1, lngtag_count2> {
	template <typename P = details::Identity>
	rpl::producer<S<P>> operator()(lngtag_count1, rpl::producer<S<P>> count1__val, lngtag_count2, rpl::producer<S<P>> count2__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count1, lngtag_count2>::Combine(base, std::move(p), count1__val, count2__val);
	}

	template <typename P = details::Identity>
	S<P> operator()(now_t, lngtag_count1, const S<P> &count1__val, lngtag_count2, const S<P> &count2__val, P p = P()) const {
		return ::Lang::details::Producer<lngtag_count1, lngtag_count2>::Current(base, std::move(p), count1__val, count2__val);
	}

	ushort base;
};

inline constexpr phrase<> lng_language_name{ ushort(0) };
inline constexpr phrase<> lng_switch_to_this{ ushort(1) };
inline constexpr phrase<> lng_menu_contacts{ ushort(2) };
inline constexpr phrase<> lng_menu_calls{ ushort(3) };
inline constexpr phrase<> lng_menu_settings{ ushort(4) };
inline constexpr phrase<> lng_menu_about{ ushort(5) };
inline constexpr phrase<> lng_menu_update{ ushort(6) };
inline constexpr phrase<> lng_menu_night_mode{ ushort(7) };
inline constexpr phrase<> lng_menu_add_account{ ushort(8) };
inline constexpr phrase<> lng_menu_activate{ ushort(9) };
inline constexpr phrase<> lng_menu_set_status{ ushort(10) };
inline constexpr phrase<> lng_menu_change_status{ ushort(11) };
inline constexpr phrase<> lng_menu_my_profile{ ushort(12) };
inline constexpr phrase<> lng_menu_my_stories{ ushort(13) };
inline constexpr phrase<> lng_menu_my_groups{ ushort(14) };
inline constexpr phrase<> lng_menu_my_channels{ ushort(15) };
inline constexpr phrase<> lng_disable_notifications_from_tray{ ushort(16) };
inline constexpr phrase<> lng_enable_notifications_from_tray{ ushort(17) };
inline constexpr phrase<> lng_open_from_tray{ ushort(18) };
inline constexpr phrase<> lng_minimize_to_tray{ ushort(19) };
inline constexpr phrase<> lng_quit_from_tray{ ushort(20) };
inline constexpr phrase<> lng_tray_icon_text{ ushort(21) };
inline constexpr phrase<> lng_month1{ ushort(22) };
inline constexpr phrase<> lng_month2{ ushort(23) };
inline constexpr phrase<> lng_month3{ ushort(24) };
inline constexpr phrase<> lng_month4{ ushort(25) };
inline constexpr phrase<> lng_month5{ ushort(26) };
inline constexpr phrase<> lng_month6{ ushort(27) };
inline constexpr phrase<> lng_month7{ ushort(28) };
inline constexpr phrase<> lng_month8{ ushort(29) };
inline constexpr phrase<> lng_month9{ ushort(30) };
inline constexpr phrase<> lng_month10{ ushort(31) };
inline constexpr phrase<> lng_month11{ ushort(32) };
inline constexpr phrase<> lng_month12{ ushort(33) };
inline constexpr phrase<> lng_month_day1{ ushort(34) };
inline constexpr phrase<> lng_month_day2{ ushort(35) };
inline constexpr phrase<> lng_month_day3{ ushort(36) };
inline constexpr phrase<> lng_month_day4{ ushort(37) };
inline constexpr phrase<> lng_month_day5{ ushort(38) };
inline constexpr phrase<> lng_month_day6{ ushort(39) };
inline constexpr phrase<> lng_month_day7{ ushort(40) };
inline constexpr phrase<> lng_month_day8{ ushort(41) };
inline constexpr phrase<> lng_month_day9{ ushort(42) };
inline constexpr phrase<> lng_month_day10{ ushort(43) };
inline constexpr phrase<> lng_month_day11{ ushort(44) };
inline constexpr phrase<> lng_month_day12{ ushort(45) };
inline constexpr phrase<> lng_month1_small{ ushort(46) };
inline constexpr phrase<> lng_month2_small{ ushort(47) };
inline constexpr phrase<> lng_month3_small{ ushort(48) };
inline constexpr phrase<> lng_month4_small{ ushort(49) };
inline constexpr phrase<> lng_month5_small{ ushort(50) };
inline constexpr phrase<> lng_month6_small{ ushort(51) };
inline constexpr phrase<> lng_month7_small{ ushort(52) };
inline constexpr phrase<> lng_month8_small{ ushort(53) };
inline constexpr phrase<> lng_month9_small{ ushort(54) };
inline constexpr phrase<> lng_month10_small{ ushort(55) };
inline constexpr phrase<> lng_month11_small{ ushort(56) };
inline constexpr phrase<> lng_month12_small{ ushort(57) };
inline constexpr phrase<> lng_weekday1{ ushort(58) };
inline constexpr phrase<> lng_weekday2{ ushort(59) };
inline constexpr phrase<> lng_weekday3{ ushort(60) };
inline constexpr phrase<> lng_weekday4{ ushort(61) };
inline constexpr phrase<> lng_weekday5{ ushort(62) };
inline constexpr phrase<> lng_weekday6{ ushort(63) };
inline constexpr phrase<> lng_weekday7{ ushort(64) };
inline constexpr phrase<lngtag_month, lngtag_day> lng_month_day{ ushort(65) };
inline constexpr phrase<lngtag_month, lngtag_day, lngtag_year> lng_month_day_year{ ushort(66) };
inline constexpr phrase<lngtag_month, lngtag_year> lng_month_year{ ushort(67) };
inline constexpr phrase<> lng_calendar_select_days{ ushort(68) };
inline constexpr phrase<> lng_calendar_start_tip{ ushort(69) };
inline constexpr phrase<> lng_calendar_end_tip{ ushort(70) };
inline constexpr phrase<lngtag_count> lng_calendar_days{ ushort(71) };
inline constexpr phrase<lngtag_count> lng_seconds{ ushort(77) };
inline constexpr phrase<lngtag_count> lng_minutes{ ushort(83) };
inline constexpr phrase<lngtag_count> lng_hours{ ushort(89) };
inline constexpr phrase<lngtag_count> lng_days{ ushort(95) };
inline constexpr phrase<lngtag_count> lng_weeks{ ushort(101) };
inline constexpr phrase<lngtag_count> lng_months{ ushort(107) };
inline constexpr phrase<lngtag_count> lng_years{ ushort(113) };
inline constexpr phrase<lngtag_count> lng_seconds_tiny{ ushort(119) };
inline constexpr phrase<lngtag_count> lng_minutes_tiny{ ushort(125) };
inline constexpr phrase<lngtag_count> lng_hours_tiny{ ushort(131) };
inline constexpr phrase<lngtag_count> lng_days_tiny{ ushort(137) };
inline constexpr phrase<lngtag_count> lng_weeks_tiny{ ushort(143) };
inline constexpr phrase<lngtag_count> lng_months_tiny{ ushort(149) };
inline constexpr phrase<lngtag_count> lng_years_tiny{ ushort(155) };
inline constexpr phrase<> lng_box_ok{ ushort(161) };
inline constexpr phrase<> lng_box_done{ ushort(162) };
inline constexpr phrase<> lng_box_yes{ ushort(163) };
inline constexpr phrase<> lng_box_no{ ushort(164) };
inline constexpr phrase<> lng_cancel{ ushort(165) };
inline constexpr phrase<> lng_continue{ ushort(166) };
inline constexpr phrase<> lng_close{ ushort(167) };
inline constexpr phrase<> lng_connecting{ ushort(168) };
inline constexpr phrase<lngtag_count> lng_reconnecting{ ushort(169) };
inline constexpr phrase<> lng_reconnecting_try_now{ ushort(175) };
inline constexpr phrase<> lng_code_block_header_copy{ ushort(176) };
inline constexpr phrase<> lng_status_service_notifications{ ushort(177) };
inline constexpr phrase<> lng_status_support{ ushort(178) };
inline constexpr phrase<> lng_status_bot{ ushort(179) };
inline constexpr phrase<> lng_status_bot_reads_all{ ushort(180) };
inline constexpr phrase<> lng_status_bot_not_reads_all{ ushort(181) };
inline constexpr phrase<> lng_status_offline{ ushort(182) };
inline constexpr phrase<> lng_status_recently{ ushort(183) };
inline constexpr phrase<> lng_status_last_week{ ushort(184) };
inline constexpr phrase<> lng_status_last_month{ ushort(185) };
inline constexpr phrase<> lng_status_lastseen_now{ ushort(186) };
inline constexpr phrase<> lng_status_lastseen_when{ ushort(187) };
inline constexpr phrase<lngtag_count> lng_status_lastseen_minutes{ ushort(188) };
inline constexpr phrase<lngtag_count> lng_status_lastseen_hours{ ushort(194) };
inline constexpr phrase<lngtag_time> lng_status_lastseen_today{ ushort(200) };
inline constexpr phrase<lngtag_time> lng_status_lastseen_yesterday{ ushort(201) };
inline constexpr phrase<lngtag_date> lng_status_lastseen_date{ ushort(202) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_status_lastseen_date_time{ ushort(203) };
inline constexpr phrase<> lng_status_online{ ushort(204) };
inline constexpr phrase<> lng_status_connecting{ ushort(205) };
inline constexpr phrase<> lng_chat_status_unaccessible{ ushort(206) };
inline constexpr phrase<lngtag_count> lng_chat_status_members{ ushort(207) };
inline constexpr phrase<lngtag_count> lng_chat_status_online{ ushort(213) };
inline constexpr phrase<lngtag_members_count, lngtag_online_count> lng_chat_status_members_online{ ushort(219) };
inline constexpr phrase<lngtag_count> lng_chat_status_subscribers{ ushort(220) };
inline constexpr phrase<> lng_chat_status_direct{ ushort(226) };
inline constexpr phrase<> lng_channel_status{ ushort(227) };
inline constexpr phrase<> lng_group_status{ ushort(228) };
inline constexpr phrase<> lng_scam_badge{ ushort(229) };
inline constexpr phrase<> lng_fake_badge{ ushort(230) };
inline constexpr phrase<> lng_direct_badge{ ushort(231) };
inline constexpr phrase<> lng_remember{ ushort(232) };
inline constexpr phrase<> lng_lastseen_show_title{ ushort(233) };
inline constexpr phrase<lngtag_user> lng_lastseen_show_about{ ushort(234) };
inline constexpr phrase<> lng_lastseen_show_button{ ushort(235) };
inline constexpr phrase<> lng_lastseen_or{ ushort(236) };
inline constexpr phrase<> lng_lastseen_premium_title{ ushort(237) };
inline constexpr phrase<lngtag_user> lng_lastseen_premium_about{ ushort(238) };
inline constexpr phrase<> lng_lastseen_premium_button{ ushort(239) };
inline constexpr phrase<> lng_lastseen_shown_toast{ ushort(240) };
inline constexpr phrase<> lng_readtime_show_title{ ushort(241) };
inline constexpr phrase<lngtag_user> lng_readtime_show_about{ ushort(242) };
inline constexpr phrase<> lng_readtime_show_button{ ushort(243) };
inline constexpr phrase<> lng_readtime_or{ ushort(244) };
inline constexpr phrase<> lng_readtime_premium_title{ ushort(245) };
inline constexpr phrase<lngtag_user> lng_readtime_premium_about{ ushort(246) };
inline constexpr phrase<> lng_readtime_premium_button{ ushort(247) };
inline constexpr phrase<> lng_readtime_shown_toast{ ushort(248) };
inline constexpr phrase<> lng_channels_limit_title{ ushort(249) };
inline constexpr phrase<lngtag_count> lng_channels_limit1{ ushort(250) };
inline constexpr phrase<lngtag_count> lng_channels_limit2{ ushort(256) };
inline constexpr phrase<> lng_channels_limit2_final{ ushort(262) };
inline constexpr phrase<> lng_channels_leave_title{ ushort(263) };
inline constexpr phrase<lngtag_type, lngtag_time> lng_channels_leave_status{ ushort(264) };
inline constexpr phrase<lngtag_count> lng_channels_leave{ ushort(265) };
inline constexpr phrase<> lng_channels_leave_done{ ushort(271) };
inline constexpr phrase<> lng_links_limit_title{ ushort(272) };
inline constexpr phrase<lngtag_count> lng_links_limit1{ ushort(273) };
inline constexpr phrase<lngtag_count> lng_links_limit2{ ushort(279) };
inline constexpr phrase<> lng_links_limit2_final{ ushort(285) };
inline constexpr phrase<> lng_links_revoke_title{ ushort(286) };
inline constexpr phrase<> lng_filter_chats_limit_title{ ushort(287) };
inline constexpr phrase<lngtag_count> lng_filter_chats_limit1{ ushort(288) };
inline constexpr phrase<lngtag_count> lng_filter_chats_exlude_limit1{ ushort(294) };
inline constexpr phrase<lngtag_count> lng_filter_chats_limit2{ ushort(300) };
inline constexpr phrase<> lng_filters_limit_title{ ushort(306) };
inline constexpr phrase<lngtag_count> lng_filters_limit1{ ushort(307) };
inline constexpr phrase<lngtag_count> lng_filters_limit2{ ushort(313) };
inline constexpr phrase<> lng_filter_pin_limit_title{ ushort(319) };
inline constexpr phrase<lngtag_count> lng_filter_pin_limit1{ ushort(320) };
inline constexpr phrase<lngtag_count> lng_filter_pin_limit2{ ushort(326) };
inline constexpr phrase<lngtag_count> lng_forum_pin_limit{ ushort(332) };
inline constexpr phrase<lngtag_count> lng_fave_sticker_limit_title{ ushort(338) };
inline constexpr phrase<lngtag_count, lngtag_link> lng_fave_sticker_limit_more{ ushort(344) };
inline constexpr phrase<> lng_fave_sticker_limit_link{ ushort(350) };
inline constexpr phrase<lngtag_count> lng_saved_gif_limit_title{ ushort(351) };
inline constexpr phrase<lngtag_count, lngtag_link> lng_saved_gif_limit_more{ ushort(357) };
inline constexpr phrase<> lng_saved_gif_limit_link{ ushort(363) };
inline constexpr phrase<> lng_caption_limit_title{ ushort(364) };
inline constexpr phrase<lngtag_count> lng_caption_limit1{ ushort(365) };
inline constexpr phrase<lngtag_count> lng_caption_limit2{ ushort(371) };
inline constexpr phrase<lngtag_count> lng_caption_limit_reached{ ushort(377) };
inline constexpr phrase<> lng_caption_move_up{ ushort(383) };
inline constexpr phrase<> lng_caption_move_down{ ushort(384) };
inline constexpr phrase<> lng_file_size_limit_title{ ushort(385) };
inline constexpr phrase<lngtag_count> lng_file_size_limit{ ushort(386) };
inline constexpr phrase<lngtag_size> lng_file_size_limit1{ ushort(392) };
inline constexpr phrase<lngtag_size> lng_file_size_limit2{ ushort(393) };
inline constexpr phrase<> lng_filter_links_limit_title{ ushort(394) };
inline constexpr phrase<lngtag_count> lng_filter_links_limit1{ ushort(395) };
inline constexpr phrase<lngtag_count> lng_filter_links_limit2{ ushort(401) };
inline constexpr phrase<> lng_filter_shared_limit_title{ ushort(407) };
inline constexpr phrase<lngtag_count> lng_filter_shared_limit1{ ushort(408) };
inline constexpr phrase<lngtag_count> lng_filter_shared_limit2{ ushort(414) };
inline constexpr phrase<> lng_limits_increase{ ushort(420) };
inline constexpr phrase<> lng_sticker_premium_text{ ushort(421) };
inline constexpr phrase<> lng_sticker_premium_view{ ushort(422) };
inline constexpr phrase<> lng_animated_emoji_text{ ushort(423) };
inline constexpr phrase<> lng_animated_emoji_saved{ ushort(424) };
inline constexpr phrase<> lng_animated_emoji_saved_open{ ushort(425) };
inline constexpr phrase<> lng_flood_error{ ushort(426) };
inline constexpr phrase<> lng_edit_error{ ushort(427) };
inline constexpr phrase<> lng_error_phone_flood{ ushort(428) };
inline constexpr phrase<> lng_error_start_minimized_passcoded{ ushort(429) };
inline constexpr phrase<lngtag_more_info> lng_error_public_groups_denied{ ushort(430) };
inline constexpr phrase<> lng_error_cant_add_member{ ushort(431) };
inline constexpr phrase<> lng_error_cant_add_bot{ ushort(432) };
inline constexpr phrase<> lng_error_cant_add_admin_invite{ ushort(433) };
inline constexpr phrase<> lng_error_you_blocked_user{ ushort(434) };
inline constexpr phrase<> lng_error_add_admin_not_member{ ushort(435) };
inline constexpr phrase<> lng_error_user_admin_invalid{ ushort(436) };
inline constexpr phrase<> lng_error_channel_bots_too_much{ ushort(437) };
inline constexpr phrase<> lng_error_group_bots_too_much{ ushort(438) };
inline constexpr phrase<> lng_error_cant_add_admin_unban{ ushort(439) };
inline constexpr phrase<> lng_error_cant_ban_admin{ ushort(440) };
inline constexpr phrase<> lng_error_cant_reply_other{ ushort(441) };
inline constexpr phrase<> lng_error_admin_limit{ ushort(442) };
inline constexpr phrase<> lng_error_admin_limit_channel{ ushort(443) };
inline constexpr phrase<> lng_error_post_link_invalid{ ushort(444) };
inline constexpr phrase<> lng_error_noforwards_group{ ushort(445) };
inline constexpr phrase<> lng_error_noforwards_channel{ ushort(446) };
inline constexpr phrase<> lng_error_nocopy_group{ ushort(447) };
inline constexpr phrase<> lng_error_nocopy_channel{ ushort(448) };
inline constexpr phrase<> lng_error_nocopy_story{ ushort(449) };
inline constexpr phrase<> lng_error_schedule_limit{ ushort(450) };
inline constexpr phrase<> lng_sure_add_admin_invite{ ushort(451) };
inline constexpr phrase<> lng_sure_add_admin_invite_channel{ ushort(452) };
inline constexpr phrase<> lng_sure_add_admin_unremove{ ushort(453) };
inline constexpr phrase<> lng_sure_ban_admin{ ushort(454) };
inline constexpr phrase<lngtag_server, lngtag_port> lng_sure_enable_socks{ ushort(455) };
inline constexpr phrase<> lng_sure_enable{ ushort(456) };
inline constexpr phrase<> lng_proxy_box_title{ ushort(457) };
inline constexpr phrase<> lng_proxy_box_server{ ushort(458) };
inline constexpr phrase<> lng_proxy_box_port{ ushort(459) };
inline constexpr phrase<> lng_proxy_box_secret{ ushort(460) };
inline constexpr phrase<> lng_proxy_box_status{ ushort(461) };
inline constexpr phrase<> lng_proxy_box_username{ ushort(462) };
inline constexpr phrase<> lng_proxy_box_password{ ushort(463) };
inline constexpr phrase<> lng_proxy_invalid{ ushort(464) };
inline constexpr phrase<> lng_proxy_unsupported{ ushort(465) };
inline constexpr phrase<> lng_edit_deleted{ ushort(466) };
inline constexpr phrase<lngtag_count> lng_edit_limit_reached{ ushort(467) };
inline constexpr phrase<> lng_edit_message{ ushort(473) };
inline constexpr phrase<> lng_edit_message_text{ ushort(474) };
inline constexpr phrase<> lng_deleted{ ushort(475) };
inline constexpr phrase<> lng_deleted_message{ ushort(476) };
inline constexpr phrase<> lng_deleted_story{ ushort(477) };
inline constexpr phrase<> lng_pinned_message{ ushort(478) };
inline constexpr phrase<> lng_pinned_previous{ ushort(479) };
inline constexpr phrase<> lng_pinned_unpin_sure{ ushort(480) };
inline constexpr phrase<> lng_pinned_pin_sure{ ushort(481) };
inline constexpr phrase<> lng_pinned_pin_sure_group{ ushort(482) };
inline constexpr phrase<> lng_pinned_pin_old_sure{ ushort(483) };
inline constexpr phrase<> lng_pinned_pin{ ushort(484) };
inline constexpr phrase<> lng_pinned_unpin{ ushort(485) };
inline constexpr phrase<> lng_pinned_notify{ ushort(486) };
inline constexpr phrase<lngtag_user> lng_pinned_also_for_other{ ushort(487) };
inline constexpr phrase<lngtag_count> lng_pinned_messages_title{ ushort(488) };
inline constexpr phrase<> lng_pinned_hide_all{ ushort(494) };
inline constexpr phrase<lngtag_count> lng_pinned_unpin_all{ ushort(495) };
inline constexpr phrase<> lng_pinned_unpin_all_sure{ ushort(501) };
inline constexpr phrase<> lng_pinned_hide_all_sure{ ushort(502) };
inline constexpr phrase<> lng_pinned_hide_all_hide{ ushort(503) };
inline constexpr phrase<> lng_edit_media_album_error{ ushort(504) };
inline constexpr phrase<> lng_edit_media_invalid_file{ ushort(505) };
inline constexpr phrase<> lng_edit_photo_editor_hint{ ushort(506) };
inline constexpr phrase<> lng_edit_caption_attach{ ushort(507) };
inline constexpr phrase<> lng_edit_caption_voice{ ushort(508) };
inline constexpr phrase<> lng_intro_about{ ushort(509) };
inline constexpr phrase<> lng_start_msgs{ ushort(510) };
inline constexpr phrase<> lng_intro_next{ ushort(511) };
inline constexpr phrase<> lng_intro_finish{ ushort(512) };
inline constexpr phrase<> lng_intro_submit{ ushort(513) };
inline constexpr phrase<> lng_photo_caption{ ushort(514) };
inline constexpr phrase<> lng_photos_comment{ ushort(515) };
inline constexpr phrase<> lng_intro_qr_title{ ushort(516) };
inline constexpr phrase<> lng_intro_qr_step1{ ushort(517) };
inline constexpr phrase<> lng_intro_qr_step2{ ushort(518) };
inline constexpr phrase<> lng_intro_qr_step3{ ushort(519) };
inline constexpr phrase<> lng_intro_qr_skip{ ushort(520) };
inline constexpr phrase<> lng_intro_fragment_title{ ushort(521) };
inline constexpr phrase<lngtag_phone_number> lng_intro_fragment_about{ ushort(522) };
inline constexpr phrase<> lng_intro_fragment_button{ ushort(523) };
inline constexpr phrase<> lng_intro_email_setup_title{ ushort(524) };
inline constexpr phrase<lngtag_email> lng_intro_email_confirm_subtitle{ ushort(525) };
inline constexpr phrase<> lng_phone_title{ ushort(526) };
inline constexpr phrase<> lng_phone_desc{ ushort(527) };
inline constexpr phrase<> lng_phone_to_qr{ ushort(528) };
inline constexpr phrase<> lng_country_code{ ushort(529) };
inline constexpr phrase<> lng_bad_country_code{ ushort(530) };
inline constexpr phrase<> lng_country_ph{ ushort(531) };
inline constexpr phrase<> lng_country_none{ ushort(532) };
inline constexpr phrase<> lng_country_select{ ushort(533) };
inline constexpr phrase<> lng_code_ph{ ushort(534) };
inline constexpr phrase<> lng_code_desc{ ushort(535) };
inline constexpr phrase<> lng_code_from_telegram{ ushort(536) };
inline constexpr phrase<> lng_code_no_telegram{ ushort(537) };
inline constexpr phrase<lngtag_minutes, lngtag_seconds> lng_code_call{ ushort(538) };
inline constexpr phrase<> lng_code_calling{ ushort(539) };
inline constexpr phrase<> lng_code_called{ ushort(540) };
inline constexpr phrase<> lng_bad_phone{ ushort(541) };
inline constexpr phrase<> lng_bad_code{ ushort(542) };
inline constexpr phrase<> lng_bad_name{ ushort(543) };
inline constexpr phrase<> lng_bad_photo{ ushort(544) };
inline constexpr phrase<> lng_signin_title{ ushort(545) };
inline constexpr phrase<> lng_signin_desc{ ushort(546) };
inline constexpr phrase<lngtag_email> lng_signin_recover_desc{ ushort(547) };
inline constexpr phrase<> lng_signin_password{ ushort(548) };
inline constexpr phrase<> lng_signin_code{ ushort(549) };
inline constexpr phrase<> lng_signin_recover{ ushort(550) };
inline constexpr phrase<> lng_signin_recover_title{ ushort(551) };
inline constexpr phrase<lngtag_password_hint> lng_signin_hint{ ushort(552) };
inline constexpr phrase<lngtag_recover_email> lng_signin_recover_hint{ ushort(553) };
inline constexpr phrase<> lng_signin_bad_password{ ushort(554) };
inline constexpr phrase<> lng_signin_wrong_code{ ushort(555) };
inline constexpr phrase<> lng_signin_try_password{ ushort(556) };
inline constexpr phrase<> lng_signin_no_email_forgot{ ushort(557) };
inline constexpr phrase<> lng_signin_cant_email_forgot{ ushort(558) };
inline constexpr phrase<> lng_signin_reset_account{ ushort(559) };
inline constexpr phrase<> lng_signin_sure_reset{ ushort(560) };
inline constexpr phrase<> lng_signin_reset{ ushort(561) };
inline constexpr phrase<lngtag_phone_number, lngtag_when> lng_signin_reset_wait{ ushort(562) };
inline constexpr phrase<lngtag_days_count, lngtag_hours_count, lngtag_minutes_count> lng_signin_reset_in_days{ ushort(563) };
inline constexpr phrase<lngtag_hours_count, lngtag_minutes_count> lng_signin_reset_in_hours{ ushort(564) };
inline constexpr phrase<> lng_signin_reset_cancelled{ ushort(565) };
inline constexpr phrase<> lng_signin_banned_text{ ushort(566) };
inline constexpr phrase<> lng_signin_banned_help{ ushort(567) };
inline constexpr phrase<> lng_signup_title{ ushort(568) };
inline constexpr phrase<> lng_signup_desc{ ushort(569) };
inline constexpr phrase<> lng_signup_firstname{ ushort(570) };
inline constexpr phrase<> lng_signup_lastname{ ushort(571) };
inline constexpr phrase<> lng_dlg_filter{ ushort(572) };
inline constexpr phrase<> lng_dlg_new_group_name{ ushort(573) };
inline constexpr phrase<> lng_dlg_new_channel_name{ ushort(574) };
inline constexpr phrase<> lng_dlg_new_bot_name{ ushort(575) };
inline constexpr phrase<> lng_no_chats{ ushort(576) };
inline constexpr phrase<> lng_no_conversations{ ushort(577) };
inline constexpr phrase<> lng_no_conversations_button{ ushort(578) };
inline constexpr phrase<> lng_no_conversations_subtitle{ ushort(579) };
inline constexpr phrase<> lng_no_chats_filter{ ushort(580) };
inline constexpr phrase<> lng_no_saved_sublists{ ushort(581) };
inline constexpr phrase<> lng_contacts_loading{ ushort(582) };
inline constexpr phrase<> lng_contacts_not_found{ ushort(583) };
inline constexpr phrase<> lng_topics_not_found{ ushort(584) };
inline constexpr phrase<> lng_dlg_search_for_messages{ ushort(585) };
inline constexpr phrase<> lng_update_telegram{ ushort(586) };
inline constexpr phrase<> lng_dlg_search_in{ ushort(587) };
inline constexpr phrase<lngtag_user> lng_dlg_search_from{ ushort(588) };
inline constexpr phrase<> lng_settings_save{ ushort(589) };
inline constexpr phrase<> lng_settings_apply{ ushort(590) };
inline constexpr phrase<> lng_username_title{ ushort(591) };
inline constexpr phrase<> lng_username_description1{ ushort(592) };
inline constexpr phrase<> lng_username_description2{ ushort(593) };
inline constexpr phrase<> lng_username_choose{ ushort(594) };
inline constexpr phrase<> lng_username_invalid{ ushort(595) };
inline constexpr phrase<> lng_username_occupied{ ushort(596) };
inline constexpr phrase<> lng_username_too_short{ ushort(597) };
inline constexpr phrase<lngtag_link> lng_username_purchase_available{ ushort(598) };
inline constexpr phrase<> lng_username_purchase_available_link{ ushort(599) };
inline constexpr phrase<> lng_username_bad_symbols{ ushort(600) };
inline constexpr phrase<> lng_username_available{ ushort(601) };
inline constexpr phrase<lngtag_user> lng_username_not_found{ ushort(602) };
inline constexpr phrase<lngtag_phone> lng_username_by_phone_not_found{ ushort(603) };
inline constexpr phrase<> lng_username_app_not_found{ ushort(604) };
inline constexpr phrase<> lng_username_link{ ushort(605) };
inline constexpr phrase<> lng_username_copied{ ushort(606) };
inline constexpr phrase<> lng_username_text_copied{ ushort(607) };
inline constexpr phrase<> lng_usernames_edit{ ushort(608) };
inline constexpr phrase<> lng_usernames_active{ ushort(609) };
inline constexpr phrase<> lng_usernames_non_active{ ushort(610) };
inline constexpr phrase<> lng_usernames_subtitle{ ushort(611) };
inline constexpr phrase<lngtag_count> lng_usernames_activate_error{ ushort(612) };
inline constexpr phrase<> lng_usernames_activate_description{ ushort(618) };
inline constexpr phrase<> lng_usernames_activate_confirm{ ushort(619) };
inline constexpr phrase<> lng_channel_usernames_subtitle{ ushort(620) };
inline constexpr phrase<> lng_usernames_deactivate_description{ ushort(621) };
inline constexpr phrase<> lng_usernames_deactivate_confirm{ ushort(622) };
inline constexpr phrase<> lng_usernames_description{ ushort(623) };
inline constexpr phrase<> lng_channel_usernames_activate_description{ ushort(624) };
inline constexpr phrase<> lng_channel_usernames_deactivate_description{ ushort(625) };
inline constexpr phrase<> lng_channel_usernames_description{ ushort(626) };
inline constexpr phrase<> lng_bot_username_title{ ushort(627) };
inline constexpr phrase<lngtag_link> lng_bot_username_description1{ ushort(628) };
inline constexpr phrase<> lng_bot_username_description1_link{ ushort(629) };
inline constexpr phrase<> lng_bot_usernames_activate_description{ ushort(630) };
inline constexpr phrase<> lng_bot_usernames_deactivate_description{ ushort(631) };
inline constexpr phrase<> lng_bot_usernames_description{ ushort(632) };
inline constexpr phrase<> lng_bio_placeholder{ ushort(633) };
inline constexpr phrase<lngtag_username> lng_collectible_username_title{ ushort(634) };
inline constexpr phrase<lngtag_date, lngtag_price> lng_collectible_username_info{ ushort(635) };
inline constexpr phrase<> lng_collectible_username_copy{ ushort(636) };
inline constexpr phrase<lngtag_phone> lng_collectible_phone_title{ ushort(637) };
inline constexpr phrase<lngtag_date, lngtag_price> lng_collectible_phone_info{ ushort(638) };
inline constexpr phrase<> lng_collectible_phone_copy{ ushort(639) };
inline constexpr phrase<> lng_collectible_learn_more{ ushort(640) };
inline constexpr phrase<> lng_collectible_phone_copied{ ushort(641) };
inline constexpr phrase<> lng_settings_section_info{ ushort(642) };
inline constexpr phrase<> lng_settings_section_notify{ ushort(643) };
inline constexpr phrase<> lng_settings_show_from{ ushort(644) };
inline constexpr phrase<> lng_settings_notify_all{ ushort(645) };
inline constexpr phrase<> lng_settings_notify_all_about{ ushort(646) };
inline constexpr phrase<> lng_settings_notify_global{ ushort(647) };
inline constexpr phrase<> lng_settings_notify_title{ ushort(648) };
inline constexpr phrase<> lng_settings_desktop_notify{ ushort(649) };
inline constexpr phrase<> lng_settings_master_volume_notifications{ ushort(650) };
inline constexpr phrase<> lng_settings_native_title{ ushort(651) };
inline constexpr phrase<> lng_settings_use_windows{ ushort(652) };
inline constexpr phrase<> lng_settings_skip_in_focus{ ushort(653) };
inline constexpr phrase<> lng_settings_use_native_notifications{ ushort(654) };
inline constexpr phrase<> lng_settings_notifications_position{ ushort(655) };
inline constexpr phrase<> lng_settings_notifications_count{ ushort(656) };
inline constexpr phrase<> lng_settings_sound_allowed{ ushort(657) };
inline constexpr phrase<> lng_settings_alert_windows{ ushort(658) };
inline constexpr phrase<> lng_settings_alert_mac{ ushort(659) };
inline constexpr phrase<> lng_settings_alert_linux{ ushort(660) };
inline constexpr phrase<> lng_settings_badge_title{ ushort(661) };
inline constexpr phrase<> lng_settings_include_muted{ ushort(662) };
inline constexpr phrase<> lng_settings_include_muted_folders{ ushort(663) };
inline constexpr phrase<> lng_settings_count_unread{ ushort(664) };
inline constexpr phrase<> lng_settings_events_title{ ushort(665) };
inline constexpr phrase<> lng_settings_events_joined{ ushort(666) };
inline constexpr phrase<> lng_settings_events_pinned{ ushort(667) };
inline constexpr phrase<> lng_settings_notifications_calls_title{ ushort(668) };
inline constexpr phrase<> lng_notification_preview_title{ ushort(669) };
inline constexpr phrase<> lng_notification_preview_text{ ushort(670) };
inline constexpr phrase<> lng_notification_show_name{ ushort(671) };
inline constexpr phrase<> lng_notification_show_text{ ushort(672) };
inline constexpr phrase<> lng_notification_preview{ ushort(673) };
inline constexpr phrase<> lng_notification_reply{ ushort(674) };
inline constexpr phrase<> lng_notification_hide_all{ ushort(675) };
inline constexpr phrase<> lng_notification_sample{ ushort(676) };
inline constexpr phrase<> lng_notification_reminder{ ushort(677) };
inline constexpr phrase<> lng_notification_private_chats{ ushort(678) };
inline constexpr phrase<> lng_notification_groups{ ushort(679) };
inline constexpr phrase<> lng_notification_channels{ ushort(680) };
inline constexpr phrase<> lng_notification_click_to_change{ ushort(681) };
inline constexpr phrase<lngtag_exceptions> lng_notification_on{ ushort(682) };
inline constexpr phrase<lngtag_exceptions> lng_notification_off{ ushort(683) };
inline constexpr phrase<lngtag_count> lng_notification_exceptions{ ushort(684) };
inline constexpr phrase<> lng_notification_exceptions_title{ ushort(690) };
inline constexpr phrase<> lng_notification_title_private_chats{ ushort(691) };
inline constexpr phrase<lngtag_count> lng_notification_about_private_chats{ ushort(692) };
inline constexpr phrase<> lng_notification_volume_private_chats{ ushort(698) };
inline constexpr phrase<> lng_notification_title_groups{ ushort(699) };
inline constexpr phrase<lngtag_count> lng_notification_about_groups{ ushort(700) };
inline constexpr phrase<> lng_notification_volume_groups{ ushort(706) };
inline constexpr phrase<> lng_notification_title_channels{ ushort(707) };
inline constexpr phrase<lngtag_count> lng_notification_about_channels{ ushort(708) };
inline constexpr phrase<> lng_notification_volume_channel{ ushort(714) };
inline constexpr phrase<> lng_notification_exceptions_view{ ushort(715) };
inline constexpr phrase<> lng_notification_enable{ ushort(716) };
inline constexpr phrase<> lng_notification_sound{ ushort(717) };
inline constexpr phrase<> lng_notification_tone{ ushort(718) };
inline constexpr phrase<> lng_notification_exceptions_muted{ ushort(719) };
inline constexpr phrase<> lng_notification_exceptions_unmuted{ ushort(720) };
inline constexpr phrase<> lng_notification_exceptions_add{ ushort(721) };
inline constexpr phrase<> lng_notification_exceptions_clear{ ushort(722) };
inline constexpr phrase<> lng_notification_exceptions_clear_sure{ ushort(723) };
inline constexpr phrase<> lng_notification_exceptions_clear_button{ ushort(724) };
inline constexpr phrase<> lng_notification_exceptions_remove{ ushort(725) };
inline constexpr phrase<> lng_notification_context_remove{ ushort(726) };
inline constexpr phrase<lngtag_reaction, lngtag_text> lng_reaction_text{ ushort(727) };
inline constexpr phrase<lngtag_reaction> lng_reaction_notext{ ushort(728) };
inline constexpr phrase<lngtag_reaction> lng_reaction_photo{ ushort(729) };
inline constexpr phrase<lngtag_reaction> lng_reaction_video{ ushort(730) };
inline constexpr phrase<lngtag_reaction> lng_reaction_video_message{ ushort(731) };
inline constexpr phrase<lngtag_reaction> lng_reaction_document{ ushort(732) };
inline constexpr phrase<lngtag_reaction, lngtag_emoji> lng_reaction_sticker{ ushort(733) };
inline constexpr phrase<lngtag_reaction> lng_reaction_voice_message{ ushort(734) };
inline constexpr phrase<lngtag_reaction, lngtag_name> lng_reaction_contact{ ushort(735) };
inline constexpr phrase<lngtag_reaction> lng_reaction_location{ ushort(736) };
inline constexpr phrase<lngtag_reaction, lngtag_title> lng_reaction_poll{ ushort(737) };
inline constexpr phrase<lngtag_reaction, lngtag_title> lng_reaction_quiz{ ushort(738) };
inline constexpr phrase<lngtag_reaction> lng_reaction_game{ ushort(739) };
inline constexpr phrase<lngtag_reaction> lng_reaction_invoice{ ushort(740) };
inline constexpr phrase<lngtag_reaction> lng_reaction_gif{ ushort(741) };
inline constexpr phrase<> lng_effect_add_title{ ushort(742) };
inline constexpr phrase<> lng_effect_stickers_title{ ushort(743) };
inline constexpr phrase<> lng_effect_send{ ushort(744) };
inline constexpr phrase<> lng_effect_none{ ushort(745) };
inline constexpr phrase<lngtag_link> lng_effect_premium{ ushort(746) };
inline constexpr phrase<> lng_effect_premium_link{ ushort(747) };
inline constexpr phrase<> lng_languages{ ushort(748) };
inline constexpr phrase<> lng_languages_none{ ushort(749) };
inline constexpr phrase<lngtag_count> lng_languages_count{ ushort(750) };
inline constexpr phrase<> lng_sure_save_language{ ushort(756) };
inline constexpr phrase<> lng_settings_update_automatically{ ushort(757) };
inline constexpr phrase<> lng_settings_install_beta{ ushort(758) };
inline constexpr phrase<lngtag_version> lng_settings_current_version{ ushort(759) };
inline constexpr phrase<> lng_settings_check_now{ ushort(760) };
inline constexpr phrase<> lng_settings_update_checking{ ushort(761) };
inline constexpr phrase<> lng_settings_latest_installed{ ushort(762) };
inline constexpr phrase<> lng_settings_update_ready{ ushort(763) };
inline constexpr phrase<> lng_settings_update_fail{ ushort(764) };
inline constexpr phrase<> lng_settings_workmode_tray{ ushort(765) };
inline constexpr phrase<> lng_settings_workmode_window{ ushort(766) };
inline constexpr phrase<> lng_settings_window_close{ ushort(767) };
inline constexpr phrase<> lng_settings_run_in_background{ ushort(768) };
inline constexpr phrase<> lng_settings_quit_on_close{ ushort(769) };
inline constexpr phrase<> lng_settings_close_to_taskbar{ ushort(770) };
inline constexpr phrase<> lng_settings_monochrome_icon{ ushort(771) };
inline constexpr phrase<> lng_settings_window_system{ ushort(772) };
inline constexpr phrase<> lng_settings_title_chat_name{ ushort(773) };
inline constexpr phrase<> lng_settings_title_account_name{ ushort(774) };
inline constexpr phrase<> lng_settings_title_total_count{ ushort(775) };
inline constexpr phrase<> lng_settings_native_frame{ ushort(776) };
inline constexpr phrase<> lng_settings_qt_frame{ ushort(777) };
inline constexpr phrase<> lng_settings_auto_start{ ushort(778) };
inline constexpr phrase<> lng_settings_start_min{ ushort(779) };
inline constexpr phrase<> lng_settings_auto_start_disabled_uwp{ ushort(780) };
inline constexpr phrase<> lng_settings_open_system_settings{ ushort(781) };
inline constexpr phrase<> lng_settings_add_sendto{ ushort(782) };
inline constexpr phrase<lngtag_text> lng_settings_mac_warn_before_quit{ ushort(783) };
inline constexpr phrase<> lng_settings_mac_round_icon{ ushort(784) };
inline constexpr phrase<> lng_settings_experimental{ ushort(785) };
inline constexpr phrase<> lng_settings_experimental_about{ ushort(786) };
inline constexpr phrase<> lng_settings_experimental_restore{ ushort(787) };
inline constexpr phrase<> lng_settings_experimental_irrelevant{ ushort(788) };
inline constexpr phrase<> lng_settings_section_chat_settings{ ushort(789) };
inline constexpr phrase<> lng_settings_replace_emojis{ ushort(790) };
inline constexpr phrase<> lng_settings_suggest_emoji{ ushort(791) };
inline constexpr phrase<> lng_settings_suggest_animated_emoji{ ushort(792) };
inline constexpr phrase<> lng_settings_suggest_by_emoji{ ushort(793) };
inline constexpr phrase<> lng_settings_loop_stickers{ ushort(794) };
inline constexpr phrase<> lng_settings_large_emoji{ ushort(795) };
inline constexpr phrase<> lng_settings_send_enter{ ushort(796) };
inline constexpr phrase<> lng_settings_send_ctrlenter{ ushort(797) };
inline constexpr phrase<> lng_settings_send_cmdenter{ ushort(798) };
inline constexpr phrase<> lng_settings_chat_quick_action_reply{ ushort(799) };
inline constexpr phrase<> lng_settings_chat_quick_action_react{ ushort(800) };
inline constexpr phrase<> lng_settings_chat_corner_reaction{ ushort(801) };
inline constexpr phrase<> lng_settings_shortcuts{ ushort(802) };
inline constexpr phrase<> lng_shortcuts_reset{ ushort(803) };
inline constexpr phrase<> lng_shortcuts_recording{ ushort(804) };
inline constexpr phrase<> lng_shortcuts_add_another{ ushort(805) };
inline constexpr phrase<> lng_shortcuts_close{ ushort(806) };
inline constexpr phrase<> lng_shortcuts_lock{ ushort(807) };
inline constexpr phrase<> lng_shortcuts_minimize{ ushort(808) };
inline constexpr phrase<> lng_shortcuts_quit{ ushort(809) };
inline constexpr phrase<> lng_shortcuts_media_play{ ushort(810) };
inline constexpr phrase<> lng_shortcuts_media_pause{ ushort(811) };
inline constexpr phrase<> lng_shortcuts_media_play_pause{ ushort(812) };
inline constexpr phrase<> lng_shortcuts_media_stop{ ushort(813) };
inline constexpr phrase<> lng_shortcuts_media_previous{ ushort(814) };
inline constexpr phrase<> lng_shortcuts_media_next{ ushort(815) };
inline constexpr phrase<> lng_shortcuts_search{ ushort(816) };
inline constexpr phrase<> lng_shortcuts_chat_previous{ ushort(817) };
inline constexpr phrase<> lng_shortcuts_chat_next{ ushort(818) };
inline constexpr phrase<> lng_shortcuts_chat_first{ ushort(819) };
inline constexpr phrase<> lng_shortcuts_chat_last{ ushort(820) };
inline constexpr phrase<> lng_shortcuts_chat_self{ ushort(821) };
inline constexpr phrase<lngtag_index> lng_shortcuts_chat_pinned_n{ ushort(822) };
inline constexpr phrase<lngtag_index> lng_shortcuts_show_account_n{ ushort(823) };
inline constexpr phrase<> lng_shortcuts_show_all_chats{ ushort(824) };
inline constexpr phrase<lngtag_index> lng_shortcuts_show_folder_n{ ushort(825) };
inline constexpr phrase<> lng_shortcuts_show_folder_last{ ushort(826) };
inline constexpr phrase<> lng_shortcuts_folder_next{ ushort(827) };
inline constexpr phrase<> lng_shortcuts_folder_previous{ ushort(828) };
inline constexpr phrase<> lng_shortcuts_scheduled{ ushort(829) };
inline constexpr phrase<> lng_shortcuts_archive{ ushort(830) };
inline constexpr phrase<> lng_shortcuts_contacts{ ushort(831) };
inline constexpr phrase<> lng_shortcuts_just_send{ ushort(832) };
inline constexpr phrase<> lng_shortcuts_silent_send{ ushort(833) };
inline constexpr phrase<> lng_shortcuts_schedule{ ushort(834) };
inline constexpr phrase<> lng_shortcuts_read_chat{ ushort(835) };
inline constexpr phrase<> lng_shortcuts_archive_chat{ ushort(836) };
inline constexpr phrase<> lng_shortcuts_media_fullscreen{ ushort(837) };
inline constexpr phrase<> lng_shortcuts_show_chat_menu{ ushort(838) };
inline constexpr phrase<> lng_shortcuts_show_chat_preview{ ushort(839) };
inline constexpr phrase<> lng_shortcuts_record_voice_message{ ushort(840) };
inline constexpr phrase<> lng_shortcuts_record_round_message{ ushort(841) };
inline constexpr phrase<> lng_settings_chat_reactions_title{ ushort(842) };
inline constexpr phrase<> lng_settings_chat_reactions_subtitle{ ushort(843) };
inline constexpr phrase<> lng_settings_chat_message_reply_from{ ushort(844) };
inline constexpr phrase<> lng_settings_chat_message_reply{ ushort(845) };
inline constexpr phrase<> lng_settings_chat_message{ ushort(846) };
inline constexpr phrase<> lng_settings_section_filters{ ushort(847) };
inline constexpr phrase<> lng_settings_section_background{ ushort(848) };
inline constexpr phrase<> lng_settings_bg_from_gallery{ ushort(849) };
inline constexpr phrase<> lng_settings_bg_from_file{ ushort(850) };
inline constexpr phrase<> lng_settings_bg_remove{ ushort(851) };
inline constexpr phrase<> lng_settings_bg_theme_edit{ ushort(852) };
inline constexpr phrase<> lng_settings_bg_theme_create{ ushort(853) };
inline constexpr phrase<> lng_settings_bg_cloud_themes{ ushort(854) };
inline constexpr phrase<> lng_settings_bg_show_all{ ushort(855) };
inline constexpr phrase<> lng_settings_bg_tile{ ushort(856) };
inline constexpr phrase<> lng_settings_adaptive_wide{ ushort(857) };
inline constexpr phrase<> lng_settings_section_call_settings{ ushort(858) };
inline constexpr phrase<> lng_settings_call_camera{ ushort(859) };
inline constexpr phrase<> lng_settings_call_section_output{ ushort(860) };
inline constexpr phrase<> lng_settings_call_section_input{ ushort(861) };
inline constexpr phrase<> lng_settings_call_input_device{ ushort(862) };
inline constexpr phrase<> lng_settings_call_output_device{ ushort(863) };
inline constexpr phrase<> lng_settings_call_section_other{ ushort(864) };
inline constexpr phrase<> lng_settings_call_open_system_prefs{ ushort(865) };
inline constexpr phrase<> lng_settings_call_accept_calls{ ushort(866) };
inline constexpr phrase<> lng_settings_call_device_default{ ushort(867) };
inline constexpr phrase<> lng_settings_section_devices{ ushort(868) };
inline constexpr phrase<> lng_settings_devices_calls{ ushort(869) };
inline constexpr phrase<> lng_settings_devices_calls_same{ ushort(870) };
inline constexpr phrase<> lng_settings_devices_inactive{ ushort(871) };
inline constexpr phrase<> lng_settings_language{ ushort(872) };
inline constexpr phrase<> lng_settings_default_scale{ ushort(873) };
inline constexpr phrase<> lng_settings_connection_type{ ushort(874) };
inline constexpr phrase<lngtag_progress> lng_settings_downloading_update{ ushort(875) };
inline constexpr phrase<> lng_settings_privacy_title{ ushort(876) };
inline constexpr phrase<> lng_settings_last_seen{ ushort(877) };
inline constexpr phrase<> lng_settings_calls{ ushort(878) };
inline constexpr phrase<> lng_settings_calls_peer_to_peer_title{ ushort(879) };
inline constexpr phrase<> lng_settings_calls_peer_to_peer_button{ ushort(880) };
inline constexpr phrase<> lng_settings_groups_invite{ ushort(881) };
inline constexpr phrase<> lng_settings_phone_number_privacy{ ushort(882) };
inline constexpr phrase<> lng_settings_forwards_privacy{ ushort(883) };
inline constexpr phrase<> lng_settings_profile_photo_privacy{ ushort(884) };
inline constexpr phrase<> lng_settings_messages_privacy{ ushort(885) };
inline constexpr phrase<> lng_settings_voices_privacy{ ushort(886) };
inline constexpr phrase<> lng_settings_bio_privacy{ ushort(887) };
inline constexpr phrase<> lng_settings_gifts_privacy{ ushort(888) };
inline constexpr phrase<> lng_settings_birthday_privacy{ ushort(889) };
inline constexpr phrase<lngtag_link> lng_settings_privacy_premium{ ushort(890) };
inline constexpr phrase<> lng_settings_privacy_premium_link{ ushort(891) };
inline constexpr phrase<> lng_settings_passcode_disable{ ushort(892) };
inline constexpr phrase<> lng_settings_passcode_disable_sure{ ushort(893) };
inline constexpr phrase<> lng_settings_use_winhello{ ushort(894) };
inline constexpr phrase<> lng_settings_use_winhello_about{ ushort(895) };
inline constexpr phrase<> lng_settings_use_touchid{ ushort(896) };
inline constexpr phrase<> lng_settings_use_touchid_about{ ushort(897) };
inline constexpr phrase<> lng_settings_use_applewatch{ ushort(898) };
inline constexpr phrase<> lng_settings_use_applewatch_about{ ushort(899) };
inline constexpr phrase<> lng_settings_use_systempwd{ ushort(900) };
inline constexpr phrase<> lng_settings_use_systempwd_about{ ushort(901) };
inline constexpr phrase<> lng_settings_password_disable{ ushort(902) };
inline constexpr phrase<> lng_settings_password_abort{ ushort(903) };
inline constexpr phrase<> lng_settings_about_bio{ ushort(904) };
inline constexpr phrase<> lng_settings_name_label{ ushort(905) };
inline constexpr phrase<> lng_settings_username_label{ ushort(906) };
inline constexpr phrase<> lng_settings_phone_label{ ushort(907) };
inline constexpr phrase<> lng_settings_username_add{ ushort(908) };
inline constexpr phrase<> lng_settings_username_about{ ushort(909) };
inline constexpr phrase<> lng_settings_birthday_label{ ushort(910) };
inline constexpr phrase<> lng_settings_birthday_add{ ushort(911) };
inline constexpr phrase<lngtag_link> lng_settings_birthday_about{ ushort(912) };
inline constexpr phrase<> lng_settings_birthday_about_link{ ushort(913) };
inline constexpr phrase<lngtag_link> lng_settings_birthday_contacts{ ushort(914) };
inline constexpr phrase<> lng_settings_birthday_contacts_link{ ushort(915) };
inline constexpr phrase<> lng_settings_birthday_saved{ ushort(916) };
inline constexpr phrase<> lng_settings_birthday_reset{ ushort(917) };
inline constexpr phrase<> lng_settings_channel_label{ ushort(918) };
inline constexpr phrase<> lng_settings_channel_add{ ushort(919) };
inline constexpr phrase<> lng_settings_channel_remove{ ushort(920) };
inline constexpr phrase<> lng_settings_channel_no_yet{ ushort(921) };
inline constexpr phrase<> lng_settings_channel_start{ ushort(922) };
inline constexpr phrase<> lng_settings_channel_saved{ ushort(923) };
inline constexpr phrase<> lng_settings_channel_removed{ ushort(924) };
inline constexpr phrase<> lng_settings_add_account_about{ ushort(925) };
inline constexpr phrase<> lng_settings_peer_to_peer_about{ ushort(926) };
inline constexpr phrase<> lng_settings_advanced{ ushort(927) };
inline constexpr phrase<> lng_settings_stickers_emoji{ ushort(928) };
inline constexpr phrase<> lng_settings_messages{ ushort(929) };
inline constexpr phrase<> lng_settings_themes{ ushort(930) };
inline constexpr phrase<> lng_settings_theme_day{ ushort(931) };
inline constexpr phrase<> lng_settings_theme_classic{ ushort(932) };
inline constexpr phrase<> lng_settings_theme_tinted{ ushort(933) };
inline constexpr phrase<> lng_settings_theme_night{ ushort(934) };
inline constexpr phrase<> lng_settings_theme_accent_title{ ushort(935) };
inline constexpr phrase<> lng_settings_data_storage{ ushort(936) };
inline constexpr phrase<> lng_settings_information{ ushort(937) };
inline constexpr phrase<> lng_settings_my_account{ ushort(938) };
inline constexpr phrase<> lng_settings_security{ ushort(939) };
inline constexpr phrase<> lng_settings_passcode_title{ ushort(940) };
inline constexpr phrase<> lng_settings_sessions_title{ ushort(941) };
inline constexpr phrase<> lng_settings_sessions_about{ ushort(942) };
inline constexpr phrase<> lng_settings_archive_title{ ushort(943) };
inline constexpr phrase<> lng_settings_new_unknown{ ushort(944) };
inline constexpr phrase<> lng_settings_auto_archive{ ushort(945) };
inline constexpr phrase<> lng_settings_auto_archive_about{ ushort(946) };
inline constexpr phrase<> lng_settings_unmuted_chats{ ushort(947) };
inline constexpr phrase<> lng_settings_always_in_archive{ ushort(948) };
inline constexpr phrase<> lng_settings_unmuted_chats_about{ ushort(949) };
inline constexpr phrase<> lng_settings_chats_from_folders{ ushort(950) };
inline constexpr phrase<> lng_settings_chats_from_folders_about{ ushort(951) };
inline constexpr phrase<> lng_settings_destroy_title{ ushort(952) };
inline constexpr phrase<> lng_settings_version_info{ ushort(953) };
inline constexpr phrase<> lng_settings_system_integration{ ushort(954) };
inline constexpr phrase<> lng_settings_performance{ ushort(955) };
inline constexpr phrase<> lng_settings_enable_hwaccel{ ushort(956) };
inline constexpr phrase<> lng_settings_enable_opengl{ ushort(957) };
inline constexpr phrase<> lng_settings_angle_backend{ ushort(958) };
inline constexpr phrase<> lng_settings_angle_backend_auto{ ushort(959) };
inline constexpr phrase<> lng_settings_angle_backend_d3d9{ ushort(960) };
inline constexpr phrase<> lng_settings_angle_backend_d3d11{ ushort(961) };
inline constexpr phrase<> lng_settings_angle_backend_d3d11on12{ ushort(962) };
inline constexpr phrase<> lng_settings_angle_backend_opengl{ ushort(963) };
inline constexpr phrase<> lng_settings_angle_backend_disabled{ ushort(964) };
inline constexpr phrase<> lng_settings_top_peers_title{ ushort(965) };
inline constexpr phrase<> lng_settings_top_peers_suggest{ ushort(966) };
inline constexpr phrase<> lng_settings_top_peers_about{ ushort(967) };
inline constexpr phrase<> lng_settings_sensitive_title{ ushort(968) };
inline constexpr phrase<> lng_settings_sensitive_disable_filtering{ ushort(969) };
inline constexpr phrase<> lng_settings_sensitive_about{ ushort(970) };
inline constexpr phrase<> lng_settings_security_bots{ ushort(971) };
inline constexpr phrase<> lng_settings_file_confirmations{ ushort(972) };
inline constexpr phrase<> lng_settings_edit_extensions{ ushort(973) };
inline constexpr phrase<> lng_settings_edit_extensions_about{ ushort(974) };
inline constexpr phrase<> lng_settings_edit_ip_confirm{ ushort(975) };
inline constexpr phrase<> lng_settings_edit_ip_confirm_about{ ushort(976) };
inline constexpr phrase<> lng_settings_clear_payment_info{ ushort(977) };
inline constexpr phrase<> lng_settings_logged_in{ ushort(978) };
inline constexpr phrase<> lng_settings_logged_in_title{ ushort(979) };
inline constexpr phrase<> lng_settings_logged_in_description{ ushort(980) };
inline constexpr phrase<> lng_settings_disconnect_all{ ushort(981) };
inline constexpr phrase<> lng_settings_disconnect_title{ ushort(982) };
inline constexpr phrase<lngtag_domain> lng_settings_disconnect_sure{ ushort(983) };
inline constexpr phrase<lngtag_name> lng_settings_disconnect_block{ ushort(984) };
inline constexpr phrase<> lng_settings_disconnect_all_title{ ushort(985) };
inline constexpr phrase<> lng_settings_disconnect_all_sure{ ushort(986) };
inline constexpr phrase<> lng_settings_disconnect{ ushort(987) };
inline constexpr phrase<> lng_settings_connected_title{ ushort(988) };
inline constexpr phrase<lngtag_phone> lng_settings_suggestion_phone_number_title{ ushort(989) };
inline constexpr phrase<lngtag_link> lng_settings_suggestion_phone_number_about{ ushort(990) };
inline constexpr phrase<> lng_settings_suggestion_phone_number_about_link{ ushort(991) };
inline constexpr phrase<lngtag_emoji> lng_settings_suggestion_phone_number_change{ ushort(992) };
inline constexpr phrase<> lng_settings_suggestion_password_title{ ushort(993) };
inline constexpr phrase<> lng_settings_suggestion_password_about{ ushort(994) };
inline constexpr phrase<> lng_settings_suggestion_password_yes{ ushort(995) };
inline constexpr phrase<> lng_settings_suggestion_password_no{ ushort(996) };
inline constexpr phrase<> lng_settings_suggestion_password_step_input_title{ ushort(997) };
inline constexpr phrase<> lng_settings_suggestion_password_step_input_about{ ushort(998) };
inline constexpr phrase<> lng_settings_suggestion_password_step_finish_title{ ushort(999) };
inline constexpr phrase<> lng_settings_suggestion_password_step_finish_about{ ushort(1000) };
inline constexpr phrase<> lng_settings_power_menu{ ushort(1001) };
inline constexpr phrase<> lng_settings_power_title{ ushort(1002) };
inline constexpr phrase<> lng_settings_power_subtitle{ ushort(1003) };
inline constexpr phrase<> lng_settings_power_stickers{ ushort(1004) };
inline constexpr phrase<> lng_settings_power_stickers_panel{ ushort(1005) };
inline constexpr phrase<> lng_settings_power_stickers_chat{ ushort(1006) };
inline constexpr phrase<> lng_settings_power_emoji{ ushort(1007) };
inline constexpr phrase<> lng_settings_power_emoji_panel{ ushort(1008) };
inline constexpr phrase<> lng_settings_power_emoji_reactions{ ushort(1009) };
inline constexpr phrase<> lng_settings_power_emoji_chat{ ushort(1010) };
inline constexpr phrase<> lng_settings_power_emoji_status{ ushort(1011) };
inline constexpr phrase<> lng_settings_power_chat{ ushort(1012) };
inline constexpr phrase<> lng_settings_power_chat_background{ ushort(1013) };
inline constexpr phrase<> lng_settings_power_chat_spoiler{ ushort(1014) };
inline constexpr phrase<> lng_settings_power_chat_effects{ ushort(1015) };
inline constexpr phrase<> lng_settings_power_calls{ ushort(1016) };
inline constexpr phrase<> lng_settings_power_ui{ ushort(1017) };
inline constexpr phrase<> lng_settings_power_auto{ ushort(1018) };
inline constexpr phrase<> lng_settings_power_auto_about{ ushort(1019) };
inline constexpr phrase<> lng_settings_power_turn_off{ ushort(1020) };
inline constexpr phrase<> lng_settings_cloud_password_on{ ushort(1021) };
inline constexpr phrase<> lng_settings_cloud_password_off{ ushort(1022) };
inline constexpr phrase<> lng_settings_cloud_password_start_title{ ushort(1023) };
inline constexpr phrase<> lng_settings_cloud_password_password_title{ ushort(1024) };
inline constexpr phrase<> lng_settings_cloud_password_hint_title{ ushort(1025) };
inline constexpr phrase<> lng_settings_cloud_password_email_title{ ushort(1026) };
inline constexpr phrase<> lng_settings_cloud_password_start_about{ ushort(1027) };
inline constexpr phrase<> lng_settings_cloud_password_hint_about{ ushort(1028) };
inline constexpr phrase<> lng_settings_cloud_password_email_about{ ushort(1029) };
inline constexpr phrase<> lng_settings_cloud_password_password_subtitle{ ushort(1030) };
inline constexpr phrase<> lng_settings_cloud_password_check_subtitle{ ushort(1031) };
inline constexpr phrase<> lng_settings_cloud_password_hint_subtitle{ ushort(1032) };
inline constexpr phrase<> lng_settings_cloud_password_email_subtitle{ ushort(1033) };
inline constexpr phrase<> lng_settings_cloud_password_email_recovery_subtitle{ ushort(1034) };
inline constexpr phrase<> lng_settings_cloud_password_manage_about1{ ushort(1035) };
inline constexpr phrase<> lng_settings_cloud_password_manage_about2{ ushort(1036) };
inline constexpr phrase<> lng_settings_cloud_password_manage_disable_sure{ ushort(1037) };
inline constexpr phrase<> lng_settings_cloud_password_manage_email_new{ ushort(1038) };
inline constexpr phrase<> lng_settings_cloud_password_manage_email_change{ ushort(1039) };
inline constexpr phrase<> lng_settings_cloud_password_manage_password_change{ ushort(1040) };
inline constexpr phrase<> lng_settings_cloud_password_skip_hint{ ushort(1041) };
inline constexpr phrase<> lng_settings_cloud_password_save{ ushort(1042) };
inline constexpr phrase<> lng_settings_cloud_password_email_confirm{ ushort(1043) };
inline constexpr phrase<lngtag_duration> lng_settings_cloud_password_reset_in{ ushort(1044) };
inline constexpr phrase<> lng_settings_cloud_login_email_section_title{ ushort(1045) };
inline constexpr phrase<> lng_settings_cloud_login_email_box_about{ ushort(1046) };
inline constexpr phrase<> lng_settings_cloud_login_email_box_ok{ ushort(1047) };
inline constexpr phrase<> lng_settings_cloud_login_email_title{ ushort(1048) };
inline constexpr phrase<> lng_settings_cloud_login_email_placeholder{ ushort(1049) };
inline constexpr phrase<> lng_settings_cloud_login_email_about{ ushort(1050) };
inline constexpr phrase<> lng_settings_cloud_login_email_confirm{ ushort(1051) };
inline constexpr phrase<> lng_settings_cloud_login_email_code_title{ ushort(1052) };
inline constexpr phrase<lngtag_email> lng_settings_cloud_login_email_code_about{ ushort(1053) };
inline constexpr phrase<> lng_settings_cloud_login_email_success{ ushort(1054) };
inline constexpr phrase<> lng_settings_error_email_not_alowed{ ushort(1055) };
inline constexpr phrase<> lng_settings_ttl_title{ ushort(1056) };
inline constexpr phrase<> lng_settings_ttl_about{ ushort(1057) };
inline constexpr phrase<lngtag_after_duration> lng_settings_ttl_after{ ushort(1058) };
inline constexpr phrase<lngtag_count> lng_settings_ttl_after_hours{ ushort(1059) };
inline constexpr phrase<lngtag_count> lng_settings_ttl_after_days{ ushort(1065) };
inline constexpr phrase<lngtag_count> lng_settings_ttl_after_weeks{ ushort(1071) };
inline constexpr phrase<lngtag_count> lng_settings_ttl_after_months{ ushort(1077) };
inline constexpr phrase<lngtag_count> lng_settings_ttl_after_years{ ushort(1083) };
inline constexpr phrase<> lng_settings_ttl_after_off{ ushort(1089) };
inline constexpr phrase<> lng_settings_ttl_after_custom{ ushort(1090) };
inline constexpr phrase<lngtag_link> lng_settings_ttl_after_about{ ushort(1091) };
inline constexpr phrase<> lng_settings_ttl_after_about_link{ ushort(1092) };
inline constexpr phrase<> lng_settings_ttl_after_subtitle{ ushort(1093) };
inline constexpr phrase<lngtag_after_duration> lng_settings_ttl_after_sure{ ushort(1094) };
inline constexpr phrase<lngtag_after_duration> lng_settings_ttl_after_toast{ ushort(1095) };
inline constexpr phrase<> lng_settings_ttl_select_chats_sorry{ ushort(1096) };
inline constexpr phrase<lngtag_after_duration> lng_settings_ttl_select_chats_status{ ushort(1097) };
inline constexpr phrase<> lng_settings_ttl_select_chats_status_disabled{ ushort(1098) };
inline constexpr phrase<lngtag_count, lngtag_duration> lng_settings_ttl_select_chats_toast{ ushort(1099) };
inline constexpr phrase<lngtag_count> lng_settings_ttl_select_chats_disabled_toast{ ushort(1105) };
inline constexpr phrase<> lng_clear_payment_info_title{ ushort(1111) };
inline constexpr phrase<> lng_clear_payment_info_sure{ ushort(1112) };
inline constexpr phrase<> lng_clear_payment_info_shipping{ ushort(1113) };
inline constexpr phrase<> lng_clear_payment_info_payment{ ushort(1114) };
inline constexpr phrase<> lng_clear_payment_info_clear{ ushort(1115) };
inline constexpr phrase<> lng_clear_payment_info_confirm{ ushort(1116) };
inline constexpr phrase<> lng_settings_theme_settings{ ushort(1117) };
inline constexpr phrase<> lng_settings_theme_name_color{ ushort(1118) };
inline constexpr phrase<> lng_settings_auto_night_mode{ ushort(1119) };
inline constexpr phrase<> lng_settings_auto_night_mode_off{ ushort(1120) };
inline constexpr phrase<> lng_settings_auto_night_mode_on{ ushort(1121) };
inline constexpr phrase<> lng_settings_auto_night_warning{ ushort(1122) };
inline constexpr phrase<> lng_settings_auto_night_disable{ ushort(1123) };
inline constexpr phrase<> lng_settings_font_family{ ushort(1124) };
inline constexpr phrase<> lng_settings_color_title{ ushort(1125) };
inline constexpr phrase<> lng_settings_color_reply{ ushort(1126) };
inline constexpr phrase<> lng_settings_color_reply_channel{ ushort(1127) };
inline constexpr phrase<> lng_settings_color_text{ ushort(1128) };
inline constexpr phrase<> lng_settings_color_text_channel{ ushort(1129) };
inline constexpr phrase<> lng_settings_color_link_name{ ushort(1130) };
inline constexpr phrase<> lng_settings_color_link_title{ ushort(1131) };
inline constexpr phrase<> lng_settings_color_link_description{ ushort(1132) };
inline constexpr phrase<> lng_settings_color_about{ ushort(1133) };
inline constexpr phrase<> lng_settings_color_about_channel{ ushort(1134) };
inline constexpr phrase<> lng_settings_color_emoji{ ushort(1135) };
inline constexpr phrase<> lng_settings_color_emoji_remove{ ushort(1136) };
inline constexpr phrase<> lng_settings_color_emoji_off{ ushort(1137) };
inline constexpr phrase<> lng_settings_color_emoji_about{ ushort(1138) };
inline constexpr phrase<> lng_settings_color_emoji_about_channel{ ushort(1139) };
inline constexpr phrase<lngtag_link> lng_settings_color_subscribe{ ushort(1140) };
inline constexpr phrase<> lng_settings_color_changed{ ushort(1141) };
inline constexpr phrase<> lng_settings_color_changed_channel{ ushort(1142) };
inline constexpr phrase<> lng_suggest_hide_new_title{ ushort(1143) };
inline constexpr phrase<> lng_suggest_hide_new_about{ ushort(1144) };
inline constexpr phrase<> lng_suggest_hide_new_to_settings{ ushort(1145) };
inline constexpr phrase<> lng_settings_spellchecker{ ushort(1146) };
inline constexpr phrase<> lng_settings_system_spellchecker{ ushort(1147) };
inline constexpr phrase<> lng_settings_custom_spellchecker{ ushort(1148) };
inline constexpr phrase<> lng_settings_auto_download_dictionaries{ ushort(1149) };
inline constexpr phrase<> lng_settings_manage_dictionaries{ ushort(1150) };
inline constexpr phrase<> lng_settings_manage_enabled_dictionary{ ushort(1151) };
inline constexpr phrase<> lng_settings_manage_remove_dictionary{ ushort(1152) };
inline constexpr phrase<> lng_settings_gift_premium{ ushort(1153) };
inline constexpr phrase<> lng_settings_gift_premium_users_confirm{ ushort(1154) };
inline constexpr phrase<lngtag_count> lng_settings_gift_premium_users_error{ ushort(1155) };
inline constexpr phrase<> lng_settings_gift_premium_choose{ ushort(1161) };
inline constexpr phrase<> lng_backgrounds_header{ ushort(1162) };
inline constexpr phrase<> lng_theme_sure_keep{ ushort(1163) };
inline constexpr phrase<lngtag_count> lng_theme_reverting{ ushort(1164) };
inline constexpr phrase<> lng_theme_keep_changes{ ushort(1170) };
inline constexpr phrase<> lng_theme_revert{ ushort(1171) };
inline constexpr phrase<> lng_theme_no_desktop{ ushort(1172) };
inline constexpr phrase<> lng_theme_share{ ushort(1173) };
inline constexpr phrase<> lng_theme_edit{ ushort(1174) };
inline constexpr phrase<> lng_theme_delete{ ushort(1175) };
inline constexpr phrase<> lng_theme_delete_sure{ ushort(1176) };
inline constexpr phrase<> lng_background_header{ ushort(1177) };
inline constexpr phrase<> lng_background_text1{ ushort(1178) };
inline constexpr phrase<> lng_background_text2{ ushort(1179) };
inline constexpr phrase<> lng_background_bad_link{ ushort(1180) };
inline constexpr phrase<> lng_background_share{ ushort(1181) };
inline constexpr phrase<> lng_background_link_copied{ ushort(1182) };
inline constexpr phrase<> lng_background_blur{ ushort(1183) };
inline constexpr phrase<> lng_background_sure_delete{ ushort(1184) };
inline constexpr phrase<lngtag_user> lng_background_other_info{ ushort(1185) };
inline constexpr phrase<> lng_background_other_channel{ ushort(1186) };
inline constexpr phrase<> lng_background_other_group{ ushort(1187) };
inline constexpr phrase<> lng_background_apply1{ ushort(1188) };
inline constexpr phrase<> lng_background_apply2{ ushort(1189) };
inline constexpr phrase<> lng_background_apply_button{ ushort(1190) };
inline constexpr phrase<> lng_background_dimming{ ushort(1191) };
inline constexpr phrase<> lng_background_sure_reset_default{ ushort(1192) };
inline constexpr phrase<> lng_background_reset_default{ ushort(1193) };
inline constexpr phrase<> lng_background_apply_me{ ushort(1194) };
inline constexpr phrase<lngtag_user> lng_background_apply_both{ ushort(1195) };
inline constexpr phrase<> lng_background_apply_channel{ ushort(1196) };
inline constexpr phrase<> lng_background_apply_group{ ushort(1197) };
inline constexpr phrase<> lng_download_path_ask{ ushort(1198) };
inline constexpr phrase<> lng_download_path{ ushort(1199) };
inline constexpr phrase<> lng_download_path_temp{ ushort(1200) };
inline constexpr phrase<> lng_download_path_default{ ushort(1201) };
inline constexpr phrase<> lng_download_path_header{ ushort(1202) };
inline constexpr phrase<> lng_download_path_default_radio{ ushort(1203) };
inline constexpr phrase<> lng_download_path_temp_radio{ ushort(1204) };
inline constexpr phrase<> lng_download_path_dir_radio{ ushort(1205) };
inline constexpr phrase<> lng_download_path_choose{ ushort(1206) };
inline constexpr phrase<> lng_download_path_failed{ ushort(1207) };
inline constexpr phrase<> lng_download_finish_failed{ ushort(1208) };
inline constexpr phrase<> lng_settings_section_privacy{ ushort(1209) };
inline constexpr phrase<> lng_local_storage_title{ ushort(1210) };
inline constexpr phrase<> lng_local_storage_empty{ ushort(1211) };
inline constexpr phrase<lngtag_count> lng_local_storage_image{ ushort(1212) };
inline constexpr phrase<lngtag_count> lng_local_storage_sticker{ ushort(1218) };
inline constexpr phrase<lngtag_count> lng_local_storage_voice{ ushort(1224) };
inline constexpr phrase<lngtag_count> lng_local_storage_round{ ushort(1230) };
inline constexpr phrase<lngtag_count> lng_local_storage_animation{ ushort(1236) };
inline constexpr phrase<> lng_local_storage_media{ ushort(1242) };
inline constexpr phrase<lngtag_size> lng_local_storage_size_limit{ ushort(1243) };
inline constexpr phrase<lngtag_size> lng_local_storage_media_limit{ ushort(1244) };
inline constexpr phrase<lngtag_limit> lng_local_storage_time_limit{ ushort(1245) };
inline constexpr phrase<> lng_local_storage_limit_never{ ushort(1246) };
inline constexpr phrase<> lng_local_storage_summary{ ushort(1247) };
inline constexpr phrase<> lng_local_storage_clear_some{ ushort(1248) };
inline constexpr phrase<> lng_local_storage_clear{ ushort(1249) };
inline constexpr phrase<> lng_local_storage_clearing{ ushort(1250) };
inline constexpr phrase<> lng_passcode_remove_button{ ushort(1251) };
inline constexpr phrase<> lng_passcode_change{ ushort(1252) };
inline constexpr phrase<> lng_passcode_create{ ushort(1253) };
inline constexpr phrase<> lng_passcode_remove{ ushort(1254) };
inline constexpr phrase<> lng_passcode_autolock{ ushort(1255) };
inline constexpr phrase<> lng_passcode_autolock_away{ ushort(1256) };
inline constexpr phrase<> lng_passcode_autolock_inactive{ ushort(1257) };
inline constexpr phrase<lngtag_hours_count, lngtag_minutes_count> lng_passcode_autolock_hours_minutes{ ushort(1258) };
inline constexpr phrase<> lng_passcode_enter_old{ ushort(1259) };
inline constexpr phrase<> lng_passcode_enter_first{ ushort(1260) };
inline constexpr phrase<> lng_passcode_enter_new{ ushort(1261) };
inline constexpr phrase<> lng_passcode_confirm_new{ ushort(1262) };
inline constexpr phrase<> lng_passcode_about{ ushort(1263) };
inline constexpr phrase<> lng_passcode_about1{ ushort(1264) };
inline constexpr phrase<> lng_passcode_about2{ ushort(1265) };
inline constexpr phrase<> lng_passcode_about3{ ushort(1266) };
inline constexpr phrase<> lng_passcode_differ{ ushort(1267) };
inline constexpr phrase<> lng_passcode_wrong{ ushort(1268) };
inline constexpr phrase<> lng_passcode_is_same{ ushort(1269) };
inline constexpr phrase<> lng_passcode_enter{ ushort(1270) };
inline constexpr phrase<> lng_passcode_ph{ ushort(1271) };
inline constexpr phrase<> lng_passcode_submit{ ushort(1272) };
inline constexpr phrase<> lng_passcode_logout{ ushort(1273) };
inline constexpr phrase<> lng_passcode_winhello{ ushort(1274) };
inline constexpr phrase<> lng_passcode_touchid{ ushort(1275) };
inline constexpr phrase<> lng_passcode_applewatch{ ushort(1276) };
inline constexpr phrase<> lng_passcode_systempwd{ ushort(1277) };
inline constexpr phrase<> lng_passcode_winhello_unlock{ ushort(1278) };
inline constexpr phrase<> lng_passcode_touchid_unlock{ ushort(1279) };
inline constexpr phrase<> lng_passcode_create_button{ ushort(1280) };
inline constexpr phrase<> lng_passcode_check_button{ ushort(1281) };
inline constexpr phrase<> lng_passcode_change_button{ ushort(1282) };
inline constexpr phrase<> lng_passcode_create_title{ ushort(1283) };
inline constexpr phrase<> lng_passcode_check_title{ ushort(1284) };
inline constexpr phrase<> lng_passcode_change_title{ ushort(1285) };
inline constexpr phrase<lngtag_email> lng_cloud_password_waiting_code{ ushort(1286) };
inline constexpr phrase<> lng_cloud_password_confirm{ ushort(1287) };
inline constexpr phrase<> lng_cloud_password_change{ ushort(1288) };
inline constexpr phrase<> lng_cloud_password_create{ ushort(1289) };
inline constexpr phrase<> lng_cloud_password_remove{ ushort(1290) };
inline constexpr phrase<> lng_cloud_password_reset_ready{ ushort(1291) };
inline constexpr phrase<> lng_cloud_password_enter_old{ ushort(1292) };
inline constexpr phrase<> lng_cloud_password_enter_first{ ushort(1293) };
inline constexpr phrase<> lng_cloud_password_enter_new{ ushort(1294) };
inline constexpr phrase<> lng_cloud_password_confirm_new{ ushort(1295) };
inline constexpr phrase<> lng_cloud_password_hint{ ushort(1296) };
inline constexpr phrase<> lng_cloud_password_change_hint{ ushort(1297) };
inline constexpr phrase<> lng_cloud_password_bad{ ushort(1298) };
inline constexpr phrase<> lng_cloud_password_email{ ushort(1299) };
inline constexpr phrase<> lng_cloud_password_bad_email{ ushort(1300) };
inline constexpr phrase<> lng_cloud_password_about{ ushort(1301) };
inline constexpr phrase<> lng_cloud_password_about_recover{ ushort(1302) };
inline constexpr phrase<> lng_cloud_password_skip_email{ ushort(1303) };
inline constexpr phrase<> lng_cloud_password_was_set{ ushort(1304) };
inline constexpr phrase<> lng_cloud_password_updated{ ushort(1305) };
inline constexpr phrase<> lng_cloud_password_removed{ ushort(1306) };
inline constexpr phrase<> lng_cloud_password_differ{ ushort(1307) };
inline constexpr phrase<> lng_cloud_password_wrong{ ushort(1308) };
inline constexpr phrase<> lng_cloud_password_is_same{ ushort(1309) };
inline constexpr phrase<> lng_cloud_password_passport_losing{ ushort(1310) };
inline constexpr phrase<> lng_cloud_password_resend{ ushort(1311) };
inline constexpr phrase<> lng_cloud_password_resent{ ushort(1312) };
inline constexpr phrase<> lng_cloud_password_reset_no_email{ ushort(1313) };
inline constexpr phrase<> lng_cloud_password_reset_with_email{ ushort(1314) };
inline constexpr phrase<> lng_cloud_password_reset_ok{ ushort(1315) };
inline constexpr phrase<> lng_cloud_password_reset_cancel_title{ ushort(1316) };
inline constexpr phrase<> lng_cloud_password_reset_cancel_sure{ ushort(1317) };
inline constexpr phrase<lngtag_duration> lng_cloud_password_reset_later{ ushort(1318) };
inline constexpr phrase<> lng_cloud_password_expired{ ushort(1319) };
inline constexpr phrase<> lng_connection_auto_connecting{ ushort(1320) };
inline constexpr phrase<lngtag_transport> lng_connection_auto{ ushort(1321) };
inline constexpr phrase<> lng_connection_proxy_connecting{ ushort(1322) };
inline constexpr phrase<lngtag_transport> lng_connection_proxy{ ushort(1323) };
inline constexpr phrase<> lng_connection_try_ipv6{ ushort(1324) };
inline constexpr phrase<> lng_connection_host_ph{ ushort(1325) };
inline constexpr phrase<> lng_connection_port_ph{ ushort(1326) };
inline constexpr phrase<> lng_connection_user_ph{ ushort(1327) };
inline constexpr phrase<> lng_connection_password_ph{ ushort(1328) };
inline constexpr phrase<> lng_connection_proxy_secret_ph{ ushort(1329) };
inline constexpr phrase<> lng_connection_save{ ushort(1330) };
inline constexpr phrase<> lng_proxy_settings{ ushort(1331) };
inline constexpr phrase<> lng_proxy_disable{ ushort(1332) };
inline constexpr phrase<> lng_proxy_use_system_settings{ ushort(1333) };
inline constexpr phrase<> lng_proxy_use_custom{ ushort(1334) };
inline constexpr phrase<> lng_proxy_use_for_calls{ ushort(1335) };
inline constexpr phrase<> lng_proxy_about{ ushort(1336) };
inline constexpr phrase<> lng_proxy_add{ ushort(1337) };
inline constexpr phrase<> lng_proxy_share{ ushort(1338) };
inline constexpr phrase<> lng_proxy_online{ ushort(1339) };
inline constexpr phrase<> lng_proxy_checking{ ushort(1340) };
inline constexpr phrase<> lng_proxy_connecting{ ushort(1341) };
inline constexpr phrase<lngtag_ping> lng_proxy_available{ ushort(1342) };
inline constexpr phrase<> lng_proxy_unavailable{ ushort(1343) };
inline constexpr phrase<> lng_proxy_edit{ ushort(1344) };
inline constexpr phrase<> lng_proxy_menu_edit{ ushort(1345) };
inline constexpr phrase<> lng_proxy_menu_delete{ ushort(1346) };
inline constexpr phrase<> lng_proxy_menu_restore{ ushort(1347) };
inline constexpr phrase<> lng_proxy_edit_share{ ushort(1348) };
inline constexpr phrase<> lng_proxy_edit_share_qr_box_title{ ushort(1349) };
inline constexpr phrase<> lng_proxy_edit_share_list_button{ ushort(1350) };
inline constexpr phrase<> lng_proxy_edit_share_list_toast{ ushort(1351) };
inline constexpr phrase<> lng_proxy_address_label{ ushort(1352) };
inline constexpr phrase<> lng_proxy_credentials_optional{ ushort(1353) };
inline constexpr phrase<> lng_proxy_credentials{ ushort(1354) };
inline constexpr phrase<> lng_proxy_description{ ushort(1355) };
inline constexpr phrase<> lng_proxy_sponsor{ ushort(1356) };
inline constexpr phrase<> lng_proxy_sponsor_about{ ushort(1357) };
inline constexpr phrase<> lng_proxy_sponsor_warning{ ushort(1358) };
inline constexpr phrase<> lng_proxy_add_from_clipboard{ ushort(1359) };
inline constexpr phrase<> lng_proxy_add_from_clipboard_good_toast{ ushort(1360) };
inline constexpr phrase<> lng_proxy_add_from_clipboard_failed_toast{ ushort(1361) };
inline constexpr phrase<> lng_proxy_add_from_clipboard_existing_toast{ ushort(1362) };
inline constexpr phrase<> lng_badge_psa_default{ ushort(1363) };
inline constexpr phrase<> lng_about_psa_default{ ushort(1364) };
inline constexpr phrase<> lng_tooltip_psa_default{ ushort(1365) };
inline constexpr phrase<> lng_settings_blocked_users{ ushort(1366) };
inline constexpr phrase<> lng_settings_no_blocked_users{ ushort(1367) };
inline constexpr phrase<> lng_settings_show_sessions{ ushort(1368) };
inline constexpr phrase<> lng_settings_export_data{ ushort(1369) };
inline constexpr phrase<> lng_settings_destroy_if{ ushort(1370) };
inline constexpr phrase<> lng_settings_terminate_title{ ushort(1371) };
inline constexpr phrase<> lng_settings_terminate_if{ ushort(1372) };
inline constexpr phrase<> lng_settings_reset_sure{ ushort(1373) };
inline constexpr phrase<> lng_settings_reset_one_sure{ ushort(1374) };
inline constexpr phrase<> lng_settings_reset_button{ ushort(1375) };
inline constexpr phrase<> lng_settings_rename_device{ ushort(1376) };
inline constexpr phrase<> lng_settings_device_name{ ushort(1377) };
inline constexpr phrase<> lng_settings_rename_device_title{ ushort(1378) };
inline constexpr phrase<> lng_settings_manage_local_storage{ ushort(1379) };
inline constexpr phrase<> lng_settings_ask_question{ ushort(1380) };
inline constexpr phrase<> lng_settings_ask_sure{ ushort(1381) };
inline constexpr phrase<> lng_settings_faq_button{ ushort(1382) };
inline constexpr phrase<> lng_settings_ask_ok{ ushort(1383) };
inline constexpr phrase<> lng_settings_faq{ ushort(1384) };
inline constexpr phrase<> lng_settings_faq_link{ ushort(1385) };
inline constexpr phrase<> lng_settings_features{ ushort(1386) };
inline constexpr phrase<> lng_settings_credits{ ushort(1387) };
inline constexpr phrase<> lng_settings_currency{ ushort(1388) };
inline constexpr phrase<> lng_settings_logout{ ushort(1389) };
inline constexpr phrase<> lng_sure_logout{ ushort(1390) };
inline constexpr phrase<> lng_settings_need_restart{ ushort(1391) };
inline constexpr phrase<> lng_settings_restart_now{ ushort(1392) };
inline constexpr phrase<> lng_settings_restart_later{ ushort(1393) };
inline constexpr phrase<> lng_settings_quick_dialog_action_title{ ushort(1394) };
inline constexpr phrase<> lng_settings_quick_dialog_action_about{ ushort(1395) };
inline constexpr phrase<> lng_settings_quick_dialog_action_both{ ushort(1396) };
inline constexpr phrase<> lng_settings_quick_dialog_action_swipe{ ushort(1397) };
inline constexpr phrase<> lng_settings_quick_dialog_action_mute{ ushort(1398) };
inline constexpr phrase<> lng_settings_quick_dialog_action_unmute{ ushort(1399) };
inline constexpr phrase<> lng_settings_quick_dialog_action_pin{ ushort(1400) };
inline constexpr phrase<> lng_settings_quick_dialog_action_unpin{ ushort(1401) };
inline constexpr phrase<> lng_settings_quick_dialog_action_read{ ushort(1402) };
inline constexpr phrase<> lng_settings_quick_dialog_action_unread{ ushort(1403) };
inline constexpr phrase<> lng_settings_quick_dialog_action_archive{ ushort(1404) };
inline constexpr phrase<> lng_settings_quick_dialog_action_unarchive{ ushort(1405) };
inline constexpr phrase<> lng_settings_quick_dialog_action_delete{ ushort(1406) };
inline constexpr phrase<> lng_settings_quick_dialog_action_disabled{ ushort(1407) };
inline constexpr phrase<> lng_quick_dialog_action_toast_mute_success{ ushort(1408) };
inline constexpr phrase<> lng_quick_dialog_action_toast_unmute_success{ ushort(1409) };
inline constexpr phrase<> lng_quick_dialog_action_toast_pin_success{ ushort(1410) };
inline constexpr phrase<> lng_quick_dialog_action_toast_unpin_success{ ushort(1411) };
inline constexpr phrase<> lng_quick_dialog_action_toast_read_success{ ushort(1412) };
inline constexpr phrase<> lng_quick_dialog_action_toast_unread_success{ ushort(1413) };
inline constexpr phrase<> lng_quick_dialog_action_toast_archive_success{ ushort(1414) };
inline constexpr phrase<> lng_quick_dialog_action_toast_unarchive_success{ ushort(1415) };
inline constexpr phrase<> lng_archive_hint_title{ ushort(1416) };
inline constexpr phrase<lngtag_link> lng_archive_hint_about{ ushort(1417) };
inline constexpr phrase<lngtag_link> lng_archive_hint_about_unmuted{ ushort(1418) };
inline constexpr phrase<lngtag_emoji> lng_archive_hint_about_link{ ushort(1419) };
inline constexpr phrase<> lng_archive_hint_section_1{ ushort(1420) };
inline constexpr phrase<> lng_archive_hint_section_1_info{ ushort(1421) };
inline constexpr phrase<> lng_archive_hint_section_2{ ushort(1422) };
inline constexpr phrase<> lng_archive_hint_section_2_info{ ushort(1423) };
inline constexpr phrase<> lng_archive_hint_section_3{ ushort(1424) };
inline constexpr phrase<> lng_archive_hint_section_3_info{ ushort(1425) };
inline constexpr phrase<> lng_archive_hint_button{ ushort(1426) };
inline constexpr phrase<lngtag_link> lng_settings_generic_subscribe{ ushort(1427) };
inline constexpr phrase<> lng_settings_generic_subscribe_link{ ushort(1428) };
inline constexpr phrase<> lng_sessions_header{ ushort(1429) };
inline constexpr phrase<> lng_sessions_other_header{ ushort(1430) };
inline constexpr phrase<> lng_sessions_other_desc{ ushort(1431) };
inline constexpr phrase<> lng_sessions_terminate_all{ ushort(1432) };
inline constexpr phrase<> lng_sessions_terminate_all_about{ ushort(1433) };
inline constexpr phrase<> lng_sessions_incomplete{ ushort(1434) };
inline constexpr phrase<> lng_sessions_incomplete_about{ ushort(1435) };
inline constexpr phrase<> lng_sessions_info{ ushort(1436) };
inline constexpr phrase<> lng_sessions_terminate{ ushort(1437) };
inline constexpr phrase<> lng_sessions_application{ ushort(1438) };
inline constexpr phrase<> lng_sessions_system{ ushort(1439) };
inline constexpr phrase<> lng_sessions_browser{ ushort(1440) };
inline constexpr phrase<> lng_sessions_ip{ ushort(1441) };
inline constexpr phrase<> lng_sessions_location{ ushort(1442) };
inline constexpr phrase<> lng_sessions_location_about{ ushort(1443) };
inline constexpr phrase<> lng_sessions_about_apps{ ushort(1444) };
inline constexpr phrase<> lng_blocked_list_title{ ushort(1445) };
inline constexpr phrase<> lng_blocked_list_unknown_phone{ ushort(1446) };
inline constexpr phrase<> lng_blocked_list_unblock{ ushort(1447) };
inline constexpr phrase<> lng_blocked_list_add{ ushort(1448) };
inline constexpr phrase<> lng_blocked_list_add_title{ ushort(1449) };
inline constexpr phrase<> lng_blocked_list_already_blocked{ ushort(1450) };
inline constexpr phrase<> lng_blocked_list_about{ ushort(1451) };
inline constexpr phrase<> lng_blocked_list_not_found{ ushort(1452) };
inline constexpr phrase<lngtag_name> lng_blocked_list_confirm_title{ ushort(1453) };
inline constexpr phrase<lngtag_name> lng_blocked_list_confirm_text{ ushort(1454) };
inline constexpr phrase<> lng_blocked_list_confirm_clear{ ushort(1455) };
inline constexpr phrase<> lng_blocked_list_confirm_ok{ ushort(1456) };
inline constexpr phrase<> lng_blocked_list_empty_title{ ushort(1457) };
inline constexpr phrase<> lng_blocked_list_empty_description{ ushort(1458) };
inline constexpr phrase<lngtag_count> lng_blocked_list_subtitle{ ushort(1459) };
inline constexpr phrase<> lng_edit_privacy_everyone{ ushort(1465) };
inline constexpr phrase<> lng_edit_privacy_no_miniapps{ ushort(1466) };
inline constexpr phrase<> lng_edit_privacy_contacts{ ushort(1467) };
inline constexpr phrase<> lng_edit_privacy_close_friends{ ushort(1468) };
inline constexpr phrase<> lng_edit_privacy_contacts_and_premium{ ushort(1469) };
inline constexpr phrase<> lng_edit_privacy_paid{ ushort(1470) };
inline constexpr phrase<> lng_edit_privacy_contacts_and_miniapps{ ushort(1471) };
inline constexpr phrase<> lng_edit_privacy_nobody{ ushort(1472) };
inline constexpr phrase<> lng_edit_privacy_premium{ ushort(1473) };
inline constexpr phrase<> lng_edit_privacy_miniapps{ ushort(1474) };
inline constexpr phrase<> lng_edit_privacy_exceptions{ ushort(1475) };
inline constexpr phrase<> lng_edit_privacy_user_types{ ushort(1476) };
inline constexpr phrase<> lng_edit_privacy_users_and_groups{ ushort(1477) };
inline constexpr phrase<> lng_edit_privacy_premium_status{ ushort(1478) };
inline constexpr phrase<> lng_edit_privacy_miniapps_status{ ushort(1479) };
inline constexpr phrase<lngtag_count> lng_edit_privacy_exceptions_count{ ushort(1480) };
inline constexpr phrase<lngtag_users> lng_edit_privacy_exceptions_premium_and{ ushort(1486) };
inline constexpr phrase<lngtag_users> lng_edit_privacy_exceptions_miniapps_and{ ushort(1487) };
inline constexpr phrase<> lng_edit_privacy_exceptions_add{ ushort(1488) };
inline constexpr phrase<> lng_edit_privacy_phone_number_title{ ushort(1489) };
inline constexpr phrase<> lng_edit_privacy_phone_number_header{ ushort(1490) };
inline constexpr phrase<> lng_edit_privacy_phone_number_warning{ ushort(1491) };
inline constexpr phrase<> lng_edit_privacy_phone_number_always_empty{ ushort(1492) };
inline constexpr phrase<> lng_edit_privacy_phone_number_never_empty{ ushort(1493) };
inline constexpr phrase<> lng_edit_privacy_phone_number_exceptions{ ushort(1494) };
inline constexpr phrase<> lng_edit_privacy_phone_number_always_title{ ushort(1495) };
inline constexpr phrase<> lng_edit_privacy_phone_number_never_title{ ushort(1496) };
inline constexpr phrase<> lng_edit_privacy_phone_number_find{ ushort(1497) };
inline constexpr phrase<> lng_edit_privacy_phone_number_contacts{ ushort(1498) };
inline constexpr phrase<> lng_edit_privacy_lastseen_title{ ushort(1499) };
inline constexpr phrase<> lng_edit_privacy_lastseen_header{ ushort(1500) };
inline constexpr phrase<> lng_edit_privacy_lastseen_warning{ ushort(1501) };
inline constexpr phrase<> lng_edit_privacy_lastseen_always_empty{ ushort(1502) };
inline constexpr phrase<> lng_edit_privacy_lastseen_never_empty{ ushort(1503) };
inline constexpr phrase<> lng_edit_privacy_lastseen_exceptions{ ushort(1504) };
inline constexpr phrase<> lng_edit_privacy_lastseen_always_title{ ushort(1505) };
inline constexpr phrase<> lng_edit_privacy_lastseen_never_title{ ushort(1506) };
inline constexpr phrase<> lng_edit_lastseen_hide_read_time{ ushort(1507) };
inline constexpr phrase<> lng_edit_lastseen_hide_read_time_about{ ushort(1508) };
inline constexpr phrase<> lng_edit_lastseen_subscribe{ ushort(1509) };
inline constexpr phrase<> lng_edit_lastseen_subscribe_about{ ushort(1510) };
inline constexpr phrase<> lng_edit_privacy_groups_title{ ushort(1511) };
inline constexpr phrase<> lng_edit_privacy_groups_header{ ushort(1512) };
inline constexpr phrase<> lng_edit_privacy_groups_always_empty{ ushort(1513) };
inline constexpr phrase<> lng_edit_privacy_groups_never_empty{ ushort(1514) };
inline constexpr phrase<> lng_edit_privacy_groups_exceptions{ ushort(1515) };
inline constexpr phrase<> lng_edit_privacy_groups_always_title{ ushort(1516) };
inline constexpr phrase<> lng_edit_privacy_groups_never_title{ ushort(1517) };
inline constexpr phrase<> lng_edit_privacy_about_title{ ushort(1518) };
inline constexpr phrase<> lng_edit_privacy_about_header{ ushort(1519) };
inline constexpr phrase<> lng_edit_privacy_about_always_empty{ ushort(1520) };
inline constexpr phrase<> lng_edit_privacy_about_never_empty{ ushort(1521) };
inline constexpr phrase<> lng_edit_privacy_about_exceptions{ ushort(1522) };
inline constexpr phrase<> lng_edit_privacy_about_always_title{ ushort(1523) };
inline constexpr phrase<> lng_edit_privacy_about_never_title{ ushort(1524) };
inline constexpr phrase<> lng_edit_privacy_birthday_title{ ushort(1525) };
inline constexpr phrase<> lng_edit_privacy_birthday_header{ ushort(1526) };
inline constexpr phrase<> lng_edit_privacy_birthday_always_empty{ ushort(1527) };
inline constexpr phrase<> lng_edit_privacy_birthday_never_empty{ ushort(1528) };
inline constexpr phrase<> lng_edit_privacy_birthday_exceptions{ ushort(1529) };
inline constexpr phrase<> lng_edit_privacy_birthday_always_title{ ushort(1530) };
inline constexpr phrase<> lng_edit_privacy_birthday_never_title{ ushort(1531) };
inline constexpr phrase<lngtag_link> lng_edit_privacy_birthday_yet{ ushort(1532) };
inline constexpr phrase<> lng_edit_privacy_birthday_yet_link{ ushort(1533) };
inline constexpr phrase<> lng_edit_privacy_gifts_title{ ushort(1534) };
inline constexpr phrase<> lng_edit_privacy_gifts_header{ ushort(1535) };
inline constexpr phrase<> lng_edit_privacy_gifts_always_empty{ ushort(1536) };
inline constexpr phrase<> lng_edit_privacy_gifts_never_empty{ ushort(1537) };
inline constexpr phrase<> lng_edit_privacy_gifts_exceptions{ ushort(1538) };
inline constexpr phrase<> lng_edit_privacy_gifts_always_title{ ushort(1539) };
inline constexpr phrase<> lng_edit_privacy_gifts_never_title{ ushort(1540) };
inline constexpr phrase<> lng_edit_privacy_gifts_types{ ushort(1541) };
inline constexpr phrase<> lng_edit_privacy_gifts_premium{ ushort(1542) };
inline constexpr phrase<> lng_edit_privacy_gifts_unlimited{ ushort(1543) };
inline constexpr phrase<> lng_edit_privacy_gifts_limited{ ushort(1544) };
inline constexpr phrase<> lng_edit_privacy_gifts_unique{ ushort(1545) };
inline constexpr phrase<> lng_edit_privacy_gifts_types_about{ ushort(1546) };
inline constexpr phrase<> lng_edit_privacy_gifts_show_icon{ ushort(1547) };
inline constexpr phrase<lngtag_emoji> lng_edit_privacy_gifts_show_icon_about{ ushort(1548) };
inline constexpr phrase<> lng_edit_privacy_gifts_restricted{ ushort(1549) };
inline constexpr phrase<> lng_edit_privacy_calls_title{ ushort(1550) };
inline constexpr phrase<> lng_edit_privacy_calls_header{ ushort(1551) };
inline constexpr phrase<> lng_edit_privacy_calls_always_empty{ ushort(1552) };
inline constexpr phrase<> lng_edit_privacy_calls_never_empty{ ushort(1553) };
inline constexpr phrase<> lng_edit_privacy_calls_exceptions{ ushort(1554) };
inline constexpr phrase<> lng_edit_privacy_calls_always_title{ ushort(1555) };
inline constexpr phrase<> lng_edit_privacy_calls_never_title{ ushort(1556) };
inline constexpr phrase<> lng_edit_privacy_calls_p2p_title{ ushort(1557) };
inline constexpr phrase<> lng_edit_privacy_calls_p2p_header{ ushort(1558) };
inline constexpr phrase<> lng_edit_privacy_calls_p2p_always_empty{ ushort(1559) };
inline constexpr phrase<> lng_edit_privacy_calls_p2p_never_empty{ ushort(1560) };
inline constexpr phrase<> lng_edit_privacy_calls_p2p_exceptions{ ushort(1561) };
inline constexpr phrase<> lng_edit_privacy_calls_p2p_always_title{ ushort(1562) };
inline constexpr phrase<> lng_edit_privacy_calls_p2p_never_title{ ushort(1563) };
inline constexpr phrase<> lng_edit_privacy_calls_p2p_everyone{ ushort(1564) };
inline constexpr phrase<> lng_edit_privacy_calls_p2p_contacts{ ushort(1565) };
inline constexpr phrase<> lng_edit_privacy_calls_p2p_nobody{ ushort(1566) };
inline constexpr phrase<> lng_edit_privacy_forwards_title{ ushort(1567) };
inline constexpr phrase<> lng_edit_privacy_forwards_header{ ushort(1568) };
inline constexpr phrase<> lng_edit_privacy_forwards_warning{ ushort(1569) };
inline constexpr phrase<> lng_edit_privacy_forwards_always_empty{ ushort(1570) };
inline constexpr phrase<> lng_edit_privacy_forwards_never_empty{ ushort(1571) };
inline constexpr phrase<> lng_edit_privacy_forwards_exceptions{ ushort(1572) };
inline constexpr phrase<> lng_edit_privacy_forwards_exceptions_everyone{ ushort(1573) };
inline constexpr phrase<> lng_edit_privacy_forwards_exceptions_nobody{ ushort(1574) };
inline constexpr phrase<> lng_edit_privacy_forwards_always_title{ ushort(1575) };
inline constexpr phrase<> lng_edit_privacy_forwards_never_title{ ushort(1576) };
inline constexpr phrase<> lng_edit_privacy_forwards_sample_message{ ushort(1577) };
inline constexpr phrase<> lng_edit_privacy_forwards_sample_everyone{ ushort(1578) };
inline constexpr phrase<> lng_edit_privacy_forwards_sample_contacts{ ushort(1579) };
inline constexpr phrase<> lng_edit_privacy_forwards_sample_nobody{ ushort(1580) };
inline constexpr phrase<> lng_edit_privacy_profile_photo_title{ ushort(1581) };
inline constexpr phrase<> lng_edit_privacy_profile_photo_header{ ushort(1582) };
inline constexpr phrase<> lng_edit_privacy_profile_photo_always_empty{ ushort(1583) };
inline constexpr phrase<> lng_edit_privacy_profile_photo_never_empty{ ushort(1584) };
inline constexpr phrase<> lng_edit_privacy_profile_photo_always_title{ ushort(1585) };
inline constexpr phrase<> lng_edit_privacy_profile_photo_never_title{ ushort(1586) };
inline constexpr phrase<> lng_edit_privacy_profile_photo_public_set{ ushort(1587) };
inline constexpr phrase<> lng_edit_privacy_profile_photo_public_update{ ushort(1588) };
inline constexpr phrase<> lng_edit_privacy_profile_photo_public_remove{ ushort(1589) };
inline constexpr phrase<> lng_edit_privacy_profile_photo_public_about{ ushort(1590) };
inline constexpr phrase<> lng_edit_privacy_voices_title{ ushort(1591) };
inline constexpr phrase<> lng_edit_privacy_voices_header{ ushort(1592) };
inline constexpr phrase<> lng_edit_privacy_voices_always_empty{ ushort(1593) };
inline constexpr phrase<> lng_edit_privacy_voices_never_empty{ ushort(1594) };
inline constexpr phrase<> lng_edit_privacy_voices_exceptions{ ushort(1595) };
inline constexpr phrase<> lng_edit_privacy_voices_always_title{ ushort(1596) };
inline constexpr phrase<> lng_edit_privacy_voices_never_title{ ushort(1597) };
inline constexpr phrase<> lng_messages_privacy_title{ ushort(1598) };
inline constexpr phrase<> lng_messages_privacy_subtitle{ ushort(1599) };
inline constexpr phrase<> lng_messages_privacy_everyone{ ushort(1600) };
inline constexpr phrase<> lng_messages_privacy_restricted{ ushort(1601) };
inline constexpr phrase<> lng_messages_privacy_about{ ushort(1602) };
inline constexpr phrase<> lng_messages_privacy_premium_button{ ushort(1603) };
inline constexpr phrase<> lng_messages_privacy_premium_about{ ushort(1604) };
inline constexpr phrase<lngtag_link> lng_messages_privacy_premium{ ushort(1605) };
inline constexpr phrase<> lng_messages_privacy_premium_link{ ushort(1606) };
inline constexpr phrase<> lng_messages_privacy_charge{ ushort(1607) };
inline constexpr phrase<> lng_messages_privacy_charge_about{ ushort(1608) };
inline constexpr phrase<> lng_messages_privacy_price{ ushort(1609) };
inline constexpr phrase<lngtag_percent, lngtag_amount> lng_messages_privacy_price_about{ ushort(1610) };
inline constexpr phrase<> lng_messages_privacy_exceptions{ ushort(1611) };
inline constexpr phrase<> lng_messages_privacy_remove_fee{ ushort(1612) };
inline constexpr phrase<> lng_messages_privacy_remove_about{ ushort(1613) };
inline constexpr phrase<> lng_self_destruct_title{ ushort(1614) };
inline constexpr phrase<> lng_self_destruct_description{ ushort(1615) };
inline constexpr phrase<> lng_self_destruct_sessions_title{ ushort(1616) };
inline constexpr phrase<> lng_self_destruct_sessions_description{ ushort(1617) };
inline constexpr phrase<> lng_change_phone_new_submit{ ushort(1618) };
inline constexpr phrase<> lng_change_phone_code_title{ ushort(1619) };
inline constexpr phrase<> lng_change_phone_error{ ushort(1620) };
inline constexpr phrase<> lng_mute_menu_mute{ ushort(1621) };
inline constexpr phrase<> lng_mute_menu_unmute{ ushort(1622) };
inline constexpr phrase<lngtag_duration> lng_mute_menu_duration_any{ ushort(1623) };
inline constexpr phrase<> lng_mute_menu_duration{ ushort(1624) };
inline constexpr phrase<> lng_mute_menu_duration_forever{ ushort(1625) };
inline constexpr phrase<> lng_mute_menu_duration_unmute{ ushort(1626) };
inline constexpr phrase<> lng_mute_menu_sound_on{ ushort(1627) };
inline constexpr phrase<> lng_mute_menu_sound_off{ ushort(1628) };
inline constexpr phrase<> lng_mute_menu_sound_select{ ushort(1629) };
inline constexpr phrase<> lng_mute_box_title{ ushort(1630) };
inline constexpr phrase<> lng_preview_loading{ ushort(1631) };
inline constexpr phrase<> lng_preview_cant{ ushort(1632) };
inline constexpr phrase<> lng_profile_settings_section{ ushort(1633) };
inline constexpr phrase<> lng_profile_bot_settings{ ushort(1634) };
inline constexpr phrase<> lng_profile_bot_help{ ushort(1635) };
inline constexpr phrase<> lng_profile_bot_privacy{ ushort(1636) };
inline constexpr phrase<> lng_profile_bot_privacy_url{ ushort(1637) };
inline constexpr phrase<lngtag_count> lng_profile_common_groups{ ushort(1638) };
inline constexpr phrase<lngtag_count> lng_profile_similar_channels{ ushort(1644) };
inline constexpr phrase<lngtag_count> lng_profile_similar_bots{ ushort(1650) };
inline constexpr phrase<lngtag_count> lng_profile_saved_messages{ ushort(1656) };
inline constexpr phrase<lngtag_count> lng_profile_peer_gifts{ ushort(1662) };
inline constexpr phrase<> lng_profile_participants_section{ ushort(1668) };
inline constexpr phrase<> lng_profile_subscribers_section{ ushort(1669) };
inline constexpr phrase<> lng_profile_add_contact{ ushort(1670) };
inline constexpr phrase<> lng_profile_clear_and_exit{ ushort(1671) };
inline constexpr phrase<> lng_profile_leave_channel{ ushort(1672) };
inline constexpr phrase<> lng_profile_delete_channel{ ushort(1673) };
inline constexpr phrase<> lng_profile_leave_group{ ushort(1674) };
inline constexpr phrase<> lng_profile_delete_group{ ushort(1675) };
inline constexpr phrase<> lng_profile_report{ ushort(1676) };
inline constexpr phrase<> lng_profile_block_bot{ ushort(1677) };
inline constexpr phrase<> lng_profile_restart_bot{ ushort(1678) };
inline constexpr phrase<> lng_profile_invite_to_group{ ushort(1679) };
inline constexpr phrase<> lng_profile_add_bot_as_admin{ ushort(1680) };
inline constexpr phrase<> lng_profile_invite_to_channel{ ushort(1681) };
inline constexpr phrase<> lng_profile_invite_to_group_about{ ushort(1682) };
inline constexpr phrase<> lng_profile_invite_to_channel_about{ ushort(1683) };
inline constexpr phrase<> lng_profile_add_bot_as_admin_about{ ushort(1684) };
inline constexpr phrase<> lng_profile_add_participant{ ushort(1685) };
inline constexpr phrase<> lng_profile_add_via_link{ ushort(1686) };
inline constexpr phrase<> lng_profile_hide_participants{ ushort(1687) };
inline constexpr phrase<> lng_profile_hide_participants_about{ ushort(1688) };
inline constexpr phrase<> lng_profile_view_channel{ ushort(1689) };
inline constexpr phrase<> lng_profile_view_discussion{ ushort(1690) };
inline constexpr phrase<> lng_profile_direct_messages{ ushort(1691) };
inline constexpr phrase<> lng_profile_join_channel{ ushort(1692) };
inline constexpr phrase<> lng_profile_join_group{ ushort(1693) };
inline constexpr phrase<> lng_profile_apply_to_join_group{ ushort(1694) };
inline constexpr phrase<> lng_profile_kick{ ushort(1695) };
inline constexpr phrase<> lng_profile_delete_removed{ ushort(1696) };
inline constexpr phrase<lngtag_user> lng_profile_sure_kick{ ushort(1697) };
inline constexpr phrase<lngtag_user> lng_profile_sure_kick_channel{ ushort(1698) };
inline constexpr phrase<lngtag_user> lng_profile_sure_remove_admin{ ushort(1699) };
inline constexpr phrase<> lng_profile_loading{ ushort(1700) };
inline constexpr phrase<lngtag_count> lng_profile_saved_stories{ ushort(1701) };
inline constexpr phrase<lngtag_count> lng_profile_posts{ ushort(1707) };
inline constexpr phrase<lngtag_count> lng_profile_photos{ ushort(1713) };
inline constexpr phrase<lngtag_count> lng_profile_gifs{ ushort(1719) };
inline constexpr phrase<lngtag_count> lng_profile_videos{ ushort(1725) };
inline constexpr phrase<lngtag_count> lng_profile_songs{ ushort(1731) };
inline constexpr phrase<lngtag_count> lng_profile_files{ ushort(1737) };
inline constexpr phrase<lngtag_count> lng_profile_audios{ ushort(1743) };
inline constexpr phrase<lngtag_count> lng_profile_shared_links{ ushort(1749) };
inline constexpr phrase<> lng_profile_copy_phone{ ushort(1755) };
inline constexpr phrase<> lng_profile_copy_fullname{ ushort(1756) };
inline constexpr phrase<> lng_profile_photo_by_you{ ushort(1757) };
inline constexpr phrase<> lng_profile_public_photo{ ushort(1758) };
inline constexpr phrase<lngtag_count> lng_profile_administrators{ ushort(1759) };
inline constexpr phrase<> lng_profile_manage{ ushort(1765) };
inline constexpr phrase<> lng_invite_upgrade_title{ ushort(1766) };
inline constexpr phrase<lngtag_count, lngtag_users> lng_invite_upgrade_group_invite{ ushort(1767) };
inline constexpr phrase<lngtag_count, lngtag_users> lng_invite_upgrade_group_write{ ushort(1773) };
inline constexpr phrase<lngtag_count, lngtag_users> lng_invite_upgrade_channel_invite{ ushort(1779) };
inline constexpr phrase<lngtag_count, lngtag_users> lng_invite_upgrade_channel_write{ ushort(1785) };
inline constexpr phrase<lngtag_users, lngtag_last> lng_invite_upgrade_users_few{ ushort(1791) };
inline constexpr phrase<lngtag_count, lngtag_users> lng_invite_upgrade_users_many{ ushort(1792) };
inline constexpr phrase<> lng_invite_upgrade_or{ ushort(1798) };
inline constexpr phrase<> lng_invite_upgrade_via_title{ ushort(1799) };
inline constexpr phrase<> lng_invite_upgrade_via_group_about{ ushort(1800) };
inline constexpr phrase<> lng_invite_upgrade_via_channel_about{ ushort(1801) };
inline constexpr phrase<> lng_invite_status_disabled{ ushort(1802) };
inline constexpr phrase<lngtag_user> lng_via_link_group_one{ ushort(1803) };
inline constexpr phrase<lngtag_count> lng_via_link_group_many{ ushort(1804) };
inline constexpr phrase<lngtag_user> lng_via_link_channel_one{ ushort(1810) };
inline constexpr phrase<lngtag_count> lng_via_link_channel_many{ ushort(1811) };
inline constexpr phrase<> lng_via_link_send{ ushort(1817) };
inline constexpr phrase<> lng_via_link_cant{ ushort(1818) };
inline constexpr phrase<lngtag_user> lng_via_link_cant_one{ ushort(1819) };
inline constexpr phrase<lngtag_count> lng_via_link_cant_many{ ushort(1820) };
inline constexpr phrase<lngtag_user> lng_via_link_shared_one{ ushort(1826) };
inline constexpr phrase<lngtag_count> lng_via_link_shared_many{ ushort(1827) };
inline constexpr phrase<> lng_info_personal_channel_label{ ushort(1833) };
inline constexpr phrase<> lng_info_mobile_label{ ushort(1834) };
inline constexpr phrase<lngtag_link> lng_info_mobile_context_menu_fragment_about{ ushort(1835) };
inline constexpr phrase<> lng_info_mobile_context_menu_fragment_about_link{ ushort(1836) };
inline constexpr phrase<> lng_info_mobile_hidden{ ushort(1837) };
inline constexpr phrase<> lng_info_username_label{ ushort(1838) };
inline constexpr phrase<> lng_info_usernames_label{ ushort(1839) };
inline constexpr phrase<> lng_info_birthday_label{ ushort(1840) };
inline constexpr phrase<lngtag_count, lngtag_date> lng_info_birthday_years{ ushort(1841) };
inline constexpr phrase<lngtag_count, lngtag_date> lng_info_birthday_today_years{ ushort(1847) };
inline constexpr phrase<> lng_info_birthday_today_label{ ushort(1853) };
inline constexpr phrase<lngtag_emoji, lngtag_date> lng_info_birthday_today{ ushort(1854) };
inline constexpr phrase<> lng_info_bio_label{ ushort(1855) };
inline constexpr phrase<> lng_info_link_label{ ushort(1856) };
inline constexpr phrase<> lng_info_location_label{ ushort(1857) };
inline constexpr phrase<> lng_info_about_label{ ushort(1858) };
inline constexpr phrase<> lng_info_work_open{ ushort(1859) };
inline constexpr phrase<> lng_info_work_closed{ ushort(1860) };
inline constexpr phrase<> lng_info_hours_label{ ushort(1861) };
inline constexpr phrase<> lng_info_hours_closed{ ushort(1862) };
inline constexpr phrase<lngtag_count> lng_info_hours_opens_in_minutes{ ushort(1863) };
inline constexpr phrase<lngtag_count> lng_info_hours_opens_in_hours{ ushort(1869) };
inline constexpr phrase<lngtag_count> lng_info_hours_opens_in_days{ ushort(1875) };
inline constexpr phrase<> lng_info_hours_open_full{ ushort(1881) };
inline constexpr phrase<lngtag_time> lng_info_hours_next_day{ ushort(1882) };
inline constexpr phrase<> lng_info_hours_local_time{ ushort(1883) };
inline constexpr phrase<> lng_info_hours_my_time{ ushort(1884) };
inline constexpr phrase<> lng_info_user_title{ ushort(1885) };
inline constexpr phrase<> lng_info_bot_title{ ushort(1886) };
inline constexpr phrase<> lng_info_group_title{ ushort(1887) };
inline constexpr phrase<> lng_info_channel_title{ ushort(1888) };
inline constexpr phrase<> lng_info_topic_title{ ushort(1889) };
inline constexpr phrase<> lng_profile_enable_notifications{ ushort(1890) };
inline constexpr phrase<> lng_profile_send_message{ ushort(1891) };
inline constexpr phrase<> lng_profile_open_app{ ushort(1892) };
inline constexpr phrase<> lng_profile_open_app_short{ ushort(1893) };
inline constexpr phrase<lngtag_terms> lng_profile_open_app_about{ ushort(1894) };
inline constexpr phrase<> lng_profile_open_app_terms{ ushort(1895) };
inline constexpr phrase<> lng_profile_bot_permissions_title{ ushort(1896) };
inline constexpr phrase<> lng_profile_bot_emoji_status_access{ ushort(1897) };
inline constexpr phrase<> lng_info_add_as_contact{ ushort(1898) };
inline constexpr phrase<> lng_profile_shared_media{ ushort(1899) };
inline constexpr phrase<> lng_profile_suggest_photo{ ushort(1900) };
inline constexpr phrase<> lng_profile_suggest_photo_from_clipboard{ ushort(1901) };
inline constexpr phrase<> lng_profile_set_photo_for{ ushort(1902) };
inline constexpr phrase<> lng_profile_set_photo_for_from_clipboard{ ushort(1903) };
inline constexpr phrase<> lng_profile_photo_reset{ ushort(1904) };
inline constexpr phrase<> lng_profile_photo_from_clipboard{ ushort(1905) };
inline constexpr phrase<lngtag_user> lng_profile_suggest_sure{ ushort(1906) };
inline constexpr phrase<> lng_profile_suggest_button{ ushort(1907) };
inline constexpr phrase<lngtag_user> lng_profile_set_personal_sure{ ushort(1908) };
inline constexpr phrase<lngtag_user> lng_profile_accept_photo_sure{ ushort(1909) };
inline constexpr phrase<> lng_profile_set_photo_button{ ushort(1910) };
inline constexpr phrase<lngtag_user> lng_profile_accept_video_sure{ ushort(1911) };
inline constexpr phrase<> lng_profile_set_video_button{ ushort(1912) };
inline constexpr phrase<> lng_profile_changed_photo_title{ ushort(1913) };
inline constexpr phrase<lngtag_link> lng_profile_changed_photo_about{ ushort(1914) };
inline constexpr phrase<> lng_profile_changed_photo_link{ ushort(1915) };
inline constexpr phrase<> lng_media_type_photos{ ushort(1916) };
inline constexpr phrase<> lng_media_type_gifs{ ushort(1917) };
inline constexpr phrase<> lng_media_type_videos{ ushort(1918) };
inline constexpr phrase<> lng_media_type_songs{ ushort(1919) };
inline constexpr phrase<> lng_media_type_files{ ushort(1920) };
inline constexpr phrase<> lng_media_type_audios{ ushort(1921) };
inline constexpr phrase<> lng_media_type_links{ ushort(1922) };
inline constexpr phrase<> lng_media_type_rounds{ ushort(1923) };
inline constexpr phrase<> lng_media_saved_music_your{ ushort(1924) };
inline constexpr phrase<> lng_media_saved_music_title{ ushort(1925) };
inline constexpr phrase<> lng_profile_common_groups_section{ ushort(1926) };
inline constexpr phrase<> lng_info_edit_contact{ ushort(1927) };
inline constexpr phrase<> lng_info_delete_contact{ ushort(1928) };
inline constexpr phrase<> lng_info_share_contact{ ushort(1929) };
inline constexpr phrase<> lng_profile_clear_history{ ushort(1930) };
inline constexpr phrase<> lng_profile_delete_conversation{ ushort(1931) };
inline constexpr phrase<> lng_profile_block_user{ ushort(1932) };
inline constexpr phrase<> lng_profile_unblock_user{ ushort(1933) };
inline constexpr phrase<> lng_profile_export_chat{ ushort(1934) };
inline constexpr phrase<> lng_profile_gift_premium{ ushort(1935) };
inline constexpr phrase<lngtag_count> lng_media_selected_photo{ ushort(1936) };
inline constexpr phrase<lngtag_count> lng_media_selected_gif{ ushort(1942) };
inline constexpr phrase<lngtag_count> lng_media_selected_video{ ushort(1948) };
inline constexpr phrase<lngtag_count> lng_media_selected_song{ ushort(1954) };
inline constexpr phrase<lngtag_count> lng_media_selected_file{ ushort(1960) };
inline constexpr phrase<lngtag_count> lng_media_selected_audio{ ushort(1966) };
inline constexpr phrase<lngtag_count> lng_media_selected_link{ ushort(1972) };
inline constexpr phrase<> lng_media_photo_empty{ ushort(1978) };
inline constexpr phrase<> lng_media_gif_empty{ ushort(1979) };
inline constexpr phrase<> lng_media_video_empty{ ushort(1980) };
inline constexpr phrase<> lng_media_song_empty{ ushort(1981) };
inline constexpr phrase<> lng_media_file_empty{ ushort(1982) };
inline constexpr phrase<> lng_media_audio_empty{ ushort(1983) };
inline constexpr phrase<> lng_media_link_empty{ ushort(1984) };
inline constexpr phrase<> lng_media_song_empty_search{ ushort(1985) };
inline constexpr phrase<> lng_media_file_empty_search{ ushort(1986) };
inline constexpr phrase<> lng_media_link_empty_search{ ushort(1987) };
inline constexpr phrase<> lng_manage_group_title{ ushort(1988) };
inline constexpr phrase<> lng_manage_channel_title{ ushort(1989) };
inline constexpr phrase<> lng_manage_bot_title{ ushort(1990) };
inline constexpr phrase<> lng_manage_peer_recent_actions{ ushort(1991) };
inline constexpr phrase<> lng_manage_peer_star_ref{ ushort(1992) };
inline constexpr phrase<> lng_manage_peer_members{ ushort(1993) };
inline constexpr phrase<> lng_manage_peer_subscribers{ ushort(1994) };
inline constexpr phrase<> lng_manage_peer_administrators{ ushort(1995) };
inline constexpr phrase<> lng_manage_peer_exceptions{ ushort(1996) };
inline constexpr phrase<> lng_manage_peer_removed_users{ ushort(1997) };
inline constexpr phrase<> lng_manage_peer_permissions{ ushort(1998) };
inline constexpr phrase<> lng_manage_peer_invite_links{ ushort(1999) };
inline constexpr phrase<> lng_manage_peer_reactions{ ushort(2000) };
inline constexpr phrase<> lng_manage_peer_reactions_on{ ushort(2001) };
inline constexpr phrase<> lng_manage_peer_reactions_off{ ushort(2002) };
inline constexpr phrase<> lng_manage_peer_requests{ ushort(2003) };
inline constexpr phrase<> lng_manage_peer_requests_channel{ ushort(2004) };
inline constexpr phrase<> lng_manage_peer_reactions_enable{ ushort(2005) };
inline constexpr phrase<> lng_manage_peer_reactions_about_channel{ ushort(2006) };
inline constexpr phrase<> lng_manage_peer_reactions_all{ ushort(2007) };
inline constexpr phrase<> lng_manage_peer_reactions_all_about{ ushort(2008) };
inline constexpr phrase<> lng_manage_peer_reactions_some{ ushort(2009) };
inline constexpr phrase<> lng_manage_peer_reactions_some_about{ ushort(2010) };
inline constexpr phrase<> lng_manage_peer_reactions_none{ ushort(2011) };
inline constexpr phrase<> lng_manage_peer_reactions_none_about{ ushort(2012) };
inline constexpr phrase<> lng_manage_peer_reactions_some_title{ ushort(2013) };
inline constexpr phrase<> lng_manage_peer_reactions_available{ ushort(2014) };
inline constexpr phrase<> lng_manage_peer_reactions_available_ph{ ushort(2015) };
inline constexpr phrase<lngtag_link> lng_manage_peer_reactions_own{ ushort(2016) };
inline constexpr phrase<> lng_manage_peer_reactions_own_link{ ushort(2017) };
inline constexpr phrase<lngtag_count, lngtag_same_count> lng_manage_peer_reactions_level{ ushort(2018) };
inline constexpr phrase<lngtag_link> lng_manage_peer_reactions_boost{ ushort(2024) };
inline constexpr phrase<> lng_manage_peer_reactions_boost_link{ ushort(2025) };
inline constexpr phrase<> lng_manage_peer_reactions_limit{ ushort(2026) };
inline constexpr phrase<> lng_manage_peer_reactions_max_title{ ushort(2027) };
inline constexpr phrase<lngtag_count> lng_manage_peer_reactions_max_slider{ ushort(2028) };
inline constexpr phrase<> lng_manage_peer_reactions_max_about{ ushort(2034) };
inline constexpr phrase<> lng_manage_peer_reactions_paid{ ushort(2035) };
inline constexpr phrase<lngtag_link> lng_manage_peer_reactions_paid_about{ ushort(2036) };
inline constexpr phrase<> lng_manage_peer_reactions_paid_link{ ushort(2037) };
inline constexpr phrase<> lng_manage_peer_antispam{ ushort(2038) };
inline constexpr phrase<> lng_manage_peer_antispam_about{ ushort(2039) };
inline constexpr phrase<lngtag_count> lng_manage_peer_antispam_not_enough{ ushort(2040) };
inline constexpr phrase<> lng_manage_peer_group_type{ ushort(2046) };
inline constexpr phrase<> lng_manage_peer_channel_type{ ushort(2047) };
inline constexpr phrase<> lng_manage_peer_link_type{ ushort(2048) };
inline constexpr phrase<> lng_manage_peer_link_permanent{ ushort(2049) };
inline constexpr phrase<> lng_manage_peer_link_invite{ ushort(2050) };
inline constexpr phrase<> lng_manage_peer_link_expired{ ushort(2051) };
inline constexpr phrase<> lng_manage_private_group_title{ ushort(2052) };
inline constexpr phrase<> lng_manage_private_group_noforwards_title{ ushort(2053) };
inline constexpr phrase<> lng_manage_public_group_title{ ushort(2054) };
inline constexpr phrase<> lng_manage_private_peer_title{ ushort(2055) };
inline constexpr phrase<> lng_manage_private_peer_noforwards_title{ ushort(2056) };
inline constexpr phrase<> lng_manage_public_peer_title{ ushort(2057) };
inline constexpr phrase<> lng_manage_peer_send_title{ ushort(2058) };
inline constexpr phrase<> lng_manage_peer_send_only_members{ ushort(2059) };
inline constexpr phrase<> lng_manage_peer_send_only_members_about{ ushort(2060) };
inline constexpr phrase<> lng_manage_peer_send_approve_members{ ushort(2061) };
inline constexpr phrase<> lng_manage_peer_send_approve_members_about{ ushort(2062) };
inline constexpr phrase<> lng_manage_peer_no_forwards_title{ ushort(2063) };
inline constexpr phrase<> lng_manage_peer_no_forwards{ ushort(2064) };
inline constexpr phrase<> lng_manage_peer_no_forwards_about{ ushort(2065) };
inline constexpr phrase<> lng_manage_peer_no_forwards_about_channel{ ushort(2066) };
inline constexpr phrase<> lng_manage_peer_bot_public_link{ ushort(2067) };
inline constexpr phrase<> lng_manage_peer_bot_public_links{ ushort(2068) };
inline constexpr phrase<> lng_manage_peer_bot_balance{ ushort(2069) };
inline constexpr phrase<> lng_manage_peer_bot_balance_currency{ ushort(2070) };
inline constexpr phrase<> lng_manage_peer_bot_balance_credits{ ushort(2071) };
inline constexpr phrase<> lng_manage_peer_bot_star_ref{ ushort(2072) };
inline constexpr phrase<> lng_manage_peer_bot_star_ref_off{ ushort(2073) };
inline constexpr phrase<lngtag_bot, lngtag_amount> lng_manage_peer_bot_star_ref_about{ ushort(2074) };
inline constexpr phrase<> lng_manage_peer_bot_verify{ ushort(2075) };
inline constexpr phrase<> lng_manage_peer_bot_edit_intro{ ushort(2076) };
inline constexpr phrase<> lng_manage_peer_bot_edit_commands{ ushort(2077) };
inline constexpr phrase<> lng_manage_peer_bot_edit_settings{ ushort(2078) };
inline constexpr phrase<lngtag_bot> lng_manage_peer_bot_about{ ushort(2079) };
inline constexpr phrase<> lng_bot_verify_title{ ushort(2080) };
inline constexpr phrase<> lng_bot_verify_bot_title{ ushort(2081) };
inline constexpr phrase<lngtag_name> lng_bot_verify_bot_text{ ushort(2082) };
inline constexpr phrase<> lng_bot_verify_bot_about{ ushort(2083) };
inline constexpr phrase<> lng_bot_verify_bot_submit{ ushort(2084) };
inline constexpr phrase<lngtag_name> lng_bot_verify_bot_sent{ ushort(2085) };
inline constexpr phrase<> lng_bot_verify_bot_remove{ ushort(2086) };
inline constexpr phrase<> lng_bot_verify_user_title{ ushort(2087) };
inline constexpr phrase<lngtag_name> lng_bot_verify_user_text{ ushort(2088) };
inline constexpr phrase<> lng_bot_verify_user_about{ ushort(2089) };
inline constexpr phrase<> lng_bot_verify_user_submit{ ushort(2090) };
inline constexpr phrase<lngtag_name> lng_bot_verify_user_sent{ ushort(2091) };
inline constexpr phrase<> lng_bot_verify_user_remove{ ushort(2092) };
inline constexpr phrase<> lng_bot_verify_channel_title{ ushort(2093) };
inline constexpr phrase<lngtag_name> lng_bot_verify_channel_text{ ushort(2094) };
inline constexpr phrase<> lng_bot_verify_channel_about{ ushort(2095) };
inline constexpr phrase<> lng_bot_verify_channel_submit{ ushort(2096) };
inline constexpr phrase<lngtag_name> lng_bot_verify_channel_sent{ ushort(2097) };
inline constexpr phrase<> lng_bot_verify_channel_remove{ ushort(2098) };
inline constexpr phrase<> lng_bot_verify_group_title{ ushort(2099) };
inline constexpr phrase<lngtag_name> lng_bot_verify_group_text{ ushort(2100) };
inline constexpr phrase<> lng_bot_verify_group_about{ ushort(2101) };
inline constexpr phrase<> lng_bot_verify_group_submit{ ushort(2102) };
inline constexpr phrase<lngtag_name> lng_bot_verify_group_sent{ ushort(2103) };
inline constexpr phrase<> lng_bot_verify_group_remove{ ushort(2104) };
inline constexpr phrase<> lng_bot_verify_description_label{ ushort(2105) };
inline constexpr phrase<> lng_bot_verify_remove_title{ ushort(2106) };
inline constexpr phrase<> lng_bot_verify_remove_submit{ ushort(2107) };
inline constexpr phrase<> lng_bot_verify_remove_done{ ushort(2108) };
inline constexpr phrase<> lng_star_ref_title{ ushort(2109) };
inline constexpr phrase<> lng_star_ref_about{ ushort(2110) };
inline constexpr phrase<> lng_star_ref_share_title{ ushort(2111) };
inline constexpr phrase<> lng_star_ref_share_about{ ushort(2112) };
inline constexpr phrase<> lng_star_ref_launch_title{ ushort(2113) };
inline constexpr phrase<> lng_star_ref_launch_about{ ushort(2114) };
inline constexpr phrase<> lng_star_ref_let_title{ ushort(2115) };
inline constexpr phrase<> lng_star_ref_let_about{ ushort(2116) };
inline constexpr phrase<> lng_star_ref_commission_title{ ushort(2117) };
inline constexpr phrase<> lng_star_ref_commission_about{ ushort(2118) };
inline constexpr phrase<> lng_star_ref_duration_title{ ushort(2119) };
inline constexpr phrase<> lng_star_ref_duration_about{ ushort(2120) };
inline constexpr phrase<> lng_star_ref_existing_title{ ushort(2121) };
inline constexpr phrase<> lng_star_ref_existing_about{ ushort(2122) };
inline constexpr phrase<lngtag_bot> lng_star_ref_add_bot{ ushort(2123) };
inline constexpr phrase<> lng_star_ref_end{ ushort(2124) };
inline constexpr phrase<> lng_star_ref_start{ ushort(2125) };
inline constexpr phrase<lngtag_time> lng_star_ref_start_disabled{ ushort(2126) };
inline constexpr phrase<lngtag_terms> lng_star_ref_start_info{ ushort(2127) };
inline constexpr phrase<> lng_star_ref_update{ ushort(2128) };
inline constexpr phrase<lngtag_terms> lng_star_ref_update_info{ ushort(2129) };
inline constexpr phrase<> lng_star_ref_button_link{ ushort(2130) };
inline constexpr phrase<> lng_star_ref_tos_url{ ushort(2131) };
inline constexpr phrase<> lng_star_ref_warning_title{ ushort(2132) };
inline constexpr phrase<> lng_star_ref_warning_text{ ushort(2133) };
inline constexpr phrase<> lng_star_ref_warning_change{ ushort(2134) };
inline constexpr phrase<> lng_star_ref_warning_start{ ushort(2135) };
inline constexpr phrase<> lng_star_ref_warning_update{ ushort(2136) };
inline constexpr phrase<> lng_star_ref_warning_if_end{ ushort(2137) };
inline constexpr phrase<> lng_star_ref_warning_if_end1{ ushort(2138) };
inline constexpr phrase<> lng_star_ref_warning_if_end2{ ushort(2139) };
inline constexpr phrase<> lng_star_ref_warning_if_end3{ ushort(2140) };
inline constexpr phrase<> lng_star_ref_warning_end{ ushort(2141) };
inline constexpr phrase<> lng_star_ref_created_title{ ushort(2142) };
inline constexpr phrase<> lng_star_ref_created_text{ ushort(2143) };
inline constexpr phrase<> lng_star_ref_updated_title{ ushort(2144) };
inline constexpr phrase<> lng_star_ref_updated_text{ ushort(2145) };
inline constexpr phrase<> lng_star_ref_ended_title{ ushort(2146) };
inline constexpr phrase<> lng_star_ref_ended_text{ ushort(2147) };
inline constexpr phrase<> lng_star_ref_list_title{ ushort(2148) };
inline constexpr phrase<> lng_star_ref_list_about_channel{ ushort(2149) };
inline constexpr phrase<> lng_star_ref_list_text{ ushort(2150) };
inline constexpr phrase<> lng_star_ref_list_my{ ushort(2151) };
inline constexpr phrase<> lng_star_ref_list_my_open{ ushort(2152) };
inline constexpr phrase<> lng_star_ref_list_my_copy{ ushort(2153) };
inline constexpr phrase<> lng_star_ref_list_my_leave{ ushort(2154) };
inline constexpr phrase<> lng_star_ref_list_subtitle{ ushort(2155) };
inline constexpr phrase<lngtag_sort> lng_star_ref_sort_text{ ushort(2156) };
inline constexpr phrase<> lng_star_ref_sort_profitability{ ushort(2157) };
inline constexpr phrase<> lng_star_ref_sort_date{ ushort(2158) };
inline constexpr phrase<> lng_star_ref_sort_revenue{ ushort(2159) };
inline constexpr phrase<> lng_star_ref_reliable_title{ ushort(2160) };
inline constexpr phrase<> lng_star_ref_reliable_about{ ushort(2161) };
inline constexpr phrase<> lng_star_ref_transparent_title{ ushort(2162) };
inline constexpr phrase<> lng_star_ref_transparent_about{ ushort(2163) };
inline constexpr phrase<> lng_star_ref_simple_title{ ushort(2164) };
inline constexpr phrase<> lng_star_ref_simple_about{ ushort(2165) };
inline constexpr phrase<> lng_star_ref_duration_forever{ ushort(2166) };
inline constexpr phrase<lngtag_app, lngtag_amount, lngtag_duration> lng_star_ref_one_about{ ushort(2167) };
inline constexpr phrase<> lng_star_ref_one_about_for_forever{ ushort(2168) };
inline constexpr phrase<lngtag_count> lng_star_ref_one_about_for_months{ ushort(2169) };
inline constexpr phrase<lngtag_count> lng_star_ref_one_about_for_years{ ushort(2175) };
inline constexpr phrase<lngtag_amount> lng_star_ref_one_daily_revenue{ ushort(2181) };
inline constexpr phrase<> lng_star_ref_one_join{ ushort(2182) };
inline constexpr phrase<lngtag_terms> lng_star_ref_one_join_text{ ushort(2183) };
inline constexpr phrase<> lng_star_ref_joined_title{ ushort(2184) };
inline constexpr phrase<> lng_star_ref_joined_text{ ushort(2185) };
inline constexpr phrase<> lng_star_ref_link_title{ ushort(2186) };
inline constexpr phrase<lngtag_amount, lngtag_app, lngtag_duration> lng_star_ref_link_about_channel{ ushort(2187) };
inline constexpr phrase<lngtag_amount, lngtag_app, lngtag_duration> lng_star_ref_link_about_user{ ushort(2188) };
inline constexpr phrase<lngtag_amount, lngtag_app, lngtag_duration> lng_star_ref_link_about_bot{ ushort(2189) };
inline constexpr phrase<> lng_star_ref_link_recipient{ ushort(2190) };
inline constexpr phrase<> lng_star_ref_link_copy{ ushort(2191) };
inline constexpr phrase<lngtag_app> lng_star_ref_link_copy_none{ ushort(2192) };
inline constexpr phrase<lngtag_count, lngtag_app> lng_star_ref_link_copy_users{ ushort(2193) };
inline constexpr phrase<> lng_star_ref_link_copied_title{ ushort(2199) };
inline constexpr phrase<lngtag_amount, lngtag_app> lng_star_ref_link_copied_text{ ushort(2200) };
inline constexpr phrase<> lng_star_ref_stopped{ ushort(2201) };
inline constexpr phrase<> lng_star_ref_revoke_title{ ushort(2202) };
inline constexpr phrase<lngtag_bot> lng_star_ref_revoke_text{ ushort(2203) };
inline constexpr phrase<> lng_star_ref_revoked_title{ ushort(2204) };
inline constexpr phrase<> lng_star_ref_revoked_text{ ushort(2205) };
inline constexpr phrase<> lng_stars_rating_title{ ushort(2206) };
inline constexpr phrase<> lng_stars_rating_future{ ushort(2207) };
inline constexpr phrase<lngtag_count> lng_stars_rating_updates{ ushort(2208) };
inline constexpr phrase<lngtag_count, lngtag_when, lngtag_link> lng_stars_rating_pending{ ushort(2214) };
inline constexpr phrase<lngtag_arrow> lng_stars_rating_pending_preview{ ushort(2220) };
inline constexpr phrase<lngtag_arrow> lng_stars_rating_pending_back{ ushort(2221) };
inline constexpr phrase<> lng_stars_rating_negative_label{ ushort(2222) };
inline constexpr phrase<lngtag_name> lng_stars_rating_negative{ ushort(2223) };
inline constexpr phrase<lngtag_count> lng_stars_rating_negative_your{ ushort(2224) };
inline constexpr phrase<lngtag_name> lng_stars_rating_about{ ushort(2230) };
inline constexpr phrase<> lng_stars_rating_about_your{ ushort(2231) };
inline constexpr phrase<> lng_stars_title_gifts_telegram{ ushort(2232) };
inline constexpr phrase<lngtag_emoji> lng_stars_about_gifts_telegram{ ushort(2233) };
inline constexpr phrase<> lng_stars_title_gifts_users{ ushort(2234) };
inline constexpr phrase<lngtag_emoji> lng_stars_about_gifts_users{ ushort(2235) };
inline constexpr phrase<> lng_stars_title_refunds{ ushort(2236) };
inline constexpr phrase<lngtag_emoji> lng_stars_about_refunds{ ushort(2237) };
inline constexpr phrase<> lng_stars_rating_added{ ushort(2238) };
inline constexpr phrase<> lng_stars_rating_deducted{ ushort(2239) };
inline constexpr phrase<> lng_stars_rating_understood{ ushort(2240) };
inline constexpr phrase<> lng_manage_discussion_group{ ushort(2241) };
inline constexpr phrase<> lng_manage_discussion_group_add{ ushort(2242) };
inline constexpr phrase<> lng_manage_linked_channel{ ushort(2243) };
inline constexpr phrase<> lng_manage_linked_channel_restore{ ushort(2244) };
inline constexpr phrase<> lng_manage_discussion_group_about{ ushort(2245) };
inline constexpr phrase<lngtag_group> lng_manage_discussion_group_about_chosen{ ushort(2246) };
inline constexpr phrase<> lng_manage_discussion_group_create{ ushort(2247) };
inline constexpr phrase<> lng_manage_discussion_group_unlink{ ushort(2248) };
inline constexpr phrase<> lng_manage_discussion_group_posted{ ushort(2249) };
inline constexpr phrase<lngtag_group, lngtag_channel> lng_manage_discussion_group_sure{ ushort(2250) };
inline constexpr phrase<> lng_manage_linked_channel_private{ ushort(2251) };
inline constexpr phrase<> lng_manage_discussion_group_private{ ushort(2252) };
inline constexpr phrase<> lng_manage_discussion_group_link{ ushort(2253) };
inline constexpr phrase<> lng_manage_linked_channel_private_status{ ushort(2254) };
inline constexpr phrase<> lng_manage_discussion_group_private_status{ ushort(2255) };
inline constexpr phrase<lngtag_channel> lng_manage_linked_channel_about{ ushort(2256) };
inline constexpr phrase<> lng_manage_linked_channel_unlink{ ushort(2257) };
inline constexpr phrase<> lng_manage_linked_channel_posted{ ushort(2258) };
inline constexpr phrase<> lng_manage_discussion_group_warning{ ushort(2259) };
inline constexpr phrase<> lng_manage_monoforum{ ushort(2260) };
inline constexpr phrase<> lng_manage_monoforum_off{ ushort(2261) };
inline constexpr phrase<> lng_manage_monoforum_free{ ushort(2262) };
inline constexpr phrase<> lng_manage_monoforum_allow{ ushort(2263) };
inline constexpr phrase<> lng_manage_monoforum_price{ ushort(2264) };
inline constexpr phrase<> lng_manage_monoforum_about{ ushort(2265) };
inline constexpr phrase<lngtag_percent, lngtag_amount> lng_manage_monoforum_price_about{ ushort(2266) };
inline constexpr phrase<> lng_manage_monoforum_link_subtitle{ ushort(2267) };
inline constexpr phrase<> lng_manage_history_visibility_title{ ushort(2268) };
inline constexpr phrase<> lng_manage_history_visibility_shown{ ushort(2269) };
inline constexpr phrase<> lng_manage_history_visibility_shown_about{ ushort(2270) };
inline constexpr phrase<> lng_manage_history_visibility_hidden{ ushort(2271) };
inline constexpr phrase<> lng_manage_history_visibility_hidden_about{ ushort(2272) };
inline constexpr phrase<> lng_manage_history_visibility_hidden_legacy{ ushort(2273) };
inline constexpr phrase<> lng_manage_messages_ttl_title{ ushort(2274) };
inline constexpr phrase<> lng_manage_messages_ttl_disable{ ushort(2275) };
inline constexpr phrase<> lng_manage_messages_ttl_after1{ ushort(2276) };
inline constexpr phrase<> lng_manage_messages_ttl_after2{ ushort(2277) };
inline constexpr phrase<> lng_manage_messages_ttl_after3{ ushort(2278) };
inline constexpr phrase<> lng_manage_messages_ttl_after4{ ushort(2279) };
inline constexpr phrase<> lng_manage_messages_ttl_after_custom{ ushort(2280) };
inline constexpr phrase<> lng_manage_messages_ttl_menu{ ushort(2281) };
inline constexpr phrase<lngtag_user> lng_ttl_edit_about{ ushort(2282) };
inline constexpr phrase<> lng_ttl_edit_about_group{ ushort(2283) };
inline constexpr phrase<> lng_ttl_edit_about_channel{ ushort(2284) };
inline constexpr phrase<lngtag_link> lng_ttl_edit_about2{ ushort(2285) };
inline constexpr phrase<> lng_ttl_edit_about2_link{ ushort(2286) };
inline constexpr phrase<lngtag_duration> lng_ttl_about_tooltip{ ushort(2287) };
inline constexpr phrase<lngtag_duration> lng_ttl_about_tooltip_channel{ ushort(2288) };
inline constexpr phrase<> lng_ttl_about_tooltip_off{ ushort(2289) };
inline constexpr phrase<> lng_report_title{ ushort(2290) };
inline constexpr phrase<> lng_report_group_title{ ushort(2291) };
inline constexpr phrase<> lng_report_bot_title{ ushort(2292) };
inline constexpr phrase<> lng_report_message_title{ ushort(2293) };
inline constexpr phrase<> lng_report_profile_photo_title{ ushort(2294) };
inline constexpr phrase<> lng_report_profile_video_title{ ushort(2295) };
inline constexpr phrase<> lng_report_group_photo_title{ ushort(2296) };
inline constexpr phrase<> lng_report_group_video_title{ ushort(2297) };
inline constexpr phrase<> lng_report_channel_photo_title{ ushort(2298) };
inline constexpr phrase<> lng_report_channel_video_title{ ushort(2299) };
inline constexpr phrase<> lng_report_story{ ushort(2300) };
inline constexpr phrase<> lng_report_please_select_messages{ ushort(2301) };
inline constexpr phrase<> lng_report_select_messages{ ushort(2302) };
inline constexpr phrase<> lng_report_messages_none{ ushort(2303) };
inline constexpr phrase<lngtag_count> lng_report_messages_count{ ushort(2304) };
inline constexpr phrase<> lng_report_reaction{ ushort(2310) };
inline constexpr phrase<> lng_report_and_ban{ ushort(2311) };
inline constexpr phrase<> lng_report_reaction_title{ ushort(2312) };
inline constexpr phrase<> lng_report_reaction_about{ ushort(2313) };
inline constexpr phrase<> lng_report_and_ban_button{ ushort(2314) };
inline constexpr phrase<> lng_report_details_about{ ushort(2315) };
inline constexpr phrase<> lng_report_details{ ushort(2316) };
inline constexpr phrase<> lng_report_details_optional{ ushort(2317) };
inline constexpr phrase<> lng_report_details_non_optional{ ushort(2318) };
inline constexpr phrase<> lng_report_details_message_about{ ushort(2319) };
inline constexpr phrase<> lng_report_reason_spam{ ushort(2320) };
inline constexpr phrase<> lng_report_reason_fake{ ushort(2321) };
inline constexpr phrase<> lng_report_reason_violence{ ushort(2322) };
inline constexpr phrase<> lng_report_reason_child_abuse{ ushort(2323) };
inline constexpr phrase<> lng_report_reason_pornography{ ushort(2324) };
inline constexpr phrase<> lng_report_reason_copyright{ ushort(2325) };
inline constexpr phrase<> lng_report_reason_illegal_drugs{ ushort(2326) };
inline constexpr phrase<> lng_report_reason_personal_details{ ushort(2327) };
inline constexpr phrase<> lng_report_reason_other{ ushort(2328) };
inline constexpr phrase<> lng_report_button{ ushort(2329) };
inline constexpr phrase<> lng_report_thanks{ ushort(2330) };
inline constexpr phrase<> lng_report_sponsored_hidden{ ushort(2331) };
inline constexpr phrase<lngtag_link> lng_report_sponsored_reported{ ushort(2332) };
inline constexpr phrase<> lng_report_sponsored_reported_link{ ushort(2333) };
inline constexpr phrase<lngtag_link> lng_report_sponsored_reported_learn{ ushort(2334) };
inline constexpr phrase<> lng_channel_add_members{ ushort(2335) };
inline constexpr phrase<> lng_channel_add_users{ ushort(2336) };
inline constexpr phrase<> lng_channel_add_removed{ ushort(2337) };
inline constexpr phrase<> lng_channel_add_exception{ ushort(2338) };
inline constexpr phrase<> lng_channel_admins{ ushort(2339) };
inline constexpr phrase<> lng_channel_add_admin{ ushort(2340) };
inline constexpr phrase<> lng_channel_admin_status_creator{ ushort(2341) };
inline constexpr phrase<lngtag_user> lng_channel_admin_status_promoted_by{ ushort(2342) };
inline constexpr phrase<> lng_channel_admin_status_not_admin{ ushort(2343) };
inline constexpr phrase<lngtag_user> lng_channel_banned_status_restricted_by{ ushort(2344) };
inline constexpr phrase<lngtag_user> lng_channel_banned_status_removed_by{ ushort(2345) };
inline constexpr phrase<> lng_channel_removed_list_about{ ushort(2346) };
inline constexpr phrase<> lng_group_removed_list_about{ ushort(2347) };
inline constexpr phrase<> lng_participant_filter{ ushort(2348) };
inline constexpr phrase<> lng_participant_invite{ ushort(2349) };
inline constexpr phrase<> lng_participant_invite_history{ ushort(2350) };
inline constexpr phrase<lngtag_user, lngtag_group> lng_participant_invite_sure{ ushort(2351) };
inline constexpr phrase<lngtag_count, lngtag_group> lng_participant_invite_sure_many{ ushort(2352) };
inline constexpr phrase<lngtag_count> lng_participant_invite_sorry{ ushort(2358) };
inline constexpr phrase<> lng_create_group_back{ ushort(2364) };
inline constexpr phrase<> lng_create_group_next{ ushort(2365) };
inline constexpr phrase<> lng_create_group_create{ ushort(2366) };
inline constexpr phrase<> lng_create_group_title{ ushort(2367) };
inline constexpr phrase<> lng_create_channel_title{ ushort(2368) };
inline constexpr phrase<> lng_create_public_channel_title{ ushort(2369) };
inline constexpr phrase<> lng_create_public_channel_about{ ushort(2370) };
inline constexpr phrase<> lng_create_private_channel_title{ ushort(2371) };
inline constexpr phrase<> lng_create_private_channel_about{ ushort(2372) };
inline constexpr phrase<> lng_create_public_group_title{ ushort(2373) };
inline constexpr phrase<> lng_create_public_group_about{ ushort(2374) };
inline constexpr phrase<> lng_create_private_group_title{ ushort(2375) };
inline constexpr phrase<> lng_create_private_group_about{ ushort(2376) };
inline constexpr phrase<> lng_create_permanent_link_title{ ushort(2377) };
inline constexpr phrase<> lng_create_invite_link_title{ ushort(2378) };
inline constexpr phrase<> lng_create_invite_link_about{ ushort(2379) };
inline constexpr phrase<> lng_create_group_skip{ ushort(2380) };
inline constexpr phrase<> lng_create_channel_link_about{ ushort(2381) };
inline constexpr phrase<> lng_create_channel_link_invalid{ ushort(2382) };
inline constexpr phrase<> lng_create_channel_link_occupied{ ushort(2383) };
inline constexpr phrase<> lng_create_channel_link_too_short{ ushort(2384) };
inline constexpr phrase<> lng_create_channel_link_bad_symbols{ ushort(2385) };
inline constexpr phrase<> lng_create_channel_link_available{ ushort(2386) };
inline constexpr phrase<> lng_create_channel_link_pending{ ushort(2387) };
inline constexpr phrase<> lng_create_channel_link_copied{ ushort(2388) };
inline constexpr phrase<> lng_failed_add_participant{ ushort(2389) };
inline constexpr phrase<> lng_failed_add_not_mutual{ ushort(2390) };
inline constexpr phrase<lngtag_contact> lng_sure_delete_contact{ ushort(2391) };
inline constexpr phrase<lngtag_contact> lng_sure_delete_history{ ushort(2392) };
inline constexpr phrase<lngtag_group> lng_sure_delete_group_history{ ushort(2393) };
inline constexpr phrase<lngtag_channel> lng_sure_delete_channel_history{ ushort(2394) };
inline constexpr phrase<lngtag_group> lng_sure_delete_and_exit{ ushort(2395) };
inline constexpr phrase<> lng_sure_leave_channel{ ushort(2396) };
inline constexpr phrase<> lng_sure_delete_channel{ ushort(2397) };
inline constexpr phrase<> lng_sure_leave_group{ ushort(2398) };
inline constexpr phrase<> lng_sure_delete_group{ ushort(2399) };
inline constexpr phrase<> lng_sure_delete_saved_messages{ ushort(2400) };
inline constexpr phrase<> lng_no_clear_history_channel{ ushort(2401) };
inline constexpr phrase<> lng_no_clear_history_group{ ushort(2402) };
inline constexpr phrase<lngtag_date> lng_sure_delete_by_date_one{ ushort(2403) };
inline constexpr phrase<lngtag_days> lng_sure_delete_by_date_many{ ushort(2404) };
inline constexpr phrase<lngtag_count> lng_sure_delete_selected_days{ ushort(2405) };
inline constexpr phrase<> lng_message_empty{ ushort(2411) };
inline constexpr phrase<lngtag_link> lng_message_unsupported{ ushort(2412) };
inline constexpr phrase<> lng_message_not_found{ ushort(2413) };
inline constexpr phrase<lngtag_count> lng_duration_minsec_minutes{ ushort(2414) };
inline constexpr phrase<lngtag_count> lng_duration_minsec_seconds{ ushort(2420) };
inline constexpr phrase<lngtag_minutes_count, lngtag_seconds_count> lng_duration_minutes_seconds{ ushort(2426) };
inline constexpr phrase<lngtag_from, lngtag_user, lngtag_chat> lng_action_invite_user{ ushort(2427) };
inline constexpr phrase<lngtag_from, lngtag_users, lngtag_chat> lng_action_invite_users_many{ ushort(2428) };
inline constexpr phrase<> lng_action_invite_user_chat{ ushort(2429) };
inline constexpr phrase<lngtag_accumulated, lngtag_user> lng_action_invite_users_and_one{ ushort(2430) };
inline constexpr phrase<lngtag_accumulated, lngtag_user> lng_action_invite_users_and_last{ ushort(2431) };
inline constexpr phrase<lngtag_from> lng_action_group_call_started_group{ ushort(2432) };
inline constexpr phrase<> lng_action_group_call_started_channel{ ushort(2433) };
inline constexpr phrase<lngtag_from, lngtag_date> lng_action_group_call_scheduled_group{ ushort(2434) };
inline constexpr phrase<lngtag_date> lng_action_group_call_scheduled_channel{ ushort(2435) };
inline constexpr phrase<lngtag_duration> lng_action_group_call_finished{ ushort(2436) };
inline constexpr phrase<lngtag_from, lngtag_duration> lng_action_group_call_finished_group{ ushort(2437) };
inline constexpr phrase<lngtag_from, lngtag_user> lng_action_add_user{ ushort(2438) };
inline constexpr phrase<lngtag_from, lngtag_users> lng_action_add_users_many{ ushort(2439) };
inline constexpr phrase<lngtag_accumulated, lngtag_user> lng_action_add_users_and_one{ ushort(2440) };
inline constexpr phrase<lngtag_accumulated, lngtag_user> lng_action_add_users_and_last{ ushort(2441) };
inline constexpr phrase<lngtag_from> lng_action_add_you{ ushort(2442) };
inline constexpr phrase<> lng_action_you_joined{ ushort(2443) };
inline constexpr phrase<lngtag_from> lng_action_add_you_group{ ushort(2444) };
inline constexpr phrase<lngtag_from, lngtag_user> lng_action_kick_user{ ushort(2445) };
inline constexpr phrase<lngtag_from> lng_action_user_left{ ushort(2446) };
inline constexpr phrase<lngtag_from> lng_action_user_joined{ ushort(2447) };
inline constexpr phrase<lngtag_from> lng_action_user_joined_by_link{ ushort(2448) };
inline constexpr phrase<lngtag_from> lng_action_user_joined_by_request{ ushort(2449) };
inline constexpr phrase<> lng_action_you_joined_by_request{ ushort(2450) };
inline constexpr phrase<> lng_action_you_joined_by_request_channel{ ushort(2451) };
inline constexpr phrase<lngtag_from> lng_action_user_registered{ ushort(2452) };
inline constexpr phrase<lngtag_from> lng_action_removed_photo{ ushort(2453) };
inline constexpr phrase<> lng_action_removed_photo_channel{ ushort(2454) };
inline constexpr phrase<lngtag_from> lng_action_changed_photo{ ushort(2455) };
inline constexpr phrase<> lng_action_changed_photo_channel{ ushort(2456) };
inline constexpr phrase<lngtag_from, lngtag_title> lng_action_changed_title{ ushort(2457) };
inline constexpr phrase<lngtag_title> lng_action_changed_title_channel{ ushort(2458) };
inline constexpr phrase<lngtag_from, lngtag_title> lng_action_created_chat{ ushort(2459) };
inline constexpr phrase<> lng_action_created_monoforum{ ushort(2460) };
inline constexpr phrase<lngtag_from, lngtag_duration> lng_action_ttl_changed{ ushort(2461) };
inline constexpr phrase<lngtag_duration> lng_action_ttl_changed_you{ ushort(2462) };
inline constexpr phrase<lngtag_duration> lng_action_ttl_changed_channel{ ushort(2463) };
inline constexpr phrase<lngtag_from, lngtag_duration> lng_action_ttl_global{ ushort(2464) };
inline constexpr phrase<lngtag_duration> lng_action_ttl_global_me{ ushort(2465) };
inline constexpr phrase<lngtag_from> lng_action_ttl_removed{ ushort(2466) };
inline constexpr phrase<> lng_action_ttl_removed_you{ ushort(2467) };
inline constexpr phrase<> lng_action_ttl_removed_channel{ ushort(2468) };
inline constexpr phrase<> lng_action_created_channel{ ushort(2469) };
inline constexpr phrase<lngtag_from, lngtag_text> lng_action_pinned_message{ ushort(2470) };
inline constexpr phrase<lngtag_from, lngtag_media> lng_action_pinned_media{ ushort(2471) };
inline constexpr phrase<> lng_action_pinned_media_photo{ ushort(2472) };
inline constexpr phrase<> lng_action_pinned_media_video{ ushort(2473) };
inline constexpr phrase<> lng_action_pinned_media_audio{ ushort(2474) };
inline constexpr phrase<> lng_action_pinned_media_voice{ ushort(2475) };
inline constexpr phrase<> lng_action_pinned_media_video_message{ ushort(2476) };
inline constexpr phrase<> lng_action_pinned_media_file{ ushort(2477) };
inline constexpr phrase<> lng_action_pinned_media_gif{ ushort(2478) };
inline constexpr phrase<> lng_action_pinned_media_contact{ ushort(2479) };
inline constexpr phrase<> lng_action_pinned_media_location{ ushort(2480) };
inline constexpr phrase<> lng_action_pinned_media_sticker{ ushort(2481) };
inline constexpr phrase<lngtag_emoji> lng_action_pinned_media_emoji_sticker{ ushort(2482) };
inline constexpr phrase<lngtag_game> lng_action_pinned_media_game{ ushort(2483) };
inline constexpr phrase<> lng_action_pinned_media_story{ ushort(2484) };
inline constexpr phrase<lngtag_count, lngtag_from, lngtag_game> lng_action_game_score{ ushort(2485) };
inline constexpr phrase<lngtag_count, lngtag_game> lng_action_game_you_scored{ ushort(2491) };
inline constexpr phrase<lngtag_count, lngtag_from> lng_action_game_score_no_game{ ushort(2497) };
inline constexpr phrase<lngtag_count> lng_action_game_you_scored_no_game{ ushort(2503) };
inline constexpr phrase<lngtag_amount, lngtag_user> lng_action_payment_done{ ushort(2509) };
inline constexpr phrase<lngtag_amount, lngtag_user, lngtag_invoice> lng_action_payment_done_for{ ushort(2510) };
inline constexpr phrase<lngtag_amount, lngtag_user, lngtag_invoice> lng_action_payment_init_recurring_for{ ushort(2511) };
inline constexpr phrase<lngtag_amount, lngtag_user> lng_action_payment_init_recurring{ ushort(2512) };
inline constexpr phrase<lngtag_amount> lng_action_payment_used_recurring{ ushort(2513) };
inline constexpr phrase<lngtag_amount> lng_action_payment_bot_done{ ushort(2514) };
inline constexpr phrase<lngtag_amount> lng_action_payment_bot_recurring{ ushort(2515) };
inline constexpr phrase<lngtag_from> lng_action_took_screenshot{ ushort(2516) };
inline constexpr phrase<> lng_action_you_took_screenshot{ ushort(2517) };
inline constexpr phrase<lngtag_domain> lng_action_bot_allowed_from_domain{ ushort(2518) };
inline constexpr phrase<lngtag_app> lng_action_bot_allowed_from_app{ ushort(2519) };
inline constexpr phrase<lngtag_user, lngtag_documents> lng_action_secure_values_sent{ ushort(2520) };
inline constexpr phrase<> lng_action_secure_personal_details{ ushort(2521) };
inline constexpr phrase<> lng_action_secure_proof_of_identity{ ushort(2522) };
inline constexpr phrase<> lng_action_secure_address{ ushort(2523) };
inline constexpr phrase<> lng_action_secure_proof_of_address{ ushort(2524) };
inline constexpr phrase<> lng_action_secure_phone{ ushort(2525) };
inline constexpr phrase<> lng_action_secure_email{ ushort(2526) };
inline constexpr phrase<lngtag_from, lngtag_distance, lngtag_user> lng_action_proximity_reached{ ushort(2527) };
inline constexpr phrase<lngtag_from, lngtag_distance> lng_action_proximity_reached_you{ ushort(2528) };
inline constexpr phrase<lngtag_distance, lngtag_user> lng_action_you_proximity_reached{ ushort(2529) };
inline constexpr phrase<lngtag_emoji> lng_action_you_theme_changed{ ushort(2530) };
inline constexpr phrase<lngtag_from, lngtag_emoji> lng_action_theme_changed{ ushort(2531) };
inline constexpr phrase<lngtag_name> lng_action_you_gift_theme_changed{ ushort(2532) };
inline constexpr phrase<lngtag_from, lngtag_name> lng_action_gift_theme_changed{ ushort(2533) };
inline constexpr phrase<> lng_action_you_theme_disabled{ ushort(2534) };
inline constexpr phrase<lngtag_from> lng_action_theme_disabled{ ushort(2535) };
inline constexpr phrase<lngtag_count> lng_action_proximity_distance_m{ ushort(2536) };
inline constexpr phrase<lngtag_count> lng_action_proximity_distance_km{ ushort(2542) };
inline constexpr phrase<lngtag_text> lng_action_webview_data_done{ ushort(2548) };
inline constexpr phrase<lngtag_user, lngtag_cost> lng_action_gift_received{ ushort(2549) };
inline constexpr phrase<lngtag_user> lng_action_gift_unique_received{ ushort(2550) };
inline constexpr phrase<lngtag_cost> lng_action_gift_sent{ ushort(2551) };
inline constexpr phrase<> lng_action_gift_unique_sent{ ushort(2552) };
inline constexpr phrase<lngtag_user> lng_action_gift_upgraded{ ushort(2553) };
inline constexpr phrase<lngtag_user, lngtag_channel> lng_action_gift_upgraded_channel{ ushort(2554) };
inline constexpr phrase<lngtag_channel> lng_action_gift_upgraded_self_channel{ ushort(2555) };
inline constexpr phrase<lngtag_user> lng_action_gift_upgraded_mine{ ushort(2556) };
inline constexpr phrase<> lng_action_gift_upgraded_self{ ushort(2557) };
inline constexpr phrase<lngtag_from, lngtag_cost, lngtag_user> lng_action_gift_sent_upgrade_other{ ushort(2558) };
inline constexpr phrase<lngtag_cost, lngtag_name, lngtag_user> lng_action_gift_sent_upgrade_self_other{ ushort(2559) };
inline constexpr phrase<lngtag_from, lngtag_cost> lng_action_gift_sent_upgrade{ ushort(2560) };
inline constexpr phrase<lngtag_cost> lng_action_gift_sent_upgrade_self{ ushort(2561) };
inline constexpr phrase<lngtag_cost, lngtag_name> lng_action_gift_sent_upgrade_self_channel{ ushort(2562) };
inline constexpr phrase<lngtag_user> lng_action_gift_upgraded_helped{ ushort(2563) };
inline constexpr phrase<lngtag_user> lng_action_gift_upgraded_helped_self{ ushort(2564) };
inline constexpr phrase<lngtag_user> lng_action_gift_transferred{ ushort(2565) };
inline constexpr phrase<lngtag_user, lngtag_channel> lng_action_gift_transferred_channel{ ushort(2566) };
inline constexpr phrase<> lng_action_gift_transferred_unknown{ ushort(2567) };
inline constexpr phrase<lngtag_channel> lng_action_gift_transferred_unknown_channel{ ushort(2568) };
inline constexpr phrase<> lng_action_gift_transferred_self{ ushort(2569) };
inline constexpr phrase<lngtag_channel> lng_action_gift_transferred_self_channel{ ushort(2570) };
inline constexpr phrase<lngtag_user> lng_action_gift_transferred_mine{ ushort(2571) };
inline constexpr phrase<lngtag_cost> lng_action_gift_received_anonymous{ ushort(2572) };
inline constexpr phrase<lngtag_user, lngtag_name, lngtag_cost> lng_action_gift_sent_channel{ ushort(2573) };
inline constexpr phrase<lngtag_name, lngtag_cost> lng_action_gift_sent_self_channel{ ushort(2574) };
inline constexpr phrase<lngtag_cost> lng_action_gift_self_bought{ ushort(2575) };
inline constexpr phrase<> lng_action_gift_self_subtitle{ ushort(2576) };
inline constexpr phrase<lngtag_count> lng_action_gift_self_about{ ushort(2577) };
inline constexpr phrase<> lng_action_gift_self_about_unique{ ushort(2583) };
inline constexpr phrase<lngtag_count> lng_action_gift_channel_about{ ushort(2584) };
inline constexpr phrase<> lng_action_gift_channel_about_unique{ ushort(2590) };
inline constexpr phrase<lngtag_count> lng_action_gift_for_stars{ ushort(2591) };
inline constexpr phrase<lngtag_count> lng_action_gift_for_ton{ ushort(2597) };
inline constexpr phrase<lngtag_user> lng_action_gift_got_subtitle{ ushort(2603) };
inline constexpr phrase<lngtag_count> lng_action_gift_got_stars_text{ ushort(2604) };
inline constexpr phrase<> lng_action_gift_got_upgradable_text{ ushort(2610) };
inline constexpr phrase<> lng_action_gift_got_gift_text{ ushort(2611) };
inline constexpr phrase<> lng_action_gift_can_remove_text{ ushort(2612) };
inline constexpr phrase<> lng_action_gift_got_gift_channel{ ushort(2613) };
inline constexpr phrase<> lng_action_gift_can_remove_channel{ ushort(2614) };
inline constexpr phrase<lngtag_user> lng_action_gift_sent_subtitle{ ushort(2615) };
inline constexpr phrase<lngtag_count, lngtag_user> lng_action_gift_sent_text{ ushort(2616) };
inline constexpr phrase<lngtag_user> lng_action_gift_sent_upgradable{ ushort(2622) };
inline constexpr phrase<lngtag_count> lng_action_gift_premium_months{ ushort(2623) };
inline constexpr phrase<> lng_action_gift_premium_about{ ushort(2629) };
inline constexpr phrase<> lng_action_gift_refunded{ ushort(2630) };
inline constexpr phrase<> lng_action_gift_got_ton{ ushort(2631) };
inline constexpr phrase<lngtag_user> lng_action_suggested_photo_me{ ushort(2632) };
inline constexpr phrase<lngtag_user> lng_action_suggested_photo{ ushort(2633) };
inline constexpr phrase<> lng_action_suggested_photo_button{ ushort(2634) };
inline constexpr phrase<lngtag_user> lng_action_suggested_video_me{ ushort(2635) };
inline constexpr phrase<lngtag_user> lng_action_suggested_video{ ushort(2636) };
inline constexpr phrase<> lng_action_suggested_video_button{ ushort(2637) };
inline constexpr phrase<> lng_action_attach_menu_bot_allowed{ ushort(2638) };
inline constexpr phrase<> lng_action_webapp_bot_allowed{ ushort(2639) };
inline constexpr phrase<> lng_action_set_wallpaper_me{ ushort(2640) };
inline constexpr phrase<lngtag_user> lng_action_set_wallpaper{ ushort(2641) };
inline constexpr phrase<lngtag_user> lng_action_set_wallpaper_both_me{ ushort(2642) };
inline constexpr phrase<> lng_action_set_wallpaper_button{ ushort(2643) };
inline constexpr phrase<> lng_action_set_wallpaper_remove{ ushort(2644) };
inline constexpr phrase<> lng_action_set_same_wallpaper_me{ ushort(2645) };
inline constexpr phrase<lngtag_user> lng_action_set_same_wallpaper{ ushort(2646) };
inline constexpr phrase<> lng_action_topic_created_inside{ ushort(2647) };
inline constexpr phrase<> lng_action_topic_closed_inside{ ushort(2648) };
inline constexpr phrase<> lng_action_topic_reopened_inside{ ushort(2649) };
inline constexpr phrase<> lng_action_topic_hidden_inside{ ushort(2650) };
inline constexpr phrase<> lng_action_topic_unhidden_inside{ ushort(2651) };
inline constexpr phrase<lngtag_topic> lng_action_topic_created{ ushort(2652) };
inline constexpr phrase<lngtag_topic> lng_action_topic_closed{ ushort(2653) };
inline constexpr phrase<lngtag_topic> lng_action_topic_reopened{ ushort(2654) };
inline constexpr phrase<lngtag_topic> lng_action_topic_hidden{ ushort(2655) };
inline constexpr phrase<lngtag_topic> lng_action_topic_unhidden{ ushort(2656) };
inline constexpr phrase<> lng_action_topic_placeholder{ ushort(2657) };
inline constexpr phrase<lngtag_from, lngtag_link, lngtag_title> lng_action_topic_renamed{ ushort(2658) };
inline constexpr phrase<lngtag_from, lngtag_link, lngtag_emoji> lng_action_topic_icon_changed{ ushort(2659) };
inline constexpr phrase<lngtag_from, lngtag_link> lng_action_topic_icon_removed{ ushort(2660) };
inline constexpr phrase<lngtag_chat, lngtag_bot> lng_action_shared_chat_with_bot{ ushort(2661) };
inline constexpr phrase<lngtag_user> lng_action_story_mention_me{ ushort(2662) };
inline constexpr phrase<lngtag_user> lng_action_story_mention{ ushort(2663) };
inline constexpr phrase<> lng_action_story_mention_button{ ushort(2664) };
inline constexpr phrase<lngtag_user> lng_action_story_mention_me_unavailable{ ushort(2665) };
inline constexpr phrase<lngtag_user> lng_action_story_mention_unavailable{ ushort(2666) };
inline constexpr phrase<lngtag_from> lng_action_giveaway_started_group{ ushort(2667) };
inline constexpr phrase<lngtag_from> lng_action_giveaway_started{ ushort(2668) };
inline constexpr phrase<lngtag_count> lng_action_giveaway_credits_started_amount{ ushort(2669) };
inline constexpr phrase<lngtag_from, lngtag_amount> lng_action_giveaway_credits_started_group{ ushort(2675) };
inline constexpr phrase<lngtag_from, lngtag_amount> lng_action_giveaway_credits_started{ ushort(2676) };
inline constexpr phrase<lngtag_count> lng_action_giveaway_results{ ushort(2677) };
inline constexpr phrase<> lng_action_giveaway_results_some{ ushort(2683) };
inline constexpr phrase<lngtag_count> lng_action_giveaway_results_credits{ ushort(2684) };
inline constexpr phrase<> lng_action_giveaway_results_credits_some{ ushort(2690) };
inline constexpr phrase<> lng_action_giveaway_results_none{ ushort(2691) };
inline constexpr phrase<> lng_action_boost_apply_me{ ushort(2692) };
inline constexpr phrase<lngtag_count, lngtag_from> lng_action_boost_apply{ ushort(2693) };
inline constexpr phrase<lngtag_from> lng_action_set_chat_intro{ ushort(2699) };
inline constexpr phrase<lngtag_peer, lngtag_amount> lng_action_payment_refunded{ ushort(2700) };
inline constexpr phrase<lngtag_count, lngtag_action> lng_action_paid_message_sent{ ushort(2701) };
inline constexpr phrase<> lng_action_paid_message_one{ ushort(2707) };
inline constexpr phrase<lngtag_count> lng_action_paid_message_some{ ushort(2708) };
inline constexpr phrase<lngtag_count, lngtag_name> lng_action_paid_message_got{ ushort(2714) };
inline constexpr phrase<lngtag_count, lngtag_from> lng_action_paid_message_refund{ ushort(2720) };
inline constexpr phrase<lngtag_count, lngtag_name> lng_action_paid_message_refund_self{ ushort(2726) };
inline constexpr phrase<> lng_action_message_price_free{ ushort(2732) };
inline constexpr phrase<lngtag_count> lng_action_message_price_paid{ ushort(2733) };
inline constexpr phrase<> lng_action_direct_messages_enabled{ ushort(2739) };
inline constexpr phrase<lngtag_count> lng_action_direct_messages_paid{ ushort(2740) };
inline constexpr phrase<> lng_action_direct_messages_disabled{ ushort(2746) };
inline constexpr phrase<lngtag_from, lngtag_tasks> lng_action_todo_marked_done{ ushort(2747) };
inline constexpr phrase<lngtag_tasks> lng_action_todo_marked_done_self{ ushort(2748) };
inline constexpr phrase<lngtag_from, lngtag_tasks> lng_action_todo_marked_not_done{ ushort(2749) };
inline constexpr phrase<lngtag_tasks> lng_action_todo_marked_not_done_self{ ushort(2750) };
inline constexpr phrase<lngtag_from, lngtag_tasks> lng_action_todo_added{ ushort(2751) };
inline constexpr phrase<lngtag_tasks> lng_action_todo_added_self{ ushort(2752) };
inline constexpr phrase<lngtag_count> lng_action_todo_tasks_fallback{ ushort(2753) };
inline constexpr phrase<lngtag_tasks, lngtag_task> lng_action_todo_tasks_and_one{ ushort(2759) };
inline constexpr phrase<lngtag_tasks, lngtag_task> lng_action_todo_tasks_and_last{ ushort(2760) };
inline constexpr phrase<lngtag_count, lngtag_from> lng_action_suggest_success_stars{ ushort(2761) };
inline constexpr phrase<lngtag_count, lngtag_from> lng_action_suggest_success_ton{ ushort(2767) };
inline constexpr phrase<> lng_action_suggest_refund_user{ ushort(2773) };
inline constexpr phrase<> lng_action_suggest_refund_admin{ ushort(2774) };
inline constexpr phrase<> lng_action_post_rejected{ ushort(2775) };
inline constexpr phrase<> lng_action_not_enough_funds{ ushort(2776) };
inline constexpr phrase<lngtag_count> lng_you_paid_stars{ ushort(2777) };
inline constexpr phrase<> lng_you_joined_group{ ushort(2783) };
inline constexpr phrase<> lng_similar_channels_title{ ushort(2784) };
inline constexpr phrase<> lng_similar_channels_view_all{ ushort(2785) };
inline constexpr phrase<> lng_similar_channels_more{ ushort(2786) };
inline constexpr phrase<lngtag_count, lngtag_link> lng_similar_channels_premium_all{ ushort(2787) };
inline constexpr phrase<> lng_similar_channels_premium_all_link{ ushort(2793) };
inline constexpr phrase<> lng_similar_channels_show_more{ ushort(2794) };
inline constexpr phrase<> lng_similar_bots_title{ ushort(2795) };
inline constexpr phrase<lngtag_count, lngtag_link> lng_similar_bots_premium_all{ ushort(2796) };
inline constexpr phrase<> lng_similar_bots_show_more{ ushort(2802) };
inline constexpr phrase<> lng_peer_gifts_title{ ushort(2803) };
inline constexpr phrase<lngtag_user> lng_peer_gifts_about{ ushort(2804) };
inline constexpr phrase<> lng_peer_gifts_about_mine{ ushort(2805) };
inline constexpr phrase<> lng_peer_gifts_empty_search{ ushort(2806) };
inline constexpr phrase<> lng_peer_gifts_view_all{ ushort(2807) };
inline constexpr phrase<> lng_peer_gifts_notify{ ushort(2808) };
inline constexpr phrase<> lng_peer_gifts_notify_enabled{ ushort(2809) };
inline constexpr phrase<> lng_peer_gifts_filter_by_value{ ushort(2810) };
inline constexpr phrase<> lng_peer_gifts_filter_by_date{ ushort(2811) };
inline constexpr phrase<> lng_peer_gifts_filter_unlimited{ ushort(2812) };
inline constexpr phrase<> lng_peer_gifts_filter_upgradable{ ushort(2813) };
inline constexpr phrase<> lng_peer_gifts_filter_limited{ ushort(2814) };
inline constexpr phrase<> lng_peer_gifts_filter_unique{ ushort(2815) };
inline constexpr phrase<> lng_peer_gifts_filter_saved{ ushort(2816) };
inline constexpr phrase<> lng_peer_gifts_filter_unsaved{ ushort(2817) };
inline constexpr phrase<lngtag_count> lng_premium_gift_duration_months{ ushort(2818) };
inline constexpr phrase<lngtag_count> lng_premium_gift_duration_years{ ushort(2824) };
inline constexpr phrase<lngtag_from> lng_ttl_photo_received{ ushort(2830) };
inline constexpr phrase<> lng_ttl_photo_sent{ ushort(2831) };
inline constexpr phrase<> lng_ttl_photo_expired{ ushort(2832) };
inline constexpr phrase<lngtag_from> lng_ttl_video_received{ ushort(2833) };
inline constexpr phrase<> lng_ttl_video_sent{ ushort(2834) };
inline constexpr phrase<> lng_ttl_video_expired{ ushort(2835) };
inline constexpr phrase<> lng_ttl_voice_sent{ ushort(2836) };
inline constexpr phrase<> lng_ttl_voice_expired{ ushort(2837) };
inline constexpr phrase<> lng_ttl_round_sent{ ushort(2838) };
inline constexpr phrase<> lng_ttl_round_expired{ ushort(2839) };
inline constexpr phrase<> lng_ttl_voice_tooltip_in{ ushort(2840) };
inline constexpr phrase<lngtag_user> lng_ttl_voice_tooltip_out{ ushort(2841) };
inline constexpr phrase<> lng_ttl_voice_close_in{ ushort(2842) };
inline constexpr phrase<> lng_ttl_round_tooltip_in{ ushort(2843) };
inline constexpr phrase<lngtag_user> lng_ttl_round_tooltip_out{ ushort(2844) };
inline constexpr phrase<> lng_profile_add_more_after_create{ ushort(2845) };
inline constexpr phrase<> lng_profile_camera_title{ ushort(2846) };
inline constexpr phrase<> lng_channel_not_accessible{ ushort(2847) };
inline constexpr phrase<> lng_group_not_accessible{ ushort(2848) };
inline constexpr phrase<> lng_group_full{ ushort(2849) };
inline constexpr phrase<lngtag_link, lngtag_group> lng_channels_too_much_public_revoke_confirm_group{ ushort(2850) };
inline constexpr phrase<lngtag_link, lngtag_group> lng_channels_too_much_public_revoke_confirm_channel{ ushort(2851) };
inline constexpr phrase<> lng_channels_too_much_public_revoke{ ushort(2852) };
inline constexpr phrase<> lng_channels_too_much_public_other{ ushort(2853) };
inline constexpr phrase<> lng_channels_too_much_located_other{ ushort(2854) };
inline constexpr phrase<> lng_group_invite_bad_link{ ushort(2855) };
inline constexpr phrase<lngtag_count> lng_group_invite_members{ ushort(2856) };
inline constexpr phrase<> lng_channel_invite_private{ ushort(2862) };
inline constexpr phrase<> lng_channel_invite_subscription_button{ ushort(2863) };
inline constexpr phrase<> lng_channel_invite_subscription_title{ ushort(2864) };
inline constexpr phrase<lngtag_channel, lngtag_price> lng_channel_invite_subscription_about{ ushort(2865) };
inline constexpr phrase<lngtag_link> lng_channel_invite_subscription_terms{ ushort(2866) };
inline constexpr phrase<> lng_group_invite_create{ ushort(2867) };
inline constexpr phrase<> lng_group_invite_about_new{ ushort(2868) };
inline constexpr phrase<> lng_group_invite_copied{ ushort(2869) };
inline constexpr phrase<> lng_group_invite_no_room{ ushort(2870) };
inline constexpr phrase<> lng_group_invite_copy{ ushort(2871) };
inline constexpr phrase<> lng_group_invite_share{ ushort(2872) };
inline constexpr phrase<> lng_group_invite_reactivate{ ushort(2873) };
inline constexpr phrase<> lng_group_invite_delete{ ushort(2874) };
inline constexpr phrase<> lng_group_invite_no_joined{ ushort(2875) };
inline constexpr phrase<lngtag_count> lng_group_invite_joined{ ushort(2876) };
inline constexpr phrase<> lng_group_invite_joined_via_filter{ ushort(2882) };
inline constexpr phrase<lngtag_count> lng_group_invite_remaining{ ushort(2883) };
inline constexpr phrase<lngtag_count> lng_group_invite_requested{ ushort(2889) };
inline constexpr phrase<lngtag_count> lng_group_invite_requested_full{ ushort(2895) };
inline constexpr phrase<lngtag_count> lng_group_invite_can_join{ ushort(2901) };
inline constexpr phrase<lngtag_count> lng_group_invite_days_left{ ushort(2907) };
inline constexpr phrase<> lng_group_invite_about_permanent_group{ ushort(2913) };
inline constexpr phrase<> lng_group_invite_about_permanent_channel{ ushort(2914) };
inline constexpr phrase<> lng_group_invite_title{ ushort(2915) };
inline constexpr phrase<> lng_group_invite_add{ ushort(2916) };
inline constexpr phrase<> lng_group_invite_add_about{ ushort(2917) };
inline constexpr phrase<lngtag_when> lng_group_invite_expires_at{ ushort(2918) };
inline constexpr phrase<> lng_group_invite_created_by{ ushort(2919) };
inline constexpr phrase<lngtag_count> lng_group_invite_links_count{ ushort(2920) };
inline constexpr phrase<> lng_group_invite_context_copy{ ushort(2926) };
inline constexpr phrase<> lng_group_invite_context_share{ ushort(2927) };
inline constexpr phrase<> lng_group_invite_context_edit{ ushort(2928) };
inline constexpr phrase<> lng_group_invite_context_qr{ ushort(2929) };
inline constexpr phrase<> lng_group_invite_context_revoke{ ushort(2930) };
inline constexpr phrase<> lng_group_invite_context_delete{ ushort(2931) };
inline constexpr phrase<> lng_group_invite_context_delete_all{ ushort(2932) };
inline constexpr phrase<> lng_group_invite_delete_sure{ ushort(2933) };
inline constexpr phrase<> lng_group_invite_delete_all_sure{ ushort(2934) };
inline constexpr phrase<> lng_group_invite_revoked_title{ ushort(2935) };
inline constexpr phrase<> lng_group_invite_revoke_about{ ushort(2936) };
inline constexpr phrase<> lng_group_invite_link_expired{ ushort(2937) };
inline constexpr phrase<> lng_group_invite_edit_title{ ushort(2938) };
inline constexpr phrase<> lng_group_invite_new_title{ ushort(2939) };
inline constexpr phrase<> lng_group_invite_label_header{ ushort(2940) };
inline constexpr phrase<> lng_group_invite_label_about{ ushort(2941) };
inline constexpr phrase<> lng_group_invite_expire_title{ ushort(2942) };
inline constexpr phrase<> lng_group_invite_expire_about{ ushort(2943) };
inline constexpr phrase<> lng_group_invite_expire_never{ ushort(2944) };
inline constexpr phrase<> lng_group_invite_expire_custom{ ushort(2945) };
inline constexpr phrase<> lng_group_invite_usage_title{ ushort(2946) };
inline constexpr phrase<> lng_group_invite_usage_about{ ushort(2947) };
inline constexpr phrase<> lng_group_invite_expire_after{ ushort(2948) };
inline constexpr phrase<> lng_group_invite_custom_limit{ ushort(2949) };
inline constexpr phrase<> lng_group_invite_usage_any{ ushort(2950) };
inline constexpr phrase<> lng_group_invite_usage_custom{ ushort(2951) };
inline constexpr phrase<> lng_group_invite_other_title{ ushort(2952) };
inline constexpr phrase<lngtag_count> lng_group_invite_other_count{ ushort(2953) };
inline constexpr phrase<> lng_group_invite_other_list{ ushort(2959) };
inline constexpr phrase<> lng_group_invite_expired_about{ ushort(2960) };
inline constexpr phrase<> lng_group_invite_used_about{ ushort(2961) };
inline constexpr phrase<lngtag_count> lng_group_invite_can_join_via_link{ ushort(2962) };
inline constexpr phrase<> lng_group_invite_qr_title{ ushort(2968) };
inline constexpr phrase<> lng_group_invite_qr_about{ ushort(2969) };
inline constexpr phrase<> lng_group_invite_qr_copied{ ushort(2970) };
inline constexpr phrase<> lng_group_invite_request_approve{ ushort(2971) };
inline constexpr phrase<> lng_group_invite_about_approve{ ushort(2972) };
inline constexpr phrase<> lng_group_invite_about_no_approve{ ushort(2973) };
inline constexpr phrase<> lng_group_invite_about_approve_channel{ ushort(2974) };
inline constexpr phrase<> lng_group_invite_about_no_approve_channel{ ushort(2975) };
inline constexpr phrase<> lng_group_invite_subscription{ ushort(2976) };
inline constexpr phrase<> lng_group_invite_subscription_ph{ ushort(2977) };
inline constexpr phrase<lngtag_cost> lng_group_invite_subscription_price{ ushort(2978) };
inline constexpr phrase<> lng_group_invite_subscription_toast{ ushort(2979) };
inline constexpr phrase<lngtag_link> lng_group_invite_subscription_about{ ushort(2980) };
inline constexpr phrase<lngtag_emoji> lng_group_invite_subscription_about_link{ ushort(2981) };
inline constexpr phrase<> lng_group_invite_subscription_about_url{ ushort(2982) };
inline constexpr phrase<> lng_group_invite_subscription_info_subtitle{ ushort(2983) };
inline constexpr phrase<lngtag_emoji, lngtag_price, lngtag_multiplier, lngtag_total> lng_group_invite_subscription_info_title{ ushort(2984) };
inline constexpr phrase<lngtag_emoji, lngtag_price> lng_group_invite_subscription_info_title_none{ ushort(2985) };
inline constexpr phrase<lngtag_total> lng_group_invite_subscription_info_about{ ushort(2986) };
inline constexpr phrase<> lng_group_invite_joined_right{ ushort(2987) };
inline constexpr phrase<lngtag_date> lng_group_invite_joined_status{ ushort(2988) };
inline constexpr phrase<> lng_group_invite_joined_row_subscriber{ ushort(2989) };
inline constexpr phrase<> lng_group_invite_joined_row_date{ ushort(2990) };
inline constexpr phrase<> lng_group_request_to_join{ ushort(2991) };
inline constexpr phrase<> lng_group_request_about{ ushort(2992) };
inline constexpr phrase<> lng_group_request_about_channel{ ushort(2993) };
inline constexpr phrase<> lng_group_request_sent{ ushort(2994) };
inline constexpr phrase<> lng_group_request_sent_channel{ ushort(2995) };
inline constexpr phrase<lngtag_count> lng_group_requests_pending{ ushort(2996) };
inline constexpr phrase<lngtag_user> lng_group_requests_pending_user{ ushort(3002) };
inline constexpr phrase<lngtag_time> lng_group_requests_status_today{ ushort(3003) };
inline constexpr phrase<lngtag_time> lng_group_requests_status_yesterday{ ushort(3004) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_group_requests_status_date_time{ ushort(3005) };
inline constexpr phrase<> lng_group_requests_add{ ushort(3006) };
inline constexpr phrase<> lng_group_requests_add_channel{ ushort(3007) };
inline constexpr phrase<> lng_group_requests_dismiss{ ushort(3008) };
inline constexpr phrase<lngtag_user> lng_group_requests_was_added{ ushort(3009) };
inline constexpr phrase<lngtag_user> lng_group_requests_was_added_channel{ ushort(3010) };
inline constexpr phrase<> lng_group_requests_none{ ushort(3011) };
inline constexpr phrase<> lng_group_requests_none_channel{ ushort(3012) };
inline constexpr phrase<> lng_channel_public_link_copied{ ushort(3013) };
inline constexpr phrase<> lng_context_about_private_link{ ushort(3014) };
inline constexpr phrase<> lng_public_post_private_hint_ctrl{ ushort(3015) };
inline constexpr phrase<> lng_public_post_private_hint_cmd{ ushort(3016) };
inline constexpr phrase<lngtag_user> lng_forwarded{ ushort(3017) };
inline constexpr phrase<lngtag_user> lng_forwarded_story{ ushort(3018) };
inline constexpr phrase<> lng_forwarded_story_expired{ ushort(3019) };
inline constexpr phrase<lngtag_date> lng_forwarded_date{ ushort(3020) };
inline constexpr phrase<lngtag_channel> lng_forwarded_channel{ ushort(3021) };
inline constexpr phrase<lngtag_channel> lng_forwarded_psa_default{ ushort(3022) };
inline constexpr phrase<lngtag_user, lngtag_inline_bot> lng_forwarded_via{ ushort(3023) };
inline constexpr phrase<lngtag_channel, lngtag_inline_bot> lng_forwarded_channel_via{ ushort(3024) };
inline constexpr phrase<lngtag_channel, lngtag_user> lng_forwarded_signed{ ushort(3025) };
inline constexpr phrase<> lng_forwarded_hidden{ ushort(3026) };
inline constexpr phrase<> lng_forwarded_imported{ ushort(3027) };
inline constexpr phrase<lngtag_user> lng_signed_author{ ushort(3028) };
inline constexpr phrase<> lng_sponsored_message_title{ ushort(3029) };
inline constexpr phrase<> lng_sponsored_message_revenue_button{ ushort(3030) };
inline constexpr phrase<> lng_recommended_message_title{ ushort(3031) };
inline constexpr phrase<> lng_edited{ ushort(3032) };
inline constexpr phrase<> lng_commented{ ushort(3033) };
inline constexpr phrase<> lng_approximate{ ushort(3034) };
inline constexpr phrase<lngtag_date> lng_edited_date{ ushort(3035) };
inline constexpr phrase<lngtag_date> lng_sent_date{ ushort(3036) };
inline constexpr phrase<> lng_approximate_about{ ushort(3037) };
inline constexpr phrase<lngtag_count> lng_views_tooltip{ ushort(3038) };
inline constexpr phrase<lngtag_count> lng_forwards_tooltip{ ushort(3044) };
inline constexpr phrase<> lng_imported{ ushort(3050) };
inline constexpr phrase<> lng_admin_badge{ ushort(3051) };
inline constexpr phrase<> lng_owner_badge{ ushort(3052) };
inline constexpr phrase<> lng_channel_badge{ ushort(3053) };
inline constexpr phrase<> lng_topic_author_badge{ ushort(3054) };
inline constexpr phrase<> lng_fast_reply{ ushort(3055) };
inline constexpr phrase<> lng_cancel_edit_post_sure{ ushort(3056) };
inline constexpr phrase<> lng_cancel_edit_post_yes{ ushort(3057) };
inline constexpr phrase<> lng_cancel_edit_post_no{ ushort(3058) };
inline constexpr phrase<> lng_bot_share_location_unavailable{ ushort(3059) };
inline constexpr phrase<> lng_bot_share_phone{ ushort(3060) };
inline constexpr phrase<> lng_bot_share_phone_confirm{ ushort(3061) };
inline constexpr phrase<> lng_bot_allow_write_title{ ushort(3062) };
inline constexpr phrase<> lng_bot_allow_write{ ushort(3063) };
inline constexpr phrase<> lng_bot_allow_write_confirm{ ushort(3064) };
inline constexpr phrase<> lng_attach_failed{ ushort(3065) };
inline constexpr phrase<> lng_attach_file{ ushort(3066) };
inline constexpr phrase<> lng_attach_photo{ ushort(3067) };
inline constexpr phrase<> lng_attach_camera{ ushort(3068) };
inline constexpr phrase<> lng_attach_document{ ushort(3069) };
inline constexpr phrase<> lng_attach_photo_or_video{ ushort(3070) };
inline constexpr phrase<> lng_attach_profile_emoji{ ushort(3071) };
inline constexpr phrase<> lng_media_open_with{ ushort(3072) };
inline constexpr phrase<> lng_media_download{ ushort(3073) };
inline constexpr phrase<> lng_media_cancel{ ushort(3074) };
inline constexpr phrase<> lng_media_video{ ushort(3075) };
inline constexpr phrase<> lng_media_audio{ ushort(3076) };
inline constexpr phrase<> lng_media_round{ ushort(3077) };
inline constexpr phrase<> lng_media_auto_settings{ ushort(3078) };
inline constexpr phrase<> lng_media_auto_in_private{ ushort(3079) };
inline constexpr phrase<> lng_media_auto_in_groups{ ushort(3080) };
inline constexpr phrase<> lng_media_auto_in_channels{ ushort(3081) };
inline constexpr phrase<> lng_media_auto_title{ ushort(3082) };
inline constexpr phrase<> lng_media_auto_play{ ushort(3083) };
inline constexpr phrase<> lng_media_photo_title{ ushort(3084) };
inline constexpr phrase<> lng_media_video_title{ ushort(3085) };
inline constexpr phrase<> lng_media_video_messages_title{ ushort(3086) };
inline constexpr phrase<> lng_media_file_title{ ushort(3087) };
inline constexpr phrase<> lng_media_animation_title{ ushort(3088) };
inline constexpr phrase<> lng_media_size_limit{ ushort(3089) };
inline constexpr phrase<lngtag_size> lng_media_size_up_to{ ushort(3090) };
inline constexpr phrase<> lng_media_chat_background{ ushort(3091) };
inline constexpr phrase<> lng_media_color_theme{ ushort(3092) };
inline constexpr phrase<> lng_emoji_category1{ ushort(3093) };
inline constexpr phrase<> lng_emoji_category2{ ushort(3094) };
inline constexpr phrase<> lng_emoji_category3{ ushort(3095) };
inline constexpr phrase<> lng_emoji_category4{ ushort(3096) };
inline constexpr phrase<> lng_emoji_category5{ ushort(3097) };
inline constexpr phrase<> lng_emoji_category6{ ushort(3098) };
inline constexpr phrase<> lng_emoji_category7{ ushort(3099) };
inline constexpr phrase<> lng_emoji_manage_sets{ ushort(3100) };
inline constexpr phrase<> lng_emoji_set_ready{ ushort(3101) };
inline constexpr phrase<> lng_emoji_set_active{ ushort(3102) };
inline constexpr phrase<lngtag_size> lng_emoji_set_download{ ushort(3103) };
inline constexpr phrase<lngtag_percent, lngtag_progress> lng_emoji_set_loading{ ushort(3104) };
inline constexpr phrase<> lng_emoji_color_all{ ushort(3105) };
inline constexpr phrase<> lng_emoji_copy{ ushort(3106) };
inline constexpr phrase<> lng_emoji_view_pack{ ushort(3107) };
inline constexpr phrase<> lng_emoji_remove_recent{ ushort(3108) };
inline constexpr phrase<> lng_emoji_reset_recent{ ushort(3109) };
inline constexpr phrase<> lng_emoji_reset_recent_sure{ ushort(3110) };
inline constexpr phrase<> lng_emoji_reset_recent_button{ ushort(3111) };
inline constexpr phrase<> lng_recent_stickers{ ushort(3112) };
inline constexpr phrase<> lng_faved_stickers_add{ ushort(3113) };
inline constexpr phrase<> lng_faved_stickers_remove{ ushort(3114) };
inline constexpr phrase<> lng_recent_stickers_remove{ ushort(3115) };
inline constexpr phrase<> lng_group_stickers{ ushort(3116) };
inline constexpr phrase<> lng_group_stickers_description{ ushort(3117) };
inline constexpr phrase<> lng_group_stickers_add{ ushort(3118) };
inline constexpr phrase<> lng_group_emoji{ ushort(3119) };
inline constexpr phrase<> lng_group_emoji_description{ ushort(3120) };
inline constexpr phrase<> lng_collectible_emoji{ ushort(3121) };
inline constexpr phrase<> lng_premium{ ushort(3122) };
inline constexpr phrase<> lng_premium_free{ ushort(3123) };
inline constexpr phrase<> lng_premium_more_about{ ushort(3124) };
inline constexpr phrase<> lng_premium_unlock_reactions{ ushort(3125) };
inline constexpr phrase<> lng_premium_unlock_stickers{ ushort(3126) };
inline constexpr phrase<> lng_premium_unlock_emoji{ ushort(3127) };
inline constexpr phrase<> lng_premium_unlock_status{ ushort(3128) };
inline constexpr phrase<> lng_premium_subscribe_months_24{ ushort(3129) };
inline constexpr phrase<> lng_premium_subscribe_months_12{ ushort(3130) };
inline constexpr phrase<> lng_premium_subscribe_months_6{ ushort(3131) };
inline constexpr phrase<> lng_premium_subscribe_months_1{ ushort(3132) };
inline constexpr phrase<lngtag_cost> lng_premium_subscribe_total{ ushort(3133) };
inline constexpr phrase<lngtag_cost> lng_premium_subscribe_button{ ushort(3134) };
inline constexpr phrase<lngtag_user, lngtag_link> lng_premium_emoji_status_title{ ushort(3135) };
inline constexpr phrase<lngtag_user> lng_premium_emoji_status_title_colored{ ushort(3136) };
inline constexpr phrase<> lng_premium_emoji_status_about{ ushort(3137) };
inline constexpr phrase<> lng_premium_emoji_status_button{ ushort(3138) };
inline constexpr phrase<lngtag_user> lng_premium_summary_user_title{ ushort(3139) };
inline constexpr phrase<> lng_premium_summary_user_about{ ushort(3140) };
inline constexpr phrase<> lng_premium_summary_title{ ushort(3141) };
inline constexpr phrase<> lng_premium_summary_top_about{ ushort(3142) };
inline constexpr phrase<> lng_premium_summary_title_subscribed{ ushort(3143) };
inline constexpr phrase<lngtag_count, lngtag_user> lng_premium_summary_subtitle_gift{ ushort(3144) };
inline constexpr phrase<lngtag_count, lngtag_user> lng_premium_summary_subtitle_gift_me{ ushort(3150) };
inline constexpr phrase<> lng_premium_summary_subtitle_wallpapers{ ushort(3156) };
inline constexpr phrase<> lng_premium_summary_about_wallpapers{ ushort(3157) };
inline constexpr phrase<> lng_premium_summary_subtitle_stories{ ushort(3158) };
inline constexpr phrase<> lng_premium_summary_about_stories{ ushort(3159) };
inline constexpr phrase<> lng_premium_summary_subtitle_double_limits{ ushort(3160) };
inline constexpr phrase<> lng_premium_summary_about_double_limits{ ushort(3161) };
inline constexpr phrase<> lng_premium_summary_subtitle_more_upload{ ushort(3162) };
inline constexpr phrase<> lng_premium_summary_about_more_upload{ ushort(3163) };
inline constexpr phrase<> lng_premium_summary_subtitle_faster_download{ ushort(3164) };
inline constexpr phrase<> lng_premium_summary_about_faster_download{ ushort(3165) };
inline constexpr phrase<> lng_premium_summary_subtitle_voice_to_text{ ushort(3166) };
inline constexpr phrase<> lng_premium_summary_about_voice_to_text{ ushort(3167) };
inline constexpr phrase<> lng_premium_summary_subtitle_no_ads{ ushort(3168) };
inline constexpr phrase<> lng_premium_summary_about_no_ads{ ushort(3169) };
inline constexpr phrase<> lng_premium_summary_subtitle_emoji_status{ ushort(3170) };
inline constexpr phrase<> lng_premium_summary_about_emoji_status{ ushort(3171) };
inline constexpr phrase<> lng_premium_summary_subtitle_infinite_reactions{ ushort(3172) };
inline constexpr phrase<> lng_premium_summary_about_infinite_reactions{ ushort(3173) };
inline constexpr phrase<> lng_premium_summary_subtitle_tags_for_messages{ ushort(3174) };
inline constexpr phrase<> lng_premium_summary_about_tags_for_messages{ ushort(3175) };
inline constexpr phrase<> lng_premium_summary_subtitle_last_seen{ ushort(3176) };
inline constexpr phrase<> lng_premium_summary_about_last_seen{ ushort(3177) };
inline constexpr phrase<> lng_premium_summary_subtitle_message_privacy{ ushort(3178) };
inline constexpr phrase<> lng_premium_summary_about_message_privacy{ ushort(3179) };
inline constexpr phrase<> lng_premium_summary_subtitle_premium_stickers{ ushort(3180) };
inline constexpr phrase<> lng_premium_summary_about_premium_stickers{ ushort(3181) };
inline constexpr phrase<> lng_premium_summary_subtitle_animated_emoji{ ushort(3182) };
inline constexpr phrase<> lng_premium_summary_about_animated_emoji{ ushort(3183) };
inline constexpr phrase<> lng_premium_summary_subtitle_advanced_chat_management{ ushort(3184) };
inline constexpr phrase<> lng_premium_summary_about_advanced_chat_management{ ushort(3185) };
inline constexpr phrase<> lng_premium_summary_subtitle_profile_badge{ ushort(3186) };
inline constexpr phrase<> lng_premium_summary_about_profile_badge{ ushort(3187) };
inline constexpr phrase<> lng_premium_summary_subtitle_animated_userpics{ ushort(3188) };
inline constexpr phrase<> lng_premium_summary_about_animated_userpics{ ushort(3189) };
inline constexpr phrase<> lng_premium_summary_subtitle_translation{ ushort(3190) };
inline constexpr phrase<> lng_premium_summary_about_translation{ ushort(3191) };
inline constexpr phrase<> lng_premium_summary_subtitle_business{ ushort(3192) };
inline constexpr phrase<> lng_premium_summary_about_business{ ushort(3193) };
inline constexpr phrase<> lng_premium_summary_subtitle_effects{ ushort(3194) };
inline constexpr phrase<> lng_premium_summary_about_effects{ ushort(3195) };
inline constexpr phrase<> lng_premium_summary_subtitle_filter_tags{ ushort(3196) };
inline constexpr phrase<> lng_premium_summary_about_filter_tags{ ushort(3197) };
inline constexpr phrase<> lng_premium_summary_subtitle_todo_lists{ ushort(3198) };
inline constexpr phrase<> lng_premium_summary_about_todo_lists{ ushort(3199) };
inline constexpr phrase<> lng_premium_summary_bottom_subtitle{ ushort(3200) };
inline constexpr phrase<> lng_premium_summary_bottom_about{ ushort(3201) };
inline constexpr phrase<lngtag_cost> lng_premium_summary_button{ ushort(3202) };
inline constexpr phrase<> lng_premium_summary_new_badge{ ushort(3203) };
inline constexpr phrase<> lng_soon_badge{ ushort(3204) };
inline constexpr phrase<> lng_premium_success{ ushort(3205) };
inline constexpr phrase<> lng_premium_unavailable{ ushort(3206) };
inline constexpr phrase<> lng_premium_stories_subtitle_order{ ushort(3207) };
inline constexpr phrase<> lng_premium_stories_about_order{ ushort(3208) };
inline constexpr phrase<> lng_premium_stories_subtitle_stealth{ ushort(3209) };
inline constexpr phrase<> lng_premium_stories_about_stealth{ ushort(3210) };
inline constexpr phrase<> lng_premium_stories_subtitle_views{ ushort(3211) };
inline constexpr phrase<> lng_premium_stories_about_views{ ushort(3212) };
inline constexpr phrase<> lng_premium_stories_subtitle_expiration{ ushort(3213) };
inline constexpr phrase<> lng_premium_stories_about_expiration{ ushort(3214) };
inline constexpr phrase<> lng_premium_stories_subtitle_download{ ushort(3215) };
inline constexpr phrase<> lng_premium_stories_about_download{ ushort(3216) };
inline constexpr phrase<> lng_premium_stories_subtitle_caption{ ushort(3217) };
inline constexpr phrase<> lng_premium_stories_about_caption{ ushort(3218) };
inline constexpr phrase<> lng_premium_stories_subtitle_links{ ushort(3219) };
inline constexpr phrase<> lng_premium_stories_about_links{ ushort(3220) };
inline constexpr phrase<> lng_premium_stories_about_mobile{ ushort(3221) };
inline constexpr phrase<> lng_premium_double_limits_subtitle_channels{ ushort(3222) };
inline constexpr phrase<lngtag_count> lng_premium_double_limits_about_channels{ ushort(3223) };
inline constexpr phrase<> lng_premium_double_limits_subtitle_pins{ ushort(3229) };
inline constexpr phrase<lngtag_count> lng_premium_double_limits_about_pins{ ushort(3230) };
inline constexpr phrase<> lng_premium_double_limits_subtitle_links{ ushort(3236) };
inline constexpr phrase<lngtag_count> lng_premium_double_limits_about_links{ ushort(3237) };
inline constexpr phrase<> lng_premium_double_limits_subtitle_gifs{ ushort(3243) };
inline constexpr phrase<lngtag_count> lng_premium_double_limits_about_gifs{ ushort(3244) };
inline constexpr phrase<> lng_premium_double_limits_subtitle_stickers{ ushort(3250) };
inline constexpr phrase<lngtag_count> lng_premium_double_limits_about_stickers{ ushort(3251) };
inline constexpr phrase<> lng_premium_double_limits_subtitle_bio{ ushort(3257) };
inline constexpr phrase<> lng_premium_double_limits_about_bio{ ushort(3258) };
inline constexpr phrase<> lng_premium_double_limits_subtitle_captions{ ushort(3259) };
inline constexpr phrase<> lng_premium_double_limits_about_captions{ ushort(3260) };
inline constexpr phrase<> lng_premium_double_limits_subtitle_folders{ ushort(3261) };
inline constexpr phrase<lngtag_count> lng_premium_double_limits_about_folders{ ushort(3262) };
inline constexpr phrase<> lng_premium_double_limits_subtitle_folder_chats{ ushort(3268) };
inline constexpr phrase<lngtag_count> lng_premium_double_limits_about_folder_chats{ ushort(3269) };
inline constexpr phrase<> lng_premium_double_limits_subtitle_accounts{ ushort(3275) };
inline constexpr phrase<lngtag_count> lng_premium_double_limits_about_accounts{ ushort(3276) };
inline constexpr phrase<> lng_premium_double_limits_subtitle_similar_channels{ ushort(3282) };
inline constexpr phrase<lngtag_count> lng_premium_double_limits_about_similar_channels{ ushort(3283) };
inline constexpr phrase<> lng_premium_gift_title{ ushort(3289) };
inline constexpr phrase<lngtag_user> lng_premium_gift_about{ ushort(3290) };
inline constexpr phrase<lngtag_cost> lng_premium_gift_button{ ushort(3291) };
inline constexpr phrase<lngtag_cost> lng_premium_gift_per{ ushort(3292) };
inline constexpr phrase<lngtag_link> lng_premium_gift_terms{ ushort(3293) };
inline constexpr phrase<> lng_premium_gift_terms_link{ ushort(3294) };
inline constexpr phrase<lngtag_user> lng_premium_gifts_about_user1{ ushort(3295) };
inline constexpr phrase<lngtag_user, lngtag_second_user> lng_premium_gifts_about_user2{ ushort(3296) };
inline constexpr phrase<lngtag_user, lngtag_second_user, lngtag_name> lng_premium_gifts_about_user3{ ushort(3297) };
inline constexpr phrase<lngtag_count, lngtag_user, lngtag_second_user, lngtag_name> lng_premium_gifts_about_user_more{ ushort(3298) };
inline constexpr phrase<lngtag_count, lngtag_emoji> lng_premium_gifts_about_reward{ ushort(3304) };
inline constexpr phrase<> lng_premium_gifts_about_paid_title{ ushort(3310) };
inline constexpr phrase<lngtag_user> lng_premium_gifts_about_paid1{ ushort(3311) };
inline constexpr phrase<lngtag_user, lngtag_second_user> lng_premium_gifts_about_paid2{ ushort(3312) };
inline constexpr phrase<lngtag_user, lngtag_second_user, lngtag_name> lng_premium_gifts_about_paid3{ ushort(3313) };
inline constexpr phrase<lngtag_count, lngtag_user, lngtag_second_user, lngtag_name> lng_premium_gifts_about_paid_more{ ushort(3314) };
inline constexpr phrase<lngtag_count> lng_premium_gifts_about_paid_below{ ushort(3320) };
inline constexpr phrase<> lng_premium_gifts_summary_subtitle{ ushort(3326) };
inline constexpr phrase<lngtag_link, lngtag_policy> lng_premium_gifts_terms{ ushort(3327) };
inline constexpr phrase<> lng_premium_gifts_terms_policy{ ushort(3328) };
inline constexpr phrase<> lng_business_title{ ushort(3329) };
inline constexpr phrase<> lng_business_about{ ushort(3330) };
inline constexpr phrase<> lng_business_unlocked{ ushort(3331) };
inline constexpr phrase<> lng_business_subtitle_location{ ushort(3332) };
inline constexpr phrase<> lng_business_about_location{ ushort(3333) };
inline constexpr phrase<> lng_business_subtitle_opening_hours{ ushort(3334) };
inline constexpr phrase<> lng_business_about_opening_hours{ ushort(3335) };
inline constexpr phrase<> lng_business_subtitle_quick_replies{ ushort(3336) };
inline constexpr phrase<> lng_business_about_quick_replies{ ushort(3337) };
inline constexpr phrase<> lng_business_subtitle_greeting_messages{ ushort(3338) };
inline constexpr phrase<> lng_business_about_greeting_messages{ ushort(3339) };
inline constexpr phrase<> lng_business_subtitle_away_messages{ ushort(3340) };
inline constexpr phrase<> lng_business_about_away_messages{ ushort(3341) };
inline constexpr phrase<> lng_business_subtitle_chatbots{ ushort(3342) };
inline constexpr phrase<> lng_business_about_chatbots{ ushort(3343) };
inline constexpr phrase<> lng_business_subtitle_chat_intro{ ushort(3344) };
inline constexpr phrase<> lng_business_about_chat_intro{ ushort(3345) };
inline constexpr phrase<> lng_business_subtitle_chat_links{ ushort(3346) };
inline constexpr phrase<> lng_business_about_chat_links{ ushort(3347) };
inline constexpr phrase<> lng_business_subtitle_sponsored{ ushort(3348) };
inline constexpr phrase<> lng_business_button_sponsored{ ushort(3349) };
inline constexpr phrase<lngtag_link> lng_business_about_sponsored{ ushort(3350) };
inline constexpr phrase<lngtag_emoji> lng_business_about_sponsored_link{ ushort(3351) };
inline constexpr phrase<> lng_business_about_sponsored_url{ ushort(3352) };
inline constexpr phrase<> lng_credits_summary_title{ ushort(3353) };
inline constexpr phrase<> lng_credits_summary_about{ ushort(3354) };
inline constexpr phrase<> lng_credits_currency_summary_title{ ushort(3355) };
inline constexpr phrase<> lng_credits_currency_summary_about{ ushort(3356) };
inline constexpr phrase<> lng_credits_currency_summary_subtitle{ ushort(3357) };
inline constexpr phrase<> lng_credits_currency_summary_in_button{ ushort(3358) };
inline constexpr phrase<> lng_credits_currency_summary_in_subtitle{ ushort(3359) };
inline constexpr phrase<> lng_credits_summary_options_subtitle{ ushort(3360) };
inline constexpr phrase<lngtag_count> lng_credits_summary_options_credits{ ushort(3361) };
inline constexpr phrase<> lng_credits_summary_options_more{ ushort(3367) };
inline constexpr phrase<lngtag_link> lng_credits_summary_options_about{ ushort(3368) };
inline constexpr phrase<> lng_credits_summary_options_about_link{ ushort(3369) };
inline constexpr phrase<> lng_credits_summary_options_about_url{ ushort(3370) };
inline constexpr phrase<> lng_credits_summary_earn_title{ ushort(3371) };
inline constexpr phrase<> lng_credits_summary_earn_about{ ushort(3372) };
inline constexpr phrase<> lng_credits_summary_history_tab_full{ ushort(3373) };
inline constexpr phrase<> lng_credits_summary_history_tab_in{ ushort(3374) };
inline constexpr phrase<> lng_credits_summary_history_tab_out{ ushort(3375) };
inline constexpr phrase<> lng_credits_summary_history_entry_inner_in{ ushort(3376) };
inline constexpr phrase<> lng_credits_summary_balance{ ushort(3377) };
inline constexpr phrase<lngtag_amount> lng_credits_commission{ ushort(3378) };
inline constexpr phrase<lngtag_count> lng_credits_paid_messages_fee{ ushort(3379) };
inline constexpr phrase<lngtag_percent, lngtag_link> lng_credits_paid_messages_fee_about{ ushort(3385) };
inline constexpr phrase<lngtag_emoji> lng_credits_paid_messages_fee_about_link{ ushort(3386) };
inline constexpr phrase<> lng_credits_paid_messages_full{ ushort(3387) };
inline constexpr phrase<> lng_credits_premium_gift_duration{ ushort(3388) };
inline constexpr phrase<> lng_credits_more_options{ ushort(3389) };
inline constexpr phrase<> lng_credits_balance_me{ ushort(3390) };
inline constexpr phrase<lngtag_emoji, lngtag_amount> lng_credits_balance_me_count{ ushort(3391) };
inline constexpr phrase<> lng_credits_buy_button{ ushort(3392) };
inline constexpr phrase<lngtag_emoji> lng_credits_topup_button{ ushort(3393) };
inline constexpr phrase<> lng_credits_buy_button_short{ ushort(3394) };
inline constexpr phrase<> lng_credits_stats_button_short{ ushort(3395) };
inline constexpr phrase<> lng_credits_stats_button{ ushort(3396) };
inline constexpr phrase<> lng_credits_gift_button{ ushort(3397) };
inline constexpr phrase<> lng_credits_earn_button{ ushort(3398) };
inline constexpr phrase<> lng_credits_box_out_title{ ushort(3399) };
inline constexpr phrase<lngtag_count, lngtag_text, lngtag_bot> lng_credits_box_out_sure{ ushort(3400) };
inline constexpr phrase<lngtag_count, lngtag_media, lngtag_chat> lng_credits_box_out_media{ ushort(3406) };
inline constexpr phrase<lngtag_count, lngtag_media, lngtag_user> lng_credits_box_out_media_user{ ushort(3412) };
inline constexpr phrase<lngtag_count, lngtag_title, lngtag_recipient> lng_credits_box_out_subscription_bot{ ushort(3418) };
inline constexpr phrase<lngtag_count, lngtag_title, lngtag_recipient> lng_credits_box_out_subscription_business{ ushort(3424) };
inline constexpr phrase<lngtag_count, lngtag_emoji> lng_credits_box_out_subscription_confirm{ ushort(3430) };
inline constexpr phrase<> lng_credits_box_out_photo{ ushort(3436) };
inline constexpr phrase<lngtag_count> lng_credits_box_out_photos{ ushort(3437) };
inline constexpr phrase<> lng_credits_box_out_video{ ushort(3443) };
inline constexpr phrase<lngtag_count> lng_credits_box_out_videos{ ushort(3444) };
inline constexpr phrase<lngtag_photo, lngtag_video> lng_credits_box_out_both{ ushort(3450) };
inline constexpr phrase<lngtag_count, lngtag_emoji> lng_credits_box_out_confirm{ ushort(3451) };
inline constexpr phrase<lngtag_link> lng_credits_box_out_about{ ushort(3457) };
inline constexpr phrase<> lng_credits_box_out_about_link{ ushort(3458) };
inline constexpr phrase<> lng_credits_media_done_title{ ushort(3459) };
inline constexpr phrase<lngtag_count, lngtag_chat> lng_credits_media_done_text{ ushort(3460) };
inline constexpr phrase<lngtag_count, lngtag_user> lng_credits_media_done_text_user{ ushort(3466) };
inline constexpr phrase<> lng_credits_summary_in_toast_title{ ushort(3472) };
inline constexpr phrase<lngtag_count> lng_credits_summary_in_toast_about{ ushort(3473) };
inline constexpr phrase<> lng_credits_box_history_entry_peer{ ushort(3479) };
inline constexpr phrase<> lng_credits_box_history_entry_peer_in{ ushort(3480) };
inline constexpr phrase<> lng_credits_box_history_entry_gift_from{ ushort(3481) };
inline constexpr phrase<> lng_credits_box_history_entry_via{ ushort(3482) };
inline constexpr phrase<> lng_credits_box_history_entry_play_market{ ushort(3483) };
inline constexpr phrase<> lng_credits_box_history_entry_app_store{ ushort(3484) };
inline constexpr phrase<> lng_credits_box_history_entry_fragment{ ushort(3485) };
inline constexpr phrase<> lng_credits_box_history_entry_anonymous{ ushort(3486) };
inline constexpr phrase<> lng_credits_box_history_entry_gift_name{ ushort(3487) };
inline constexpr phrase<> lng_credits_box_history_entry_giveaway_name{ ushort(3488) };
inline constexpr phrase<> lng_credits_box_history_entry_gift_sent{ ushort(3489) };
inline constexpr phrase<> lng_credits_box_history_entry_gift_converted{ ushort(3490) };
inline constexpr phrase<> lng_credits_box_history_entry_gift_transfer{ ushort(3491) };
inline constexpr phrase<> lng_credits_box_history_entry_gift_unavailable{ ushort(3492) };
inline constexpr phrase<lngtag_name> lng_credits_box_history_entry_gift_released{ ushort(3493) };
inline constexpr phrase<> lng_credits_box_history_entry_gift_sold_out{ ushort(3494) };
inline constexpr phrase<lngtag_user, lngtag_link> lng_credits_box_history_entry_gift_out_about{ ushort(3495) };
inline constexpr phrase<lngtag_link> lng_credits_box_history_entry_gift_in_about{ ushort(3496) };
inline constexpr phrase<lngtag_emoji> lng_credits_box_history_entry_gift_about_link{ ushort(3497) };
inline constexpr phrase<> lng_credits_box_history_entry_gift_examples{ ushort(3498) };
inline constexpr phrase<> lng_credits_box_history_entry_ads{ ushort(3499) };
inline constexpr phrase<> lng_credits_box_history_entry_premium_bot{ ushort(3500) };
inline constexpr phrase<> lng_credits_box_history_entry_currency_in{ ushort(3501) };
inline constexpr phrase<> lng_credits_box_history_entry_posts_search{ ushort(3502) };
inline constexpr phrase<> lng_credits_box_history_entry_api{ ushort(3503) };
inline constexpr phrase<lngtag_count> lng_credits_box_history_entry_floodskip_about{ ushort(3504) };
inline constexpr phrase<> lng_credits_box_history_entry_floodskip_row{ ushort(3510) };
inline constexpr phrase<> lng_credits_box_history_entry_via_premium_bot{ ushort(3511) };
inline constexpr phrase<> lng_credits_box_history_entry_id{ ushort(3512) };
inline constexpr phrase<> lng_credits_box_history_entry_id_copied{ ushort(3513) };
inline constexpr phrase<> lng_credits_box_history_entry_reason_star_ref{ ushort(3514) };
inline constexpr phrase<> lng_credits_box_history_entry_affiliate{ ushort(3515) };
inline constexpr phrase<> lng_credits_box_history_entry_miniapp{ ushort(3516) };
inline constexpr phrase<> lng_credits_box_history_entry_referred{ ushort(3517) };
inline constexpr phrase<> lng_credits_box_history_entry_success_date{ ushort(3518) };
inline constexpr phrase<> lng_credits_box_history_entry_success_url{ ushort(3519) };
inline constexpr phrase<> lng_credits_box_history_entry_media{ ushort(3520) };
inline constexpr phrase<> lng_credits_box_history_entry_message{ ushort(3521) };
inline constexpr phrase<lngtag_link> lng_credits_box_history_entry_about{ ushort(3522) };
inline constexpr phrase<> lng_credits_box_history_entry_about_link{ ushort(3523) };
inline constexpr phrase<> lng_credits_box_history_entry_reaction_name{ ushort(3524) };
inline constexpr phrase<> lng_credits_box_history_entry_subscription{ ushort(3525) };
inline constexpr phrase<> lng_credits_box_history_entry_gift_upgrade{ ushort(3526) };
inline constexpr phrase<> lng_credits_box_history_entry_gift_sold{ ushort(3527) };
inline constexpr phrase<> lng_credits_box_history_entry_gift_bought{ ushort(3528) };
inline constexpr phrase<> lng_credits_box_history_entry_gift_sold_to{ ushort(3529) };
inline constexpr phrase<> lng_credits_box_history_entry_gift_full_price{ ushort(3530) };
inline constexpr phrase<> lng_credits_box_history_entry_gift_bought_from{ ushort(3531) };
inline constexpr phrase<> lng_credits_subscription_section{ ushort(3532) };
inline constexpr phrase<> lng_credits_box_subscription_title{ ushort(3533) };
inline constexpr phrase<lngtag_emoji, lngtag_cost> lng_credits_subscription_subtitle{ ushort(3534) };
inline constexpr phrase<lngtag_total> lng_credits_subscriber_subtitle{ ushort(3535) };
inline constexpr phrase<> lng_credits_subscription_row_to{ ushort(3536) };
inline constexpr phrase<> lng_credits_subscription_row_to_bot{ ushort(3537) };
inline constexpr phrase<> lng_credits_subscription_row_to_business{ ushort(3538) };
inline constexpr phrase<> lng_credits_subscription_row_from{ ushort(3539) };
inline constexpr phrase<> lng_credits_subscription_row_next_on{ ushort(3540) };
inline constexpr phrase<> lng_credits_subscription_row_next_off{ ushort(3541) };
inline constexpr phrase<> lng_credits_subscription_row_next_none{ ushort(3542) };
inline constexpr phrase<> lng_credits_subscription_on_button{ ushort(3543) };
inline constexpr phrase<lngtag_date> lng_credits_subscription_on_about{ ushort(3544) };
inline constexpr phrase<> lng_credits_subscription_off_button{ ushort(3545) };
inline constexpr phrase<> lng_credits_subscription_off_rejoin_button{ ushort(3546) };
inline constexpr phrase<> lng_credits_subscription_off_about{ ushort(3547) };
inline constexpr phrase<lngtag_bot> lng_credits_subscription_off_by_bot_about{ ushort(3548) };
inline constexpr phrase<lngtag_date> lng_credits_subscription_status_on{ ushort(3549) };
inline constexpr phrase<lngtag_date> lng_credits_subscription_status_off{ ushort(3550) };
inline constexpr phrase<lngtag_date> lng_credits_subscription_status_none{ ushort(3551) };
inline constexpr phrase<> lng_credits_subscription_status_off_right{ ushort(3552) };
inline constexpr phrase<> lng_credits_subscription_status_none_right{ ushort(3553) };
inline constexpr phrase<> lng_credits_subscription_status_off_by_bot_right{ ushort(3554) };
inline constexpr phrase<lngtag_count> lng_credits_small_balance_title{ ushort(3555) };
inline constexpr phrase<lngtag_bot> lng_credits_small_balance_about{ ushort(3561) };
inline constexpr phrase<lngtag_channel> lng_credits_small_balance_reaction{ ushort(3562) };
inline constexpr phrase<lngtag_channel> lng_credits_small_balance_subscribe{ ushort(3563) };
inline constexpr phrase<lngtag_user> lng_credits_small_balance_star_gift{ ushort(3564) };
inline constexpr phrase<lngtag_user> lng_credits_small_balance_for_message{ ushort(3565) };
inline constexpr phrase<> lng_credits_small_balance_for_messages{ ushort(3566) };
inline constexpr phrase<lngtag_channel> lng_credits_small_balance_for_suggest{ ushort(3567) };
inline constexpr phrase<> lng_credits_small_balance_for_search{ ushort(3568) };
inline constexpr phrase<> lng_credits_small_balance_fallback{ ushort(3569) };
inline constexpr phrase<> lng_credits_purchase_blocked{ ushort(3570) };
inline constexpr phrase<lngtag_link> lng_credits_enough{ ushort(3571) };
inline constexpr phrase<> lng_credits_enough_link{ ushort(3572) };
inline constexpr phrase<> lng_credits_gift_title{ ushort(3573) };
inline constexpr phrase<> lng_location_title{ ushort(3574) };
inline constexpr phrase<> lng_location_about{ ushort(3575) };
inline constexpr phrase<> lng_location_address{ ushort(3576) };
inline constexpr phrase<> lng_location_set_map{ ushort(3577) };
inline constexpr phrase<> lng_location_fallback{ ushort(3578) };
inline constexpr phrase<> lng_hours_title{ ushort(3579) };
inline constexpr phrase<> lng_hours_about{ ushort(3580) };
inline constexpr phrase<> lng_hours_show{ ushort(3581) };
inline constexpr phrase<> lng_hours_time_zone{ ushort(3582) };
inline constexpr phrase<> lng_hours_monday{ ushort(3583) };
inline constexpr phrase<> lng_hours_tuesday{ ushort(3584) };
inline constexpr phrase<> lng_hours_wednesday{ ushort(3585) };
inline constexpr phrase<> lng_hours_thursday{ ushort(3586) };
inline constexpr phrase<> lng_hours_friday{ ushort(3587) };
inline constexpr phrase<> lng_hours_saturday{ ushort(3588) };
inline constexpr phrase<> lng_hours_sunday{ ushort(3589) };
inline constexpr phrase<> lng_hours_closed{ ushort(3590) };
inline constexpr phrase<> lng_hours_open_full{ ushort(3591) };
inline constexpr phrase<lngtag_time> lng_hours_next_day{ ushort(3592) };
inline constexpr phrase<lngtag_time> lng_hours_on_next_day{ ushort(3593) };
inline constexpr phrase<> lng_hours_time_zone_title{ ushort(3594) };
inline constexpr phrase<> lng_hours_add_button{ ushort(3595) };
inline constexpr phrase<> lng_hours_opening{ ushort(3596) };
inline constexpr phrase<> lng_hours_closing{ ushort(3597) };
inline constexpr phrase<> lng_hours_remove{ ushort(3598) };
inline constexpr phrase<> lng_hours_about_day{ ushort(3599) };
inline constexpr phrase<> lng_replies_title{ ushort(3600) };
inline constexpr phrase<> lng_replies_about{ ushort(3601) };
inline constexpr phrase<> lng_replies_add{ ushort(3602) };
inline constexpr phrase<> lng_replies_add_title{ ushort(3603) };
inline constexpr phrase<> lng_replies_add_shortcut{ ushort(3604) };
inline constexpr phrase<> lng_replies_add_placeholder{ ushort(3605) };
inline constexpr phrase<> lng_replies_add_exists{ ushort(3606) };
inline constexpr phrase<> lng_replies_empty_title{ ushort(3607) };
inline constexpr phrase<lngtag_shortcut> lng_replies_empty_about{ ushort(3608) };
inline constexpr phrase<> lng_replies_remove_title{ ushort(3609) };
inline constexpr phrase<> lng_replies_remove_text{ ushort(3610) };
inline constexpr phrase<> lng_replies_edit_title{ ushort(3611) };
inline constexpr phrase<> lng_replies_edit_about{ ushort(3612) };
inline constexpr phrase<> lng_replies_message_placeholder{ ushort(3613) };
inline constexpr phrase<> lng_replies_delete_sure{ ushort(3614) };
inline constexpr phrase<> lng_replies_error_occupied{ ushort(3615) };
inline constexpr phrase<> lng_replies_edit_button{ ushort(3616) };
inline constexpr phrase<> lng_greeting_title{ ushort(3617) };
inline constexpr phrase<> lng_greeting_about{ ushort(3618) };
inline constexpr phrase<> lng_greeting_enable{ ushort(3619) };
inline constexpr phrase<> lng_greeting_create{ ushort(3620) };
inline constexpr phrase<> lng_greeting_recipients{ ushort(3621) };
inline constexpr phrase<> lng_greeting_select{ ushort(3622) };
inline constexpr phrase<> lng_greeting_period_title{ ushort(3623) };
inline constexpr phrase<> lng_greeting_period_about{ ushort(3624) };
inline constexpr phrase<> lng_greeting_empty_title{ ushort(3625) };
inline constexpr phrase<> lng_greeting_empty_about{ ushort(3626) };
inline constexpr phrase<> lng_greeting_message_placeholder{ ushort(3627) };
inline constexpr phrase<> lng_greeting_limit_reached{ ushort(3628) };
inline constexpr phrase<> lng_greeting_recipients_empty{ ushort(3629) };
inline constexpr phrase<> lng_away_title{ ushort(3630) };
inline constexpr phrase<> lng_away_about{ ushort(3631) };
inline constexpr phrase<> lng_away_enable{ ushort(3632) };
inline constexpr phrase<> lng_away_create{ ushort(3633) };
inline constexpr phrase<> lng_away_schedule{ ushort(3634) };
inline constexpr phrase<> lng_away_schedule_always{ ushort(3635) };
inline constexpr phrase<> lng_away_schedule_outside{ ushort(3636) };
inline constexpr phrase<> lng_away_schedule_custom{ ushort(3637) };
inline constexpr phrase<> lng_away_custom_start{ ushort(3638) };
inline constexpr phrase<> lng_away_custom_end{ ushort(3639) };
inline constexpr phrase<> lng_away_offline_only{ ushort(3640) };
inline constexpr phrase<> lng_away_offline_only_about{ ushort(3641) };
inline constexpr phrase<> lng_away_recipients{ ushort(3642) };
inline constexpr phrase<> lng_away_select{ ushort(3643) };
inline constexpr phrase<> lng_away_empty_title{ ushort(3644) };
inline constexpr phrase<> lng_away_empty_about{ ushort(3645) };
inline constexpr phrase<> lng_away_message_placeholder{ ushort(3646) };
inline constexpr phrase<> lng_away_limit_reached{ ushort(3647) };
inline constexpr phrase<> lng_business_edit_messages{ ushort(3648) };
inline constexpr phrase<lngtag_count> lng_business_limit_reached{ ushort(3649) };
inline constexpr phrase<> lng_chatbots_title{ ushort(3655) };
inline constexpr phrase<lngtag_link> lng_chatbots_about{ ushort(3656) };
inline constexpr phrase<> lng_chatbots_about_link{ ushort(3657) };
inline constexpr phrase<> lng_chatbots_placeholder{ ushort(3658) };
inline constexpr phrase<> lng_chatbots_add_about{ ushort(3659) };
inline constexpr phrase<> lng_chatbots_access_title{ ushort(3660) };
inline constexpr phrase<> lng_chatbots_all_except{ ushort(3661) };
inline constexpr phrase<> lng_chatbots_selected{ ushort(3662) };
inline constexpr phrase<> lng_chatbots_excluded_title{ ushort(3663) };
inline constexpr phrase<> lng_chatbots_exclude_button{ ushort(3664) };
inline constexpr phrase<> lng_chatbots_included_title{ ushort(3665) };
inline constexpr phrase<> lng_chatbots_include_button{ ushort(3666) };
inline constexpr phrase<> lng_chatbots_exclude_about{ ushort(3667) };
inline constexpr phrase<> lng_chatbots_permissions_title{ ushort(3668) };
inline constexpr phrase<> lng_chatbots_warning_title{ ushort(3669) };
inline constexpr phrase<lngtag_bot> lng_chatbots_warning_both_text{ ushort(3670) };
inline constexpr phrase<lngtag_bot> lng_chatbots_warning_gifts_text{ ushort(3671) };
inline constexpr phrase<lngtag_bot> lng_chatbots_warning_stars_text{ ushort(3672) };
inline constexpr phrase<lngtag_bot> lng_chatbots_warning_username_text{ ushort(3673) };
inline constexpr phrase<> lng_chatbots_manage_messages{ ushort(3674) };
inline constexpr phrase<> lng_chatbots_read{ ushort(3675) };
inline constexpr phrase<> lng_chatbots_reply{ ushort(3676) };
inline constexpr phrase<> lng_chatbots_mark_as_read{ ushort(3677) };
inline constexpr phrase<> lng_chatbots_delete_sent{ ushort(3678) };
inline constexpr phrase<> lng_chatbots_delete_received{ ushort(3679) };
inline constexpr phrase<> lng_chatbots_manage_profile{ ushort(3680) };
inline constexpr phrase<> lng_chatbots_edit_name{ ushort(3681) };
inline constexpr phrase<> lng_chatbots_edit_bio{ ushort(3682) };
inline constexpr phrase<> lng_chatbots_edit_userpic{ ushort(3683) };
inline constexpr phrase<> lng_chatbots_edit_username{ ushort(3684) };
inline constexpr phrase<> lng_chatbots_manage_gifts{ ushort(3685) };
inline constexpr phrase<> lng_chatbots_view_gifts{ ushort(3686) };
inline constexpr phrase<> lng_chatbots_sell_gifts{ ushort(3687) };
inline constexpr phrase<> lng_chatbots_gift_settings{ ushort(3688) };
inline constexpr phrase<> lng_chatbots_transfer_gifts{ ushort(3689) };
inline constexpr phrase<> lng_chatbots_transfer_stars{ ushort(3690) };
inline constexpr phrase<> lng_chatbots_manage_stories{ ushort(3691) };
inline constexpr phrase<> lng_chatbots_remove{ ushort(3692) };
inline constexpr phrase<> lng_chatbots_not_found{ ushort(3693) };
inline constexpr phrase<> lng_chatbots_not_supported{ ushort(3694) };
inline constexpr phrase<> lng_chatbots_add{ ushort(3695) };
inline constexpr phrase<> lng_chatbots_info_url{ ushort(3696) };
inline constexpr phrase<> lng_chatbot_status_can_reply{ ushort(3697) };
inline constexpr phrase<> lng_chatbot_status_paused{ ushort(3698) };
inline constexpr phrase<> lng_chatbot_status_views{ ushort(3699) };
inline constexpr phrase<> lng_chatbot_button_pause{ ushort(3700) };
inline constexpr phrase<> lng_chatbot_button_resume{ ushort(3701) };
inline constexpr phrase<> lng_chatbot_menu_manage{ ushort(3702) };
inline constexpr phrase<> lng_chatbot_menu_remove{ ushort(3703) };
inline constexpr phrase<> lng_chatbot_menu_revoke{ ushort(3704) };
inline constexpr phrase<> lng_chat_intro_title{ ushort(3705) };
inline constexpr phrase<> lng_chat_intro_subtitle{ ushort(3706) };
inline constexpr phrase<> lng_chat_intro_default_title{ ushort(3707) };
inline constexpr phrase<> lng_chat_intro_default_message{ ushort(3708) };
inline constexpr phrase<> lng_chat_intro_enter_title{ ushort(3709) };
inline constexpr phrase<> lng_chat_intro_enter_message{ ushort(3710) };
inline constexpr phrase<> lng_chat_intro_choose_sticker{ ushort(3711) };
inline constexpr phrase<> lng_chat_intro_random_sticker{ ushort(3712) };
inline constexpr phrase<> lng_chat_intro_about{ ushort(3713) };
inline constexpr phrase<> lng_chat_intro_reset{ ushort(3714) };
inline constexpr phrase<> lng_chat_links_title{ ushort(3715) };
inline constexpr phrase<> lng_chat_links_about{ ushort(3716) };
inline constexpr phrase<> lng_chat_links_create_link{ ushort(3717) };
inline constexpr phrase<lngtag_links> lng_chat_links_footer{ ushort(3718) };
inline constexpr phrase<lngtag_username, lngtag_link> lng_chat_links_footer_both{ ushort(3719) };
inline constexpr phrase<> lng_chat_links_no_clicks{ ushort(3720) };
inline constexpr phrase<lngtag_count> lng_chat_links_clicks{ ushort(3721) };
inline constexpr phrase<> lng_chat_link_new_title{ ushort(3727) };
inline constexpr phrase<> lng_chat_link_edit_title{ ushort(3728) };
inline constexpr phrase<> lng_chat_link_description{ ushort(3729) };
inline constexpr phrase<> lng_chat_link_placeholder{ ushort(3730) };
inline constexpr phrase<> lng_chat_link_saved{ ushort(3731) };
inline constexpr phrase<> lng_chat_link_copy{ ushort(3732) };
inline constexpr phrase<> lng_chat_link_share{ ushort(3733) };
inline constexpr phrase<> lng_chat_link_rename{ ushort(3734) };
inline constexpr phrase<> lng_chat_link_delete{ ushort(3735) };
inline constexpr phrase<> lng_chat_link_name{ ushort(3736) };
inline constexpr phrase<> lng_chat_link_name_about{ ushort(3737) };
inline constexpr phrase<> lng_chat_link_delete_sure{ ushort(3738) };
inline constexpr phrase<> lng_chat_link_qr_title{ ushort(3739) };
inline constexpr phrase<> lng_chat_link_qr_about{ ushort(3740) };
inline constexpr phrase<> lng_chat_link_copied{ ushort(3741) };
inline constexpr phrase<> lng_boost_channel_button{ ushort(3742) };
inline constexpr phrase<> lng_boost_group_button{ ushort(3743) };
inline constexpr phrase<> lng_boost_again_button{ ushort(3744) };
inline constexpr phrase<> lng_boost_group_about{ ushort(3745) };
inline constexpr phrase<lngtag_count> lng_boost_level{ ushort(3746) };
inline constexpr phrase<lngtag_count> lng_boost_level_unlocks{ ushort(3752) };
inline constexpr phrase<> lng_boost_channel_title_first{ ushort(3758) };
inline constexpr phrase<> lng_boost_channel_title_first_group{ ushort(3759) };
inline constexpr phrase<lngtag_count, lngtag_channel> lng_boost_channel_needs_unlock{ ushort(3760) };
inline constexpr phrase<> lng_boost_channel_title_more{ ushort(3766) };
inline constexpr phrase<> lng_boost_channel_title_more_group{ ushort(3767) };
inline constexpr phrase<> lng_boost_channel_title_max{ ushort(3768) };
inline constexpr phrase<lngtag_channel> lng_boost_channel_you_title{ ushort(3769) };
inline constexpr phrase<> lng_boost_channel_reached_first{ ushort(3770) };
inline constexpr phrase<lngtag_count, lngtag_post> lng_boost_channel_reached_more{ ushort(3771) };
inline constexpr phrase<> lng_boost_channel_reached_first_group{ ushort(3777) };
inline constexpr phrase<lngtag_count, lngtag_post> lng_boost_channel_reached_more_group{ ushort(3778) };
inline constexpr phrase<lngtag_count> lng_boost_channel_post_stories{ ushort(3784) };
inline constexpr phrase<lngtag_channel> lng_boost_channel_features{ ushort(3790) };
inline constexpr phrase<> lng_boost_group_lift_restrictions{ ushort(3791) };
inline constexpr phrase<lngtag_count> lng_boost_group_lift_restrictions_many{ ushort(3792) };
inline constexpr phrase<> lng_boost_error_gifted_title{ ushort(3798) };
inline constexpr phrase<> lng_boost_error_gifted_text{ ushort(3799) };
inline constexpr phrase<> lng_boost_error_gifted_text_group{ ushort(3800) };
inline constexpr phrase<> lng_boost_need_more{ ushort(3801) };
inline constexpr phrase<lngtag_count, lngtag_channel> lng_boost_need_more_text{ ushort(3802) };
inline constexpr phrase<lngtag_count, lngtag_channel> lng_boost_need_more_again{ ushort(3808) };
inline constexpr phrase<> lng_boost_error_already_title{ ushort(3814) };
inline constexpr phrase<> lng_boost_error_already_text{ ushort(3815) };
inline constexpr phrase<> lng_boost_error_already_text_group{ ushort(3816) };
inline constexpr phrase<> lng_boost_error_premium_title{ ushort(3817) };
inline constexpr phrase<> lng_boost_error_premium_text_group{ ushort(3818) };
inline constexpr phrase<> lng_boost_error_premium_text{ ushort(3819) };
inline constexpr phrase<> lng_boost_error_premium_yes{ ushort(3820) };
inline constexpr phrase<> lng_boost_error_flood_title{ ushort(3821) };
inline constexpr phrase<lngtag_left> lng_boost_error_flood_text_group{ ushort(3822) };
inline constexpr phrase<lngtag_left> lng_boost_error_flood_text{ ushort(3823) };
inline constexpr phrase<lngtag_channel, lngtag_other> lng_boost_now_instead{ ushort(3824) };
inline constexpr phrase<> lng_boost_now_replace{ ushort(3825) };
inline constexpr phrase<> lng_boost_reassign_title{ ushort(3826) };
inline constexpr phrase<lngtag_channel, lngtag_gift> lng_boost_reassign_text{ ushort(3827) };
inline constexpr phrase<lngtag_count> lng_boost_reassign_gift{ ushort(3828) };
inline constexpr phrase<> lng_boost_remove_title{ ushort(3834) };
inline constexpr phrase<> lng_boost_reassign_button{ ushort(3835) };
inline constexpr phrase<lngtag_duration> lng_boost_available_in{ ushort(3836) };
inline constexpr phrase<lngtag_count> lng_boost_available_in_toast{ ushort(3837) };
inline constexpr phrase<lngtag_count, lngtag_channels> lng_boost_reassign_done{ ushort(3843) };
inline constexpr phrase<lngtag_count> lng_boost_reassign_channels{ ushort(3849) };
inline constexpr phrase<lngtag_count> lng_boost_reassign_groups{ ushort(3855) };
inline constexpr phrase<lngtag_count> lng_boost_reassign_mixed{ ushort(3861) };
inline constexpr phrase<> lng_boost_channel_title_color{ ushort(3867) };
inline constexpr phrase<lngtag_count> lng_boost_channel_needs_level_color{ ushort(3868) };
inline constexpr phrase<> lng_boost_channel_title_wallpaper{ ushort(3874) };
inline constexpr phrase<lngtag_count> lng_boost_channel_needs_level_wallpaper{ ushort(3875) };
inline constexpr phrase<lngtag_count> lng_boost_group_needs_level_wallpaper{ ushort(3881) };
inline constexpr phrase<> lng_boost_channel_title_status{ ushort(3887) };
inline constexpr phrase<lngtag_count> lng_boost_channel_needs_level_status{ ushort(3888) };
inline constexpr phrase<lngtag_count> lng_boost_group_needs_level_status{ ushort(3894) };
inline constexpr phrase<> lng_boost_channel_title_reactions{ ushort(3900) };
inline constexpr phrase<lngtag_count, lngtag_same_count> lng_boost_channel_needs_level_reactions{ ushort(3901) };
inline constexpr phrase<> lng_boost_channel_title_cpm{ ushort(3907) };
inline constexpr phrase<lngtag_count> lng_boost_channel_needs_level_cpm{ ushort(3908) };
inline constexpr phrase<> lng_boost_group_title_emoji{ ushort(3914) };
inline constexpr phrase<lngtag_count> lng_boost_group_needs_level_emoji{ ushort(3915) };
inline constexpr phrase<> lng_boost_channel_title_wear{ ushort(3921) };
inline constexpr phrase<lngtag_count> lng_boost_channel_needs_level_wear{ ushort(3922) };
inline constexpr phrase<> lng_boost_channel_ask{ ushort(3928) };
inline constexpr phrase<> lng_boost_channel_ask_button{ ushort(3929) };
inline constexpr phrase<> lng_boost_group_ask{ ushort(3930) };
inline constexpr phrase<> lng_boost_channel_title_autotranslate{ ushort(3931) };
inline constexpr phrase<lngtag_count> lng_boost_channel_needs_level_autotranslate{ ushort(3932) };
inline constexpr phrase<lngtag_count> lng_feature_stories{ ushort(3938) };
inline constexpr phrase<lngtag_count> lng_feature_reactions{ ushort(3944) };
inline constexpr phrase<lngtag_count> lng_feature_name_color_channel{ ushort(3950) };
inline constexpr phrase<lngtag_count> lng_feature_link_style_channel{ ushort(3956) };
inline constexpr phrase<> lng_feature_link_emoji{ ushort(3962) };
inline constexpr phrase<> lng_feature_emoji_status{ ushort(3963) };
inline constexpr phrase<lngtag_count> lng_feature_backgrounds_channel{ ushort(3964) };
inline constexpr phrase<> lng_feature_custom_background_channel{ ushort(3970) };
inline constexpr phrase<lngtag_count> lng_feature_backgrounds_group{ ushort(3971) };
inline constexpr phrase<> lng_feature_custom_background_group{ ushort(3977) };
inline constexpr phrase<> lng_feature_custom_emoji_pack{ ushort(3978) };
inline constexpr phrase<> lng_feature_transcribe{ ushort(3979) };
inline constexpr phrase<> lng_feature_autotranslate{ ushort(3980) };
inline constexpr phrase<> lng_edit_topics_enable{ ushort(3981) };
inline constexpr phrase<> lng_edit_topics_about{ ushort(3982) };
inline constexpr phrase<> lng_edit_topics_layout{ ushort(3983) };
inline constexpr phrase<> lng_edit_topics_layout_about{ ushort(3984) };
inline constexpr phrase<> lng_edit_topics_tabs{ ushort(3985) };
inline constexpr phrase<> lng_edit_topics_list{ ushort(3986) };
inline constexpr phrase<> lng_giveaway_new_title{ ushort(3987) };
inline constexpr phrase<> lng_giveaway_new_about{ ushort(3988) };
inline constexpr phrase<> lng_giveaway_new_about_group{ ushort(3989) };
inline constexpr phrase<> lng_giveaway_credits_new_about{ ushort(3990) };
inline constexpr phrase<> lng_giveaway_credits_new_about_group{ ushort(3991) };
inline constexpr phrase<> lng_giveaway_create_option{ ushort(3992) };
inline constexpr phrase<> lng_giveaway_create_subtitle{ ushort(3993) };
inline constexpr phrase<> lng_giveaway_award_option{ ushort(3994) };
inline constexpr phrase<> lng_giveaway_award_subtitle{ ushort(3995) };
inline constexpr phrase<lngtag_count> lng_giveaway_award_chosen{ ushort(3996) };
inline constexpr phrase<> lng_giveaway_quantity_title{ ushort(4002) };
inline constexpr phrase<lngtag_count> lng_giveaway_quantity{ ushort(4003) };
inline constexpr phrase<> lng_giveaway_quantity_about{ ushort(4009) };
inline constexpr phrase<> lng_giveaway_channels_title{ ushort(4010) };
inline constexpr phrase<lngtag_count> lng_giveaway_channels_this{ ushort(4011) };
inline constexpr phrase<lngtag_count> lng_giveaway_channels_this_group{ ushort(4017) };
inline constexpr phrase<> lng_giveaway_channels_add{ ushort(4023) };
inline constexpr phrase<> lng_giveaway_channels_about{ ushort(4024) };
inline constexpr phrase<> lng_giveaway_users_title{ ushort(4025) };
inline constexpr phrase<> lng_giveaway_users_all{ ushort(4026) };
inline constexpr phrase<> lng_giveaway_users_all_group{ ushort(4027) };
inline constexpr phrase<> lng_giveaway_users_from_all_countries{ ushort(4028) };
inline constexpr phrase<lngtag_country> lng_giveaway_users_from_one_country{ ushort(4029) };
inline constexpr phrase<lngtag_count> lng_giveaway_users_from_countries{ ushort(4030) };
inline constexpr phrase<> lng_giveaway_users_new{ ushort(4036) };
inline constexpr phrase<> lng_giveaway_users_new_group{ ushort(4037) };
inline constexpr phrase<> lng_giveaway_users_about{ ushort(4038) };
inline constexpr phrase<> lng_giveaway_users_about_group{ ushort(4039) };
inline constexpr phrase<> lng_giveaway_start{ ushort(4040) };
inline constexpr phrase<> lng_giveaway_award{ ushort(4041) };
inline constexpr phrase<> lng_giveaway_random_button{ ushort(4042) };
inline constexpr phrase<> lng_giveaway_start_sure{ ushort(4043) };
inline constexpr phrase<> lng_giveaway_date_title{ ushort(4044) };
inline constexpr phrase<> lng_giveaway_date{ ushort(4045) };
inline constexpr phrase<lngtag_count> lng_giveaway_date_about{ ushort(4046) };
inline constexpr phrase<lngtag_count> lng_giveaway_date_about_group{ ushort(4052) };
inline constexpr phrase<lngtag_count> lng_giveaway_duration_title{ ushort(4058) };
inline constexpr phrase<lngtag_price, lngtag_amount> lng_giveaway_duration_price{ ushort(4064) };
inline constexpr phrase<> lng_giveaway_date_select{ ushort(4065) };
inline constexpr phrase<> lng_giveaway_date_confirm{ ushort(4066) };
inline constexpr phrase<> lng_giveaway_recipients_save{ ushort(4067) };
inline constexpr phrase<> lng_giveaway_recipients_deselect{ ushort(4068) };
inline constexpr phrase<lngtag_count> lng_giveaway_maximum_countries_error{ ushort(4069) };
inline constexpr phrase<lngtag_count> lng_giveaway_maximum_channels_error{ ushort(4075) };
inline constexpr phrase<lngtag_count> lng_giveaway_maximum_users_error{ ushort(4081) };
inline constexpr phrase<> lng_giveaway_channels_confirm_title{ ushort(4087) };
inline constexpr phrase<> lng_giveaway_channels_confirm_about{ ushort(4088) };
inline constexpr phrase<> lng_giveaway_additional_prizes{ ushort(4089) };
inline constexpr phrase<> lng_giveaway_additional_about{ ushort(4090) };
inline constexpr phrase<> lng_giveaway_additional_prizes_ph{ ushort(4091) };
inline constexpr phrase<lngtag_count, lngtag_duration> lng_giveaway_prizes_just_premium{ ushort(4092) };
inline constexpr phrase<lngtag_count, lngtag_prize, lngtag_duration> lng_giveaway_prizes_additional{ ushort(4098) };
inline constexpr phrase<> lng_giveaway_additional_credits_about{ ushort(4104) };
inline constexpr phrase<lngtag_count> lng_giveaway_prizes_just_credits{ ushort(4105) };
inline constexpr phrase<lngtag_count, lngtag_prize, lngtag_amount> lng_giveaway_prizes_additional_credits{ ushort(4111) };
inline constexpr phrase<lngtag_count> lng_giveaway_prizes_additional_credits_amount{ ushort(4117) };
inline constexpr phrase<> lng_giveaway_show_winners{ ushort(4123) };
inline constexpr phrase<> lng_giveaway_show_winners_about{ ushort(4124) };
inline constexpr phrase<> lng_giveaway_created_title{ ushort(4125) };
inline constexpr phrase<lngtag_link> lng_giveaway_created_body{ ushort(4126) };
inline constexpr phrase<lngtag_link> lng_giveaway_created_body_group{ ushort(4127) };
inline constexpr phrase<> lng_giveaway_awarded_title{ ushort(4128) };
inline constexpr phrase<lngtag_link> lng_giveaway_awarded_body{ ushort(4129) };
inline constexpr phrase<lngtag_link> lng_giveaway_awarded_body_group{ ushort(4130) };
inline constexpr phrase<> lng_giveaway_created_link{ ushort(4131) };
inline constexpr phrase<> lng_giveaway_credits_options_title{ ushort(4132) };
inline constexpr phrase<lngtag_count> lng_giveaway_credits_option_status{ ushort(4133) };
inline constexpr phrase<> lng_giveaway_credits_options_about{ ushort(4139) };
inline constexpr phrase<> lng_giveaway_credits_quantity_title{ ushort(4140) };
inline constexpr phrase<> lng_giveaway_credits_quantity_about{ ushort(4141) };
inline constexpr phrase<> lng_prize_title{ ushort(4142) };
inline constexpr phrase<lngtag_channel> lng_prize_about{ ushort(4143) };
inline constexpr phrase<lngtag_duration> lng_prize_duration{ ushort(4144) };
inline constexpr phrase<lngtag_amount> lng_prize_credits{ ushort(4145) };
inline constexpr phrase<lngtag_count> lng_prize_credits_amount{ ushort(4146) };
inline constexpr phrase<lngtag_channel> lng_prize_gift_about{ ushort(4152) };
inline constexpr phrase<lngtag_duration> lng_prize_gift_duration{ ushort(4153) };
inline constexpr phrase<> lng_prize_open{ ushort(4154) };
inline constexpr phrase<> lng_prize_unclaimed_title{ ushort(4155) };
inline constexpr phrase<lngtag_channel> lng_prize_unclaimed_about{ ushort(4156) };
inline constexpr phrase<lngtag_duration> lng_prize_unclaimed_duration{ ushort(4157) };
inline constexpr phrase<lngtag_count> lng_prizes_title{ ushort(4158) };
inline constexpr phrase<lngtag_count, lngtag_prize> lng_prizes_additional{ ushort(4164) };
inline constexpr phrase<> lng_prizes_additional_with{ ushort(4170) };
inline constexpr phrase<lngtag_count, lngtag_duration> lng_prizes_about{ ushort(4171) };
inline constexpr phrase<lngtag_amount> lng_prizes_credits_about_single{ ushort(4177) };
inline constexpr phrase<lngtag_count, lngtag_amount> lng_prizes_credits_about{ ushort(4178) };
inline constexpr phrase<lngtag_count> lng_prizes_credits_about_amount{ ushort(4184) };
inline constexpr phrase<> lng_prizes_participants{ ushort(4190) };
inline constexpr phrase<lngtag_count> lng_prizes_participants_all{ ushort(4191) };
inline constexpr phrase<lngtag_count> lng_prizes_participants_all_group{ ushort(4197) };
inline constexpr phrase<lngtag_count> lng_prizes_participants_all_mixed{ ushort(4203) };
inline constexpr phrase<lngtag_count> lng_prizes_participants_new{ ushort(4209) };
inline constexpr phrase<lngtag_count> lng_prizes_participants_new_group{ ushort(4215) };
inline constexpr phrase<lngtag_count> lng_prizes_participants_new_mixed{ ushort(4221) };
inline constexpr phrase<lngtag_countries> lng_prizes_countries{ ushort(4227) };
inline constexpr phrase<lngtag_countries, lngtag_country> lng_prizes_countries_and_one{ ushort(4228) };
inline constexpr phrase<lngtag_countries, lngtag_country> lng_prizes_countries_and_last{ ushort(4229) };
inline constexpr phrase<> lng_prizes_date{ ushort(4230) };
inline constexpr phrase<> lng_prizes_how_works{ ushort(4231) };
inline constexpr phrase<> lng_prizes_how_title{ ushort(4232) };
inline constexpr phrase<> lng_prizes_end_title{ ushort(4233) };
inline constexpr phrase<lngtag_admins> lng_prizes_how_text{ ushort(4234) };
inline constexpr phrase<lngtag_admins> lng_prizes_end_text{ ushort(4235) };
inline constexpr phrase<lngtag_count, lngtag_channel, lngtag_duration> lng_prizes_admins{ ushort(4236) };
inline constexpr phrase<lngtag_count, lngtag_channel, lngtag_duration> lng_prizes_admins_group{ ushort(4242) };
inline constexpr phrase<lngtag_channel, lngtag_amount> lng_prizes_credits_admins{ ushort(4248) };
inline constexpr phrase<lngtag_channel, lngtag_amount> lng_prizes_credits_admins_group{ ushort(4249) };
inline constexpr phrase<lngtag_count> lng_prizes_credits_admins_amount{ ushort(4250) };
inline constexpr phrase<lngtag_count, lngtag_channel, lngtag_prize> lng_prizes_additional_added{ ushort(4256) };
inline constexpr phrase<lngtag_count, lngtag_channel, lngtag_prize> lng_prizes_additional_added_group{ ushort(4262) };
inline constexpr phrase<lngtag_date, lngtag_winners> lng_prizes_how_when_finish{ ushort(4268) };
inline constexpr phrase<lngtag_date, lngtag_winners> lng_prizes_end_when_finish{ ushort(4269) };
inline constexpr phrase<lngtag_count> lng_prizes_end_activated{ ushort(4270) };
inline constexpr phrase<lngtag_count, lngtag_channel> lng_prizes_winners_all_of_one{ ushort(4276) };
inline constexpr phrase<lngtag_count, lngtag_channel> lng_prizes_winners_all_of_one_group{ ushort(4282) };
inline constexpr phrase<lngtag_count, lngtag_channel> lng_prizes_winners_all_of_many{ ushort(4288) };
inline constexpr phrase<lngtag_count, lngtag_channel> lng_prizes_winners_all_of_many_group{ ushort(4294) };
inline constexpr phrase<lngtag_count, lngtag_channel, lngtag_start_date> lng_prizes_winners_new_of_one{ ushort(4300) };
inline constexpr phrase<lngtag_count, lngtag_channel, lngtag_start_date> lng_prizes_winners_new_of_many{ ushort(4306) };
inline constexpr phrase<lngtag_channel, lngtag_date> lng_prizes_how_participate_one{ ushort(4312) };
inline constexpr phrase<lngtag_channel, lngtag_date> lng_prizes_how_participate_many{ ushort(4313) };
inline constexpr phrase<lngtag_channel> lng_prizes_how_no_admin{ ushort(4314) };
inline constexpr phrase<lngtag_channel> lng_prizes_how_no_admin_group{ ushort(4315) };
inline constexpr phrase<lngtag_date> lng_prizes_how_no_joined{ ushort(4316) };
inline constexpr phrase<lngtag_date> lng_prizes_how_no_joined_group{ ushort(4317) };
inline constexpr phrase<> lng_prizes_how_no_country{ ushort(4318) };
inline constexpr phrase<lngtag_channel> lng_prizes_how_yes_joined_one{ ushort(4319) };
inline constexpr phrase<lngtag_channel> lng_prizes_how_yes_joined_many{ ushort(4320) };
inline constexpr phrase<lngtag_cup> lng_prizes_you_won{ ushort(4321) };
inline constexpr phrase<lngtag_amount, lngtag_cup> lng_prizes_you_won_credits{ ushort(4322) };
inline constexpr phrase<lngtag_count> lng_prizes_you_won_credits_amount{ ushort(4323) };
inline constexpr phrase<> lng_prizes_view_prize{ ushort(4329) };
inline constexpr phrase<> lng_prizes_you_didnt{ ushort(4330) };
inline constexpr phrase<> lng_prizes_cancelled{ ushort(4331) };
inline constexpr phrase<> lng_prizes_cancelled_group{ ushort(4332) };
inline constexpr phrase<lngtag_amount> lng_prizes_badge{ ushort(4333) };
inline constexpr phrase<> lng_prizes_results_title{ ushort(4334) };
inline constexpr phrase<> lng_prizes_results_title_one{ ushort(4335) };
inline constexpr phrase<lngtag_count, lngtag_link> lng_prizes_results_about{ ushort(4336) };
inline constexpr phrase<> lng_prizes_results_link{ ushort(4342) };
inline constexpr phrase<> lng_prizes_results_winner{ ushort(4343) };
inline constexpr phrase<> lng_prizes_results_winners{ ushort(4344) };
inline constexpr phrase<lngtag_count> lng_prizes_results_more{ ushort(4345) };
inline constexpr phrase<> lng_prizes_results_one{ ushort(4351) };
inline constexpr phrase<> lng_prizes_results_all{ ushort(4352) };
inline constexpr phrase<lngtag_count> lng_prizes_credits_results_one{ ushort(4353) };
inline constexpr phrase<lngtag_count> lng_prizes_credits_results_all{ ushort(4359) };
inline constexpr phrase<> lng_prizes_results_some{ ushort(4365) };
inline constexpr phrase<> lng_gift_link_title{ ushort(4366) };
inline constexpr phrase<> lng_gift_link_about{ ushort(4367) };
inline constexpr phrase<> lng_gift_link_label_from{ ushort(4368) };
inline constexpr phrase<> lng_gift_link_label_to{ ushort(4369) };
inline constexpr phrase<> lng_gift_link_label_to_unclaimed{ ushort(4370) };
inline constexpr phrase<> lng_gift_link_label_gift{ ushort(4371) };
inline constexpr phrase<lngtag_duration> lng_gift_link_gift_premium{ ushort(4372) };
inline constexpr phrase<> lng_gift_link_label_reason{ ushort(4373) };
inline constexpr phrase<> lng_gift_link_reason_giveaway{ ushort(4374) };
inline constexpr phrase<> lng_gift_link_reason_unclaimed{ ushort(4375) };
inline constexpr phrase<> lng_gift_link_reason_chosen{ ushort(4376) };
inline constexpr phrase<> lng_gift_link_label_date{ ushort(4377) };
inline constexpr phrase<> lng_gift_link_label_first_sale{ ushort(4378) };
inline constexpr phrase<> lng_gift_link_label_last_sale{ ushort(4379) };
inline constexpr phrase<> lng_gift_link_label_value{ ushort(4380) };
inline constexpr phrase<lngtag_link> lng_gift_link_also_send{ ushort(4381) };
inline constexpr phrase<> lng_gift_link_also_send_link{ ushort(4382) };
inline constexpr phrase<> lng_gift_link_use{ ushort(4383) };
inline constexpr phrase<> lng_gift_link_already_title{ ushort(4384) };
inline constexpr phrase<lngtag_date, lngtag_link> lng_gift_link_already_about{ ushort(4385) };
inline constexpr phrase<> lng_gift_link_already_link{ ushort(4386) };
inline constexpr phrase<> lng_gift_link_used_title{ ushort(4387) };
inline constexpr phrase<> lng_gift_link_used_about{ ushort(4388) };
inline constexpr phrase<lngtag_date> lng_gift_link_used_footer{ ushort(4389) };
inline constexpr phrase<> lng_gift_link_expired{ ushort(4390) };
inline constexpr phrase<lngtag_user> lng_gift_link_pending_about{ ushort(4391) };
inline constexpr phrase<> lng_gift_link_pending_toast{ ushort(4392) };
inline constexpr phrase<> lng_gift_link_pending_footer{ ushort(4393) };
inline constexpr phrase<lngtag_count> lng_gift_stars_title{ ushort(4394) };
inline constexpr phrase<lngtag_user> lng_gift_stars_outgoing{ ushort(4400) };
inline constexpr phrase<> lng_gift_stars_incoming{ ushort(4401) };
inline constexpr phrase<> lng_gift_until{ ushort(4402) };
inline constexpr phrase<lngtag_count> lng_gift_ton_amount{ ushort(4403) };
inline constexpr phrase<> lng_gift_premium_title{ ushort(4409) };
inline constexpr phrase<lngtag_count> lng_gift_premium_text{ ushort(4410) };
inline constexpr phrase<> lng_gift_premium_or_stars{ ushort(4416) };
inline constexpr phrase<> lng_gift_premium_subtitle{ ushort(4417) };
inline constexpr phrase<lngtag_name, lngtag_features> lng_gift_premium_about{ ushort(4418) };
inline constexpr phrase<> lng_gift_premium_features{ ushort(4419) };
inline constexpr phrase<> lng_gift_premium_label{ ushort(4420) };
inline constexpr phrase<lngtag_amount> lng_gift_premium_by_stars{ ushort(4421) };
inline constexpr phrase<> lng_gift_stars_subtitle{ ushort(4422) };
inline constexpr phrase<lngtag_name, lngtag_link> lng_gift_stars_about{ ushort(4423) };
inline constexpr phrase<> lng_gift_stars_link{ ushort(4424) };
inline constexpr phrase<> lng_gift_stars_limited{ ushort(4425) };
inline constexpr phrase<> lng_gift_stars_sold_out{ ushort(4426) };
inline constexpr phrase<> lng_gift_stars_resale{ ushort(4427) };
inline constexpr phrase<> lng_gift_stars_on_sale{ ushort(4428) };
inline constexpr phrase<> lng_gift_stars_premium{ ushort(4429) };
inline constexpr phrase<> lng_gift_stars_tabs_all{ ushort(4430) };
inline constexpr phrase<> lng_gift_stars_tabs_my{ ushort(4431) };
inline constexpr phrase<> lng_gift_stars_tabs_limited{ ushort(4432) };
inline constexpr phrase<> lng_gift_stars_tabs_in_stock{ ushort(4433) };
inline constexpr phrase<> lng_gift_stars_tabs_resale{ ushort(4434) };
inline constexpr phrase<> lng_gift_send_title{ ushort(4435) };
inline constexpr phrase<> lng_gift_send_message{ ushort(4436) };
inline constexpr phrase<> lng_gift_send_anonymous{ ushort(4437) };
inline constexpr phrase<lngtag_amount> lng_gift_send_pay_with_stars{ ushort(4438) };
inline constexpr phrase<lngtag_amount, lngtag_link> lng_gift_send_stars_balance{ ushort(4439) };
inline constexpr phrase<> lng_gift_send_stars_balance_link{ ushort(4440) };
inline constexpr phrase<> lng_gift_send_anonymous_self{ ushort(4441) };
inline constexpr phrase<lngtag_user, lngtag_recipient> lng_gift_send_anonymous_about{ ushort(4442) };
inline constexpr phrase<lngtag_user, lngtag_recipient> lng_gift_send_anonymous_about_paid{ ushort(4443) };
inline constexpr phrase<> lng_gift_send_anonymous_about_channel{ ushort(4444) };
inline constexpr phrase<lngtag_price> lng_gift_send_unique{ ushort(4445) };
inline constexpr phrase<lngtag_user, lngtag_link> lng_gift_send_unique_about{ ushort(4446) };
inline constexpr phrase<lngtag_name, lngtag_link> lng_gift_send_unique_about_channel{ ushort(4447) };
inline constexpr phrase<> lng_gift_send_unique_link{ ushort(4448) };
inline constexpr phrase<lngtag_user> lng_gift_send_premium_about{ ushort(4449) };
inline constexpr phrase<lngtag_count> lng_gift_send_limited_sold{ ushort(4450) };
inline constexpr phrase<lngtag_count> lng_gift_send_limited_left{ ushort(4456) };
inline constexpr phrase<lngtag_cost> lng_gift_send_button{ ushort(4462) };
inline constexpr phrase<lngtag_cost> lng_gift_send_button_self{ ushort(4463) };
inline constexpr phrase<lngtag_name> lng_gift_buy_resale_title{ ushort(4464) };
inline constexpr phrase<lngtag_cost> lng_gift_buy_resale_button{ ushort(4465) };
inline constexpr phrase<lngtag_cost> lng_gift_buy_resale_equals{ ushort(4466) };
inline constexpr phrase<> lng_gift_buy_resale_only_ton{ ushort(4467) };
inline constexpr phrase<> lng_gift_buy_resale_pay_stars{ ushort(4468) };
inline constexpr phrase<> lng_gift_buy_resale_pay_ton{ ushort(4469) };
inline constexpr phrase<lngtag_name, lngtag_price, lngtag_user> lng_gift_buy_resale_confirm{ ushort(4470) };
inline constexpr phrase<lngtag_name, lngtag_price> lng_gift_buy_resale_confirm_self{ ushort(4471) };
inline constexpr phrase<> lng_gift_buy_price_change_title{ ushort(4472) };
inline constexpr phrase<lngtag_price> lng_gift_buy_price_change_text{ ushort(4473) };
inline constexpr phrase<> lng_gift_sent_title{ ushort(4474) };
inline constexpr phrase<lngtag_user> lng_gift_sent_resale_done{ ushort(4475) };
inline constexpr phrase<lngtag_gift> lng_gift_sent_resale_done_self{ ushort(4476) };
inline constexpr phrase<lngtag_count> lng_gift_sent_about{ ushort(4477) };
inline constexpr phrase<lngtag_count> lng_gift_sent_finished{ ushort(4483) };
inline constexpr phrase<lngtag_count> lng_gift_sent_remains{ ushort(4489) };
inline constexpr phrase<> lng_gift_limited_of_one{ ushort(4495) };
inline constexpr phrase<lngtag_amount> lng_gift_limited_of_count{ ushort(4496) };
inline constexpr phrase<> lng_gift_collectible_tag{ ushort(4497) };
inline constexpr phrase<> lng_gift_view_unpack{ ushort(4498) };
inline constexpr phrase<> lng_gift_anonymous_hint{ ushort(4499) };
inline constexpr phrase<> lng_gift_anonymous_hint_channel{ ushort(4500) };
inline constexpr phrase<> lng_gift_hidden_hint{ ushort(4501) };
inline constexpr phrase<> lng_gift_hidden_unique{ ushort(4502) };
inline constexpr phrase<> lng_gift_visible_hint{ ushort(4503) };
inline constexpr phrase<> lng_gift_hidden_hint_channel{ ushort(4504) };
inline constexpr phrase<> lng_gift_visible_hint_channel{ ushort(4505) };
inline constexpr phrase<lngtag_link> lng_gift_in_blockchain{ ushort(4506) };
inline constexpr phrase<lngtag_arrow> lng_gift_in_blockchain_link_arrow{ ushort(4507) };
inline constexpr phrase<lngtag_arrow> lng_gift_visible_hide_arrow{ ushort(4508) };
inline constexpr phrase<lngtag_arrow> lng_gift_visible_show_arrow{ ushort(4509) };
inline constexpr phrase<> lng_gift_show_on_page{ ushort(4510) };
inline constexpr phrase<> lng_gift_show_on_channel{ ushort(4511) };
inline constexpr phrase<> lng_gift_availability{ ushort(4512) };
inline constexpr phrase<> lng_gift_from_hidden{ ushort(4513) };
inline constexpr phrase<> lng_gift_subtitle_birthdays{ ushort(4514) };
inline constexpr phrase<lngtag_emoji> lng_gift_list_birthday_status_today{ ushort(4515) };
inline constexpr phrase<> lng_gift_list_birthday_status_yesterday{ ushort(4516) };
inline constexpr phrase<> lng_gift_list_birthday_status_tomorrow{ ushort(4517) };
inline constexpr phrase<> lng_gift_self_status{ ushort(4518) };
inline constexpr phrase<> lng_gift_self_title{ ushort(4519) };
inline constexpr phrase<> lng_gift_self_about{ ushort(4520) };
inline constexpr phrase<> lng_gift_channel_title{ ushort(4521) };
inline constexpr phrase<lngtag_name> lng_gift_channel_about{ ushort(4522) };
inline constexpr phrase<lngtag_name> lng_gift_released_by{ ushort(4523) };
inline constexpr phrase<> lng_gift_unique_owner{ ushort(4524) };
inline constexpr phrase<> lng_gift_unique_address_copied{ ushort(4525) };
inline constexpr phrase<> lng_gift_unique_status{ ushort(4526) };
inline constexpr phrase<> lng_gift_unique_status_non{ ushort(4527) };
inline constexpr phrase<> lng_gift_unique_upgrade{ ushort(4528) };
inline constexpr phrase<> lng_gift_unique_upgrade_next{ ushort(4529) };
inline constexpr phrase<> lng_gift_unique_gift_upgrade{ ushort(4530) };
inline constexpr phrase<lngtag_index> lng_gift_unique_number{ ushort(4531) };
inline constexpr phrase<lngtag_index, lngtag_name> lng_gift_unique_number_by{ ushort(4532) };
inline constexpr phrase<> lng_gift_unique_model{ ushort(4533) };
inline constexpr phrase<> lng_gift_unique_backdrop{ ushort(4534) };
inline constexpr phrase<> lng_gift_unique_symbol{ ushort(4535) };
inline constexpr phrase<lngtag_percent> lng_gift_unique_rarity{ ushort(4536) };
inline constexpr phrase<> lng_gift_unique_availability_label{ ushort(4537) };
inline constexpr phrase<lngtag_count, lngtag_amount> lng_gift_unique_availability{ ushort(4538) };
inline constexpr phrase<> lng_gift_unique_value{ ushort(4544) };
inline constexpr phrase<> lng_gift_unique_value_learn_more{ ushort(4545) };
inline constexpr phrase<lngtag_recipient, lngtag_date> lng_gift_unique_info{ ushort(4546) };
inline constexpr phrase<lngtag_from, lngtag_recipient, lngtag_date> lng_gift_unique_info_sender{ ushort(4547) };
inline constexpr phrase<lngtag_from, lngtag_recipient, lngtag_date, lngtag_text> lng_gift_unique_info_sender_comment{ ushort(4548) };
inline constexpr phrase<lngtag_recipient, lngtag_date> lng_gift_unique_info_reciever{ ushort(4549) };
inline constexpr phrase<lngtag_recipient, lngtag_date, lngtag_text> lng_gift_unique_info_reciever_comment{ ushort(4550) };
inline constexpr phrase<lngtag_count, lngtag_amount> lng_gift_availability_left{ ushort(4551) };
inline constexpr phrase<lngtag_amount> lng_gift_availability_none{ ushort(4557) };
inline constexpr phrase<lngtag_gift> lng_gift_value_about_average{ ushort(4558) };
inline constexpr phrase<lngtag_gift, lngtag_platform> lng_gift_value_about_last{ ushort(4559) };
inline constexpr phrase<> lng_gift_value_initial_sale{ ushort(4560) };
inline constexpr phrase<> lng_gift_value_initial_price{ ushort(4561) };
inline constexpr phrase<lngtag_stars, lngtag_amount> lng_gift_value_initial_price_value{ ushort(4562) };
inline constexpr phrase<> lng_gift_value_last_sale{ ushort(4563) };
inline constexpr phrase<> lng_gift_value_last_price{ ushort(4564) };
inline constexpr phrase<> lng_gift_value_minimum_price{ ushort(4565) };
inline constexpr phrase<lngtag_amount, lngtag_gift> lng_gift_value_minimum_price_tooltip{ ushort(4566) };
inline constexpr phrase<> lng_gift_vlaue_average_price{ ushort(4567) };
inline constexpr phrase<lngtag_amount, lngtag_gift> lng_gift_value_average_price_tooltip{ ushort(4568) };
inline constexpr phrase<lngtag_count, lngtag_emoji, lngtag_platform, lngtag_arrow> lng_gift_value_availability{ ushort(4569) };
inline constexpr phrase<> lng_gift_value_telegram{ ushort(4575) };
inline constexpr phrase<> lng_gift_value_fragment{ ushort(4576) };
inline constexpr phrase<lngtag_count> lng_gift_convert_to_stars{ ushort(4577) };
inline constexpr phrase<> lng_gift_convert_sure_title{ ushort(4583) };
inline constexpr phrase<lngtag_count, lngtag_user> lng_gift_convert_sure_confirm{ ushort(4584) };
inline constexpr phrase<lngtag_count, lngtag_channel> lng_gift_convert_sure_confirm_channel{ ushort(4590) };
inline constexpr phrase<lngtag_count> lng_gift_convert_sure_limit{ ushort(4596) };
inline constexpr phrase<> lng_gift_convert_sure_caution{ ushort(4602) };
inline constexpr phrase<> lng_gift_convert_sure{ ushort(4603) };
inline constexpr phrase<> lng_gift_display_done{ ushort(4604) };
inline constexpr phrase<> lng_gift_display_done_channel{ ushort(4605) };
inline constexpr phrase<> lng_gift_display_done_hide{ ushort(4606) };
inline constexpr phrase<> lng_gift_display_done_hide_channel{ ushort(4607) };
inline constexpr phrase<lngtag_gift> lng_gift_pinned_done_title{ ushort(4608) };
inline constexpr phrase<> lng_gift_pinned_done{ ushort(4609) };
inline constexpr phrase<lngtag_gift> lng_gift_pinned_done_replaced{ ushort(4610) };
inline constexpr phrase<lngtag_count> lng_gift_got_stars{ ushort(4611) };
inline constexpr phrase<lngtag_count> lng_gift_channel_got{ ushort(4617) };
inline constexpr phrase<> lng_gift_sold_out_title{ ushort(4623) };
inline constexpr phrase<lngtag_count> lng_gift_sold_out_text{ ushort(4624) };
inline constexpr phrase<> lng_gift_send_small{ ushort(4630) };
inline constexpr phrase<lngtag_count> lng_gift_sell_small{ ushort(4631) };
inline constexpr phrase<> lng_gift_upgrade_title{ ushort(4637) };
inline constexpr phrase<> lng_gift_upgrade_about{ ushort(4638) };
inline constexpr phrase<> lng_gift_upgrade_preview_title{ ushort(4639) };
inline constexpr phrase<lngtag_name> lng_gift_upgrade_preview_about{ ushort(4640) };
inline constexpr phrase<lngtag_name> lng_gift_upgrade_preview_about_channel{ ushort(4641) };
inline constexpr phrase<> lng_gift_upgrade_unique_title{ ushort(4642) };
inline constexpr phrase<> lng_gift_upgrade_unique_about{ ushort(4643) };
inline constexpr phrase<lngtag_name> lng_gift_upgrade_unique_about_user{ ushort(4644) };
inline constexpr phrase<lngtag_name> lng_gift_upgrade_unique_about_channel{ ushort(4645) };
inline constexpr phrase<> lng_gift_upgrade_transferable_title{ ushort(4646) };
inline constexpr phrase<> lng_gift_upgrade_transferable_about{ ushort(4647) };
inline constexpr phrase<lngtag_name> lng_gift_upgrade_transferable_about_user{ ushort(4648) };
inline constexpr phrase<lngtag_name> lng_gift_upgrade_transferable_about_channel{ ushort(4649) };
inline constexpr phrase<> lng_gift_upgrade_tradable_title{ ushort(4650) };
inline constexpr phrase<> lng_gift_upgrade_tradable_about{ ushort(4651) };
inline constexpr phrase<lngtag_name> lng_gift_upgrade_tradable_about_user{ ushort(4652) };
inline constexpr phrase<lngtag_name> lng_gift_upgrade_tradable_about_channel{ ushort(4653) };
inline constexpr phrase<lngtag_price> lng_gift_upgrade_button{ ushort(4654) };
inline constexpr phrase<> lng_gift_upgrade_free{ ushort(4655) };
inline constexpr phrase<> lng_gift_upgrade_confirm{ ushort(4656) };
inline constexpr phrase<> lng_gift_upgrade_add_my{ ushort(4657) };
inline constexpr phrase<> lng_gift_upgrade_add_my_comment{ ushort(4658) };
inline constexpr phrase<> lng_gift_upgrade_add_sender{ ushort(4659) };
inline constexpr phrase<> lng_gift_upgrade_add_comment{ ushort(4660) };
inline constexpr phrase<> lng_gift_upgraded_title{ ushort(4661) };
inline constexpr phrase<lngtag_name> lng_gift_upgraded_about{ ushort(4662) };
inline constexpr phrase<> lng_gift_upgrade_gifted_title{ ushort(4663) };
inline constexpr phrase<lngtag_name> lng_gift_upgrade_gifted_about{ ushort(4664) };
inline constexpr phrase<lngtag_name> lng_gift_upgrade_gifted_about_channel{ ushort(4665) };
inline constexpr phrase<> lng_gift_transferred_title{ ushort(4666) };
inline constexpr phrase<lngtag_name, lngtag_recipient> lng_gift_transferred_about{ ushort(4667) };
inline constexpr phrase<lngtag_name> lng_gift_transfer_title{ ushort(4668) };
inline constexpr phrase<> lng_gift_transfer_via_blockchain{ ushort(4669) };
inline constexpr phrase<> lng_gift_transfer_password_title{ ushort(4670) };
inline constexpr phrase<> lng_gift_transfer_password_description{ ushort(4671) };
inline constexpr phrase<> lng_gift_transfer_password_about{ ushort(4672) };
inline constexpr phrase<> lng_gift_transfer_confirm_title{ ushort(4673) };
inline constexpr phrase<lngtag_name> lng_gift_transfer_confirm_text{ ushort(4674) };
inline constexpr phrase<> lng_gift_transfer_confirm_button{ ushort(4675) };
inline constexpr phrase<lngtag_count> lng_gift_transfer_unlocks_days{ ushort(4676) };
inline constexpr phrase<lngtag_count> lng_gift_transfer_unlocks_hours{ ushort(4682) };
inline constexpr phrase<> lng_gift_transfer_unlocks_title{ ushort(4688) };
inline constexpr phrase<lngtag_when> lng_gift_transfer_unlocks_about{ ushort(4689) };
inline constexpr phrase<lngtag_count> lng_gift_transfer_unlocks_when_days{ ushort(4690) };
inline constexpr phrase<lngtag_count> lng_gift_transfer_unlocks_when_hours{ ushort(4696) };
inline constexpr phrase<> lng_gift_transfer_unlocks_update_title{ ushort(4702) };
inline constexpr phrase<> lng_gift_transfer_unlocks_update_about{ ushort(4703) };
inline constexpr phrase<lngtag_name, lngtag_recipient> lng_gift_transfer_sure{ ushort(4704) };
inline constexpr phrase<lngtag_name, lngtag_recipient, lngtag_price> lng_gift_transfer_sure_for{ ushort(4705) };
inline constexpr phrase<> lng_gift_transfer_button{ ushort(4706) };
inline constexpr phrase<lngtag_price> lng_gift_transfer_button_for{ ushort(4707) };
inline constexpr phrase<> lng_gift_transfer_set_theme{ ushort(4708) };
inline constexpr phrase<> lng_gift_transfer_choose{ ushort(4709) };
inline constexpr phrase<> lng_gift_transfer_wear{ ushort(4710) };
inline constexpr phrase<> lng_gift_transfer_take_off{ ushort(4711) };
inline constexpr phrase<> lng_gift_transfer_sell{ ushort(4712) };
inline constexpr phrase<> lng_gift_transfer_update{ ushort(4713) };
inline constexpr phrase<> lng_gift_transfer_unlist{ ushort(4714) };
inline constexpr phrase<lngtag_name> lng_gift_sell_unlist_title{ ushort(4715) };
inline constexpr phrase<> lng_gift_sell_unlist_sure{ ushort(4716) };
inline constexpr phrase<> lng_gift_sell_title{ ushort(4717) };
inline constexpr phrase<lngtag_percent> lng_gift_sell_about{ ushort(4718) };
inline constexpr phrase<lngtag_count> lng_gift_sell_amount{ ushort(4719) };
inline constexpr phrase<lngtag_count> lng_gift_sell_min_price{ ushort(4725) };
inline constexpr phrase<> lng_gift_sell_only_ton{ ushort(4731) };
inline constexpr phrase<> lng_gift_sell_only_ton_about{ ushort(4732) };
inline constexpr phrase<lngtag_count> lng_gift_sell_amount_ton{ ushort(4733) };
inline constexpr phrase<lngtag_count> lng_gift_sell_min_price_ton{ ushort(4739) };
inline constexpr phrase<> lng_gift_sell_title_ton{ ushort(4745) };
inline constexpr phrase<> lng_gift_sell_put{ ushort(4746) };
inline constexpr phrase<> lng_gift_sell_update{ ushort(4747) };
inline constexpr phrase<lngtag_name> lng_gift_sell_toast{ ushort(4748) };
inline constexpr phrase<lngtag_name> lng_gift_sell_updated{ ushort(4749) };
inline constexpr phrase<lngtag_name> lng_gift_sell_removed{ ushort(4750) };
inline constexpr phrase<> lng_gift_menu_show{ ushort(4751) };
inline constexpr phrase<> lng_gift_menu_hide{ ushort(4752) };
inline constexpr phrase<lngtag_name> lng_gift_wear_title{ ushort(4753) };
inline constexpr phrase<> lng_gift_wear_about{ ushort(4754) };
inline constexpr phrase<> lng_gift_wear_badge_title{ ushort(4755) };
inline constexpr phrase<> lng_gift_wear_badge_about{ ushort(4756) };
inline constexpr phrase<> lng_gift_wear_badge_about_channel{ ushort(4757) };
inline constexpr phrase<> lng_gift_wear_proof_title{ ushort(4758) };
inline constexpr phrase<> lng_gift_wear_proof_about{ ushort(4759) };
inline constexpr phrase<> lng_gift_wear_proof_about_channel{ ushort(4760) };
inline constexpr phrase<> lng_gift_wear_start{ ushort(4761) };
inline constexpr phrase<lngtag_link> lng_gift_wear_subscribe{ ushort(4762) };
inline constexpr phrase<lngtag_name> lng_gift_wear_start_toast{ ushort(4763) };
inline constexpr phrase<lngtag_name> lng_gift_wear_end_toast{ ushort(4764) };
inline constexpr phrase<> lng_gift_many_pinned_title{ ushort(4765) };
inline constexpr phrase<> lng_gift_many_pinned_choose{ ushort(4766) };
inline constexpr phrase<> lng_gift_resale_price{ ushort(4767) };
inline constexpr phrase<> lng_gift_resale_number{ ushort(4768) };
inline constexpr phrase<> lng_gift_resale_date{ ushort(4769) };
inline constexpr phrase<lngtag_count> lng_gift_resale_count{ ushort(4770) };
inline constexpr phrase<> lng_gift_resale_sort_price{ ushort(4776) };
inline constexpr phrase<> lng_gift_resale_sort_date{ ushort(4777) };
inline constexpr phrase<> lng_gift_resale_sort_number{ ushort(4778) };
inline constexpr phrase<> lng_gift_resale_filter_all{ ushort(4779) };
inline constexpr phrase<> lng_gift_resale_model{ ushort(4780) };
inline constexpr phrase<lngtag_count> lng_gift_resale_models{ ushort(4781) };
inline constexpr phrase<> lng_gift_resale_backdrop{ ushort(4787) };
inline constexpr phrase<lngtag_count> lng_gift_resale_backdrops{ ushort(4788) };
inline constexpr phrase<> lng_gift_resale_symbol{ ushort(4794) };
inline constexpr phrase<lngtag_count> lng_gift_resale_symbols{ ushort(4795) };
inline constexpr phrase<> lng_gift_resale_switch_to_ton{ ushort(4801) };
inline constexpr phrase<> lng_gift_resale_switch_to_stars{ ushort(4802) };
inline constexpr phrase<lngtag_duration> lng_gift_resale_early{ ushort(4803) };
inline constexpr phrase<lngtag_duration> lng_gift_transfer_early{ ushort(4804) };
inline constexpr phrase<> lng_gift_resale_transfer_early_title{ ushort(4805) };
inline constexpr phrase<> lng_gift_collection_add{ ushort(4806) };
inline constexpr phrase<> lng_gift_collection_new_title{ ushort(4807) };
inline constexpr phrase<> lng_gift_collection_new_button{ ushort(4808) };
inline constexpr phrase<> lng_gift_collection_new_text{ ushort(4809) };
inline constexpr phrase<> lng_gift_collection_new_ph{ ushort(4810) };
inline constexpr phrase<> lng_gift_collection_new_create{ ushort(4811) };
inline constexpr phrase<> lng_gift_collection_empty_title{ ushort(4812) };
inline constexpr phrase<> lng_gift_collection_empty_text{ ushort(4813) };
inline constexpr phrase<> lng_gift_collection_all{ ushort(4814) };
inline constexpr phrase<> lng_gift_collection_add_title{ ushort(4815) };
inline constexpr phrase<> lng_gift_collection_add_button{ ushort(4816) };
inline constexpr phrase<> lng_gift_collection_share{ ushort(4817) };
inline constexpr phrase<> lng_gift_collection_edit{ ushort(4818) };
inline constexpr phrase<> lng_gift_collection_limit_title{ ushort(4819) };
inline constexpr phrase<> lng_gift_collection_limit_text{ ushort(4820) };
inline constexpr phrase<> lng_gift_collection_delete{ ushort(4821) };
inline constexpr phrase<> lng_gift_collection_delete_sure{ ushort(4822) };
inline constexpr phrase<> lng_gift_collection_delete_button{ ushort(4823) };
inline constexpr phrase<> lng_gift_collection_add_to{ ushort(4824) };
inline constexpr phrase<> lng_gift_locked_title{ ushort(4825) };
inline constexpr phrase<> lng_accounts_limit_title{ ushort(4826) };
inline constexpr phrase<lngtag_count> lng_accounts_limit1{ ushort(4827) };
inline constexpr phrase<> lng_accounts_limit2{ ushort(4833) };
inline constexpr phrase<> lng_emoji_status_for_title{ ushort(4834) };
inline constexpr phrase<> lng_emoji_status_for_submit{ ushort(4835) };
inline constexpr phrase<lngtag_duration> lng_emoji_status_menu_duration_any{ ushort(4836) };
inline constexpr phrase<> lng_group_about_header{ ushort(4837) };
inline constexpr phrase<> lng_group_about_text{ ushort(4838) };
inline constexpr phrase<> lng_group_about1{ ushort(4839) };
inline constexpr phrase<> lng_group_about2{ ushort(4840) };
inline constexpr phrase<> lng_group_about3{ ushort(4841) };
inline constexpr phrase<> lng_group_about4{ ushort(4842) };
inline constexpr phrase<> lng_switch_stickers{ ushort(4843) };
inline constexpr phrase<> lng_switch_emoji{ ushort(4844) };
inline constexpr phrase<> lng_switch_gifs{ ushort(4845) };
inline constexpr phrase<> lng_switch_masks{ ushort(4846) };
inline constexpr phrase<> lng_stickers_featured_add{ ushort(4847) };
inline constexpr phrase<> lng_stickers_featured_installed{ ushort(4848) };
inline constexpr phrase<> lng_emoji_featured_unlock{ ushort(4849) };
inline constexpr phrase<> lng_emoji_premium_restore{ ushort(4850) };
inline constexpr phrase<> lng_gifs_search{ ushort(4851) };
inline constexpr phrase<> lng_gifs_no_saved{ ushort(4852) };
inline constexpr phrase<> lng_inline_bot_no_results{ ushort(4853) };
inline constexpr phrase<lngtag_inline_bot> lng_inline_bot_via{ ushort(4854) };
inline constexpr phrase<> lng_box_remove{ ushort(4855) };
inline constexpr phrase<> lng_stickers_installed_tab{ ushort(4856) };
inline constexpr phrase<> lng_stickers_masks_tab{ ushort(4857) };
inline constexpr phrase<> lng_stickers_featured_tab{ ushort(4858) };
inline constexpr phrase<> lng_stickers_archived_tab{ ushort(4859) };
inline constexpr phrase<lngtag_sticker_pack> lng_stickers_remove_pack{ ushort(4860) };
inline constexpr phrase<> lng_stickers_add_pack{ ushort(4861) };
inline constexpr phrase<> lng_stickers_add_masks{ ushort(4862) };
inline constexpr phrase<> lng_stickers_add_emoji{ ushort(4863) };
inline constexpr phrase<> lng_stickers_share_pack{ ushort(4864) };
inline constexpr phrase<> lng_stickers_share_masks{ ushort(4865) };
inline constexpr phrase<> lng_stickers_share_emoji{ ushort(4866) };
inline constexpr phrase<> lng_stickers_not_found{ ushort(4867) };
inline constexpr phrase<> lng_stickers_packs_archived{ ushort(4868) };
inline constexpr phrase<> lng_stickers_copied{ ushort(4869) };
inline constexpr phrase<> lng_stickers_copied_emoji{ ushort(4870) };
inline constexpr phrase<> lng_stickers_default_set{ ushort(4871) };
inline constexpr phrase<> lng_stickers_you_have{ ushort(4872) };
inline constexpr phrase<> lng_stickers_return{ ushort(4873) };
inline constexpr phrase<lngtag_count> lng_stickers_count{ ushort(4874) };
inline constexpr phrase<lngtag_count> lng_masks_count{ ushort(4880) };
inline constexpr phrase<lngtag_count> lng_custom_emoji_count{ ushort(4886) };
inline constexpr phrase<> lng_stickers_attached_sets{ ushort(4892) };
inline constexpr phrase<> lng_custom_emoji_used_sets{ ushort(4893) };
inline constexpr phrase<> lng_custom_emoji_remove_pack_button{ ushort(4894) };
inline constexpr phrase<> lng_stickers_group_set{ ushort(4895) };
inline constexpr phrase<> lng_stickers_remove_group_set{ ushort(4896) };
inline constexpr phrase<> lng_stickers_group_from_your{ ushort(4897) };
inline constexpr phrase<> lng_stickers_group_from_featured{ ushort(4898) };
inline constexpr phrase<> lng_stickers_nothing_found{ ushort(4899) };
inline constexpr phrase<> lng_stickers_remove_pack_confirm{ ushort(4900) };
inline constexpr phrase<> lng_stickers_archive_pack{ ushort(4901) };
inline constexpr phrase<> lng_stickers_has_been_archived{ ushort(4902) };
inline constexpr phrase<> lng_emoji_group_set{ ushort(4903) };
inline constexpr phrase<> lng_emoji_remove_group_set{ ushort(4904) };
inline constexpr phrase<> lng_emoji_group_from_your{ ushort(4905) };
inline constexpr phrase<> lng_emoji_group_from_featured{ ushort(4906) };
inline constexpr phrase<> lng_masks_archive_pack{ ushort(4907) };
inline constexpr phrase<> lng_masks_has_been_archived{ ushort(4908) };
inline constexpr phrase<> lng_masks_installed{ ushort(4909) };
inline constexpr phrase<> lng_emoji_nothing_found{ ushort(4910) };
inline constexpr phrase<> lng_stickers_context_reorder{ ushort(4911) };
inline constexpr phrase<> lng_stickers_context_edit_name{ ushort(4912) };
inline constexpr phrase<> lng_stickers_context_delete{ ushort(4913) };
inline constexpr phrase<> lng_stickers_context_delete_sure{ ushort(4914) };
inline constexpr phrase<> lng_stickers_box_edit_name_title{ ushort(4915) };
inline constexpr phrase<> lng_stickers_box_edit_name_about{ ushort(4916) };
inline constexpr phrase<> lng_stickers_creator_badge{ ushort(4917) };
inline constexpr phrase<> lng_in_dlg_photo{ ushort(4918) };
inline constexpr phrase<> lng_in_dlg_album{ ushort(4919) };
inline constexpr phrase<> lng_in_dlg_video{ ushort(4920) };
inline constexpr phrase<> lng_in_dlg_audio_file{ ushort(4921) };
inline constexpr phrase<> lng_in_dlg_contact{ ushort(4922) };
inline constexpr phrase<> lng_in_dlg_audio{ ushort(4923) };
inline constexpr phrase<> lng_in_dlg_video_message{ ushort(4924) };
inline constexpr phrase<> lng_in_dlg_voice_message_ttl{ ushort(4925) };
inline constexpr phrase<> lng_in_dlg_video_message_ttl{ ushort(4926) };
inline constexpr phrase<> lng_in_dlg_file{ ushort(4927) };
inline constexpr phrase<> lng_in_dlg_sticker{ ushort(4928) };
inline constexpr phrase<lngtag_emoji> lng_in_dlg_sticker_emoji{ ushort(4929) };
inline constexpr phrase<> lng_in_dlg_poll{ ushort(4930) };
inline constexpr phrase<> lng_in_dlg_story{ ushort(4931) };
inline constexpr phrase<> lng_in_dlg_todo_list{ ushort(4932) };
inline constexpr phrase<> lng_in_dlg_story_expired{ ushort(4933) };
inline constexpr phrase<lngtag_count> lng_in_dlg_media_count{ ushort(4934) };
inline constexpr phrase<lngtag_count> lng_in_dlg_photo_count{ ushort(4940) };
inline constexpr phrase<lngtag_count> lng_in_dlg_video_count{ ushort(4946) };
inline constexpr phrase<lngtag_count> lng_in_dlg_file_count{ ushort(4952) };
inline constexpr phrase<lngtag_count> lng_in_dlg_audio_count{ ushort(4958) };
inline constexpr phrase<> lng_ban_user{ ushort(4964) };
inline constexpr phrase<> lng_ban_users{ ushort(4965) };
inline constexpr phrase<> lng_restrict_users{ ushort(4966) };
inline constexpr phrase<lngtag_user> lng_delete_all_from_user{ ushort(4967) };
inline constexpr phrase<> lng_delete_all_from_users{ ushort(4968) };
inline constexpr phrase<lngtag_count> lng_restrict_user{ ushort(4969) };
inline constexpr phrase<lngtag_emoji> lng_restrict_user_part{ ushort(4975) };
inline constexpr phrase<lngtag_emoji> lng_restrict_users_part{ ushort(4976) };
inline constexpr phrase<lngtag_emoji> lng_restrict_user_full{ ushort(4977) };
inline constexpr phrase<lngtag_emoji> lng_restrict_users_full{ ushort(4978) };
inline constexpr phrase<> lng_restrict_users_part_single_header{ ushort(4979) };
inline constexpr phrase<lngtag_count> lng_restrict_users_part_header{ ushort(4980) };
inline constexpr phrase<> lng_report_spam{ ushort(4986) };
inline constexpr phrase<> lng_report_spam_and_leave{ ushort(4987) };
inline constexpr phrase<> lng_report_spam_done{ ushort(4988) };
inline constexpr phrase<> lng_report_spam_sure_group{ ushort(4989) };
inline constexpr phrase<> lng_report_spam_sure_channel{ ushort(4990) };
inline constexpr phrase<> lng_report_spam_ok{ ushort(4991) };
inline constexpr phrase<> lng_new_contact_block{ ushort(4992) };
inline constexpr phrase<lngtag_user> lng_new_contact_block_done{ ushort(4993) };
inline constexpr phrase<> lng_new_contact_add{ ushort(4994) };
inline constexpr phrase<> lng_new_contact_share{ ushort(4995) };
inline constexpr phrase<lngtag_phone, lngtag_user> lng_new_contact_share_sure{ ushort(4996) };
inline constexpr phrase<lngtag_user> lng_new_contact_share_done{ ushort(4997) };
inline constexpr phrase<lngtag_user> lng_new_contact_add_name{ ushort(4998) };
inline constexpr phrase<lngtag_user> lng_new_contact_add_done{ ushort(4999) };
inline constexpr phrase<> lng_new_contact_unarchive{ ushort(5000) };
inline constexpr phrase<lngtag_user, lngtag_name> lng_new_contact_from_request_channel{ ushort(5001) };
inline constexpr phrase<lngtag_user, lngtag_name> lng_new_contact_from_request_group{ ushort(5002) };
inline constexpr phrase<lngtag_emoji, lngtag_link> lng_new_contact_about_status{ ushort(5003) };
inline constexpr phrase<> lng_new_contact_about_status_link{ ushort(5004) };
inline constexpr phrase<> lng_new_contact_not_contact{ ushort(5005) };
inline constexpr phrase<> lng_new_contact_phone_number{ ushort(5006) };
inline constexpr phrase<> lng_new_contact_registration{ ushort(5007) };
inline constexpr phrase<> lng_new_contact_common_groups{ ushort(5008) };
inline constexpr phrase<lngtag_count, lngtag_emoji, lngtag_arrow> lng_new_contact_groups{ ushort(5009) };
inline constexpr phrase<> lng_new_contact_not_official{ ushort(5015) };
inline constexpr phrase<lngtag_when> lng_new_contact_updated_name{ ushort(5016) };
inline constexpr phrase<lngtag_when> lng_new_contact_updated_photo{ ushort(5017) };
inline constexpr phrase<> lng_new_contact_updated_now{ ushort(5018) };
inline constexpr phrase<lngtag_count> lng_new_contact_updated_hours{ ushort(5019) };
inline constexpr phrase<lngtag_count> lng_new_contact_updated_days{ ushort(5025) };
inline constexpr phrase<lngtag_count> lng_new_contact_updated_months{ ushort(5031) };
inline constexpr phrase<> lng_from_request_title_channel{ ushort(5037) };
inline constexpr phrase<> lng_from_request_title_group{ ushort(5038) };
inline constexpr phrase<lngtag_name, lngtag_date> lng_from_request_body{ ushort(5039) };
inline constexpr phrase<> lng_from_request_understand{ ushort(5040) };
inline constexpr phrase<lngtag_more_info> lng_cant_send_to_not_contact{ ushort(5041) };
inline constexpr phrase<lngtag_more_info> lng_cant_invite_not_contact{ ushort(5042) };
inline constexpr phrase<> lng_cant_more_info{ ushort(5043) };
inline constexpr phrase<> lng_cant_invite_banned{ ushort(5044) };
inline constexpr phrase<> lng_cant_invite_privacy{ ushort(5045) };
inline constexpr phrase<> lng_cant_invite_bot_to_channel{ ushort(5046) };
inline constexpr phrase<> lng_cant_do_this{ ushort(5047) };
inline constexpr phrase<> lng_cant_invite_offer_admin{ ushort(5048) };
inline constexpr phrase<> lng_cant_invite_make_admin{ ushort(5049) };
inline constexpr phrase<> lng_send_button{ ushort(5050) };
inline constexpr phrase<> lng_schedule_button{ ushort(5051) };
inline constexpr phrase<> lng_send_silent_message{ ushort(5052) };
inline constexpr phrase<> lng_schedule_message{ ushort(5053) };
inline constexpr phrase<> lng_reminder_message{ ushort(5054) };
inline constexpr phrase<> lng_schedule_title{ ushort(5055) };
inline constexpr phrase<> lng_remind_title{ ushort(5056) };
inline constexpr phrase<> lng_schedule_at{ ushort(5057) };
inline constexpr phrase<> lng_message_ph{ ushort(5058) };
inline constexpr phrase<> lng_broadcast_ph{ ushort(5059) };
inline constexpr phrase<> lng_broadcast_silent_ph{ ushort(5060) };
inline constexpr phrase<> lng_send_anonymous_ph{ ushort(5061) };
inline constexpr phrase<> lng_story_reply_ph{ ushort(5062) };
inline constexpr phrase<> lng_story_comment_ph{ ushort(5063) };
inline constexpr phrase<lngtag_count> lng_message_stars_ph{ ushort(5064) };
inline constexpr phrase<> lng_send_text_no{ ushort(5070) };
inline constexpr phrase<lngtag_types> lng_send_text_no_about{ ushort(5071) };
inline constexpr phrase<lngtag_types, lngtag_last> lng_send_text_type_and_last{ ushort(5072) };
inline constexpr phrase<> lng_send_text_type_photos{ ushort(5073) };
inline constexpr phrase<> lng_send_text_type_videos{ ushort(5074) };
inline constexpr phrase<> lng_send_text_type_video_messages{ ushort(5075) };
inline constexpr phrase<> lng_send_text_type_music{ ushort(5076) };
inline constexpr phrase<> lng_send_text_type_voice_messages{ ushort(5077) };
inline constexpr phrase<> lng_send_text_type_files{ ushort(5078) };
inline constexpr phrase<> lng_send_text_type_stickers{ ushort(5079) };
inline constexpr phrase<> lng_send_text_type_polls{ ushort(5080) };
inline constexpr phrase<> lng_send_gif_with_caption{ ushort(5081) };
inline constexpr phrase<> lng_send_as_title{ ushort(5082) };
inline constexpr phrase<> lng_send_as_anonymous_admin{ ushort(5083) };
inline constexpr phrase<lngtag_link> lng_send_as_premium_required{ ushort(5084) };
inline constexpr phrase<> lng_send_as_premium_required_link{ ushort(5085) };
inline constexpr phrase<> lng_record_cancel{ ushort(5086) };
inline constexpr phrase<> lng_record_cancel_stories{ ushort(5087) };
inline constexpr phrase<> lng_record_lock_cancel_sure{ ushort(5088) };
inline constexpr phrase<> lng_record_lock_cancel_sure_round{ ushort(5089) };
inline constexpr phrase<> lng_record_listen_cancel_sure{ ushort(5090) };
inline constexpr phrase<> lng_record_listen_cancel_sure_round{ ushort(5091) };
inline constexpr phrase<> lng_record_lock_discard{ ushort(5092) };
inline constexpr phrase<> lng_record_hold_tip{ ushort(5093) };
inline constexpr phrase<> lng_record_voice_tip{ ushort(5094) };
inline constexpr phrase<> lng_record_video_tip{ ushort(5095) };
inline constexpr phrase<> lng_record_audio_problem{ ushort(5096) };
inline constexpr phrase<> lng_record_video_problem{ ushort(5097) };
inline constexpr phrase<> lng_record_once_first_tooltip{ ushort(5098) };
inline constexpr phrase<> lng_record_once_active_tooltip{ ushort(5099) };
inline constexpr phrase<> lng_record_once_active_video{ ushort(5100) };
inline constexpr phrase<> lng_will_be_notified{ ushort(5101) };
inline constexpr phrase<> lng_wont_be_notified{ ushort(5102) };
inline constexpr phrase<> lng_willbe_history{ ushort(5103) };
inline constexpr phrase<> lng_from_you{ ushort(5104) };
inline constexpr phrase<> lng_from_draft{ ushort(5105) };
inline constexpr phrase<> lng_bot_description{ ushort(5106) };
inline constexpr phrase<> lng_unblock_button{ ushort(5107) };
inline constexpr phrase<> lng_restart_button{ ushort(5108) };
inline constexpr phrase<> lng_channel_mute{ ushort(5109) };
inline constexpr phrase<> lng_channel_unmute{ ushort(5110) };
inline constexpr phrase<> lng_saved_messages{ ushort(5111) };
inline constexpr phrase<> lng_saved_short{ ushort(5112) };
inline constexpr phrase<> lng_saved_forward_here{ ushort(5113) };
inline constexpr phrase<> lng_saved_quote_here{ ushort(5114) };
inline constexpr phrase<> lng_saved_open_chat{ ushort(5115) };
inline constexpr phrase<> lng_saved_open_channel{ ushort(5116) };
inline constexpr phrase<> lng_saved_open_group{ ushort(5117) };
inline constexpr phrase<> lng_saved_about_hidden{ ushort(5118) };
inline constexpr phrase<> lng_scheduled_messages{ ushort(5119) };
inline constexpr phrase<> lng_scheduled_messages_empty{ ushort(5120) };
inline constexpr phrase<> lng_reminder_messages{ ushort(5121) };
inline constexpr phrase<lngtag_date> lng_scheduled_date{ ushort(5122) };
inline constexpr phrase<> lng_scheduled_date_until_online{ ushort(5123) };
inline constexpr phrase<> lng_scheduled_send_until_online{ ushort(5124) };
inline constexpr phrase<> lng_scheduled_send_now{ ushort(5125) };
inline constexpr phrase<lngtag_count> lng_scheduled_send_now_many{ ushort(5126) };
inline constexpr phrase<> lng_scheduled_video_tip_title{ ushort(5132) };
inline constexpr phrase<> lng_scheduled_video_tip_text{ ushort(5133) };
inline constexpr phrase<> lng_scheduled_video_tip{ ushort(5134) };
inline constexpr phrase<> lng_scheduled_video_published{ ushort(5135) };
inline constexpr phrase<> lng_scheduled_video_view{ ushort(5136) };
inline constexpr phrase<lngtag_count> lng_replies_view{ ushort(5137) };
inline constexpr phrase<> lng_replies_view_thread{ ushort(5143) };
inline constexpr phrase<lngtag_count> lng_replies_header{ ushort(5144) };
inline constexpr phrase<> lng_replies_header_none{ ushort(5150) };
inline constexpr phrase<> lng_replies_view_topic{ ushort(5151) };
inline constexpr phrase<lngtag_count> lng_comments_header{ ushort(5152) };
inline constexpr phrase<> lng_comments_header_none{ ushort(5158) };
inline constexpr phrase<lngtag_count> lng_comments_open_count{ ushort(5159) };
inline constexpr phrase<> lng_comments_open_none{ ushort(5165) };
inline constexpr phrase<> lng_replies_view_original{ ushort(5166) };
inline constexpr phrase<> lng_replies_messages{ ushort(5167) };
inline constexpr phrase<> lng_hidden_author_messages{ ushort(5168) };
inline constexpr phrase<> lng_my_notes{ ushort(5169) };
inline constexpr phrase<> lng_replies_discussion_started{ ushort(5170) };
inline constexpr phrase<> lng_replies_no_comments{ ushort(5171) };
inline constexpr phrase<> lng_verification_codes{ ushort(5172) };
inline constexpr phrase<> lng_verification_codes_about{ ushort(5173) };
inline constexpr phrase<> lng_archived_name{ ushort(5174) };
inline constexpr phrase<> lng_archived_add{ ushort(5175) };
inline constexpr phrase<> lng_archived_remove{ ushort(5176) };
inline constexpr phrase<> lng_archived_added{ ushort(5177) };
inline constexpr phrase<> lng_archived_removed{ ushort(5178) };
inline constexpr phrase<lngtag_accumulated, lngtag_chat> lng_archived_last_list{ ushort(5179) };
inline constexpr phrase<lngtag_count, lngtag_chats> lng_archived_last{ ushort(5180) };
inline constexpr phrase<lngtag_from_part, lngtag_message> lng_dialogs_text_with_from{ ushort(5186) };
inline constexpr phrase<lngtag_from> lng_dialogs_text_from_wrapped{ ushort(5187) };
inline constexpr phrase<lngtag_media_part, lngtag_caption> lng_dialogs_text_media{ ushort(5188) };
inline constexpr phrase<lngtag_media> lng_dialogs_text_media_wrapped{ ushort(5189) };
inline constexpr phrase<lngtag_from, lngtag_topic> lng_dialogs_text_from_in_topic{ ushort(5190) };
inline constexpr phrase<> lng_dialogs_skip_archive_in_search{ ushort(5191) };
inline constexpr phrase<> lng_dialogs_show_archive_in_search{ ushort(5192) };
inline constexpr phrase<> lng_dialogs_suggestions_birthday_title{ ushort(5193) };
inline constexpr phrase<> lng_dialogs_suggestions_birthday_about{ ushort(5194) };
inline constexpr phrase<lngtag_text> lng_dialogs_suggestions_birthday_contact_title{ ushort(5195) };
inline constexpr phrase<> lng_dialogs_suggestions_birthday_contact_about{ ushort(5196) };
inline constexpr phrase<lngtag_count> lng_dialogs_suggestions_birthday_contacts_title{ ushort(5197) };
inline constexpr phrase<> lng_dialogs_suggestions_birthday_contacts_about{ ushort(5203) };
inline constexpr phrase<> lng_dialogs_suggestions_birthday_contact_dismiss{ ushort(5204) };
inline constexpr phrase<lngtag_text> lng_dialogs_suggestions_premium_annual_title{ ushort(5205) };
inline constexpr phrase<> lng_dialogs_suggestions_premium_annual_about{ ushort(5206) };
inline constexpr phrase<lngtag_text> lng_dialogs_suggestions_premium_upgrade_title{ ushort(5207) };
inline constexpr phrase<> lng_dialogs_suggestions_premium_upgrade_about{ ushort(5208) };
inline constexpr phrase<lngtag_text> lng_dialogs_suggestions_premium_restore_title{ ushort(5209) };
inline constexpr phrase<> lng_dialogs_suggestions_premium_restore_about{ ushort(5210) };
inline constexpr phrase<> lng_dialogs_suggestions_premium_grace_title{ ushort(5211) };
inline constexpr phrase<> lng_dialogs_suggestions_premium_grace_about{ ushort(5212) };
inline constexpr phrase<> lng_dialogs_suggestions_userpics_title{ ushort(5213) };
inline constexpr phrase<> lng_dialogs_suggestions_userpics_about{ ushort(5214) };
inline constexpr phrase<lngtag_count, lngtag_emoji, lngtag_channels> lng_dialogs_suggestions_credits_sub_low_title{ ushort(5215) };
inline constexpr phrase<> lng_dialogs_suggestions_credits_sub_low_about{ ushort(5221) };
inline constexpr phrase<> lng_unconfirmed_auth_title{ ushort(5222) };
inline constexpr phrase<> lng_unconfirmed_auth_confirm{ ushort(5223) };
inline constexpr phrase<> lng_unconfirmed_auth_deny{ ushort(5224) };
inline constexpr phrase<lngtag_from, lngtag_country> lng_unconfirmed_auth_single{ ushort(5225) };
inline constexpr phrase<lngtag_count> lng_unconfirmed_auth_multiple{ ushort(5226) };
inline constexpr phrase<lngtag_count, lngtag_country> lng_unconfirmed_auth_multiple_from{ ushort(5232) };
inline constexpr phrase<lngtag_count> lng_unconfirmed_auth_denied_title{ ushort(5238) };
inline constexpr phrase<lngtag_country> lng_unconfirmed_auth_denied_single{ ushort(5244) };
inline constexpr phrase<lngtag_country> lng_unconfirmed_auth_denied_multiple{ ushort(5245) };
inline constexpr phrase<> lng_unconfirmed_auth_denied_warning{ ushort(5246) };
inline constexpr phrase<> lng_unconfirmed_auth_confirmed{ ushort(5247) };
inline constexpr phrase<lngtag_link> lng_unconfirmed_auth_confirmed_message{ ushort(5248) };
inline constexpr phrase<lngtag_emoji> lng_about_random{ ushort(5249) };
inline constexpr phrase<> lng_about_random_send{ ushort(5250) };
inline constexpr phrase<> lng_open_this_link{ ushort(5251) };
inline constexpr phrase<> lng_open_link{ ushort(5252) };
inline constexpr phrase<lngtag_bot_name> lng_allow_bot_pass{ ushort(5253) };
inline constexpr phrase<> lng_allow_bot{ ushort(5254) };
inline constexpr phrase<lngtag_emoji> lng_allow_bot_webview_details{ ushort(5255) };
inline constexpr phrase<> lng_allow_bot_webview_details_about{ ushort(5256) };
inline constexpr phrase<lngtag_link> lng_url_auth_open_confirm{ ushort(5257) };
inline constexpr phrase<lngtag_domain, lngtag_user> lng_url_auth_login_option{ ushort(5258) };
inline constexpr phrase<lngtag_bot> lng_url_auth_allow_messages{ ushort(5259) };
inline constexpr phrase<> lng_bot_start{ ushort(5260) };
inline constexpr phrase<> lng_bot_choose_group{ ushort(5261) };
inline constexpr phrase<> lng_bot_no_groups{ ushort(5262) };
inline constexpr phrase<> lng_bot_groups_not_found{ ushort(5263) };
inline constexpr phrase<lngtag_group> lng_bot_sure_invite{ ushort(5264) };
inline constexpr phrase<> lng_bot_already_in_group{ ushort(5265) };
inline constexpr phrase<> lng_bot_choose_chat{ ushort(5266) };
inline constexpr phrase<> lng_bot_no_chats{ ushort(5267) };
inline constexpr phrase<> lng_bot_chats_not_found{ ushort(5268) };
inline constexpr phrase<lngtag_user> lng_bot_sure_share_game{ ushort(5269) };
inline constexpr phrase<lngtag_group> lng_bot_sure_share_game_group{ ushort(5270) };
inline constexpr phrase<> lng_bot_groups_manage{ ushort(5271) };
inline constexpr phrase<> lng_bot_channels_manage{ ushort(5272) };
inline constexpr phrase<> lng_bot_groups{ ushort(5273) };
inline constexpr phrase<> lng_bot_add_title{ ushort(5274) };
inline constexpr phrase<> lng_bot_as_admin_check{ ushort(5275) };
inline constexpr phrase<> lng_bot_add_as_admin{ ushort(5276) };
inline constexpr phrase<> lng_bot_add_as_member{ ushort(5277) };
inline constexpr phrase<lngtag_group> lng_bot_sure_add_text_group{ ushort(5278) };
inline constexpr phrase<lngtag_group> lng_bot_sure_add_text_channel{ ushort(5279) };
inline constexpr phrase<> lng_bot_no_webview{ ushort(5280) };
inline constexpr phrase<> lng_bot_remove_from_menu{ ushort(5281) };
inline constexpr phrase<lngtag_bot> lng_bot_remove_from_menu_sure{ ushort(5282) };
inline constexpr phrase<> lng_bot_remove_from_menu_done{ ushort(5283) };
inline constexpr phrase<> lng_bot_remove_from_side_menu{ ushort(5284) };
inline constexpr phrase<lngtag_bot> lng_bot_remove_from_side_menu_sure{ ushort(5285) };
inline constexpr phrase<> lng_bot_remove_from_side_menu_done{ ushort(5286) };
inline constexpr phrase<> lng_bot_settings{ ushort(5287) };
inline constexpr phrase<> lng_bot_open{ ushort(5288) };
inline constexpr phrase<> lng_bot_terms{ ushort(5289) };
inline constexpr phrase<> lng_bot_privacy{ ushort(5290) };
inline constexpr phrase<> lng_bot_reload_page{ ushort(5291) };
inline constexpr phrase<lngtag_bot> lng_bot_add_to_menu{ ushort(5292) };
inline constexpr phrase<> lng_bot_add_to_menu_done{ ushort(5293) };
inline constexpr phrase<lngtag_bot> lng_bot_will_be_added{ ushort(5294) };
inline constexpr phrase<> lng_bot_side_menu_new{ ushort(5295) };
inline constexpr phrase<> lng_bot_menu_not_supported{ ushort(5296) };
inline constexpr phrase<> lng_bot_menu_already_added{ ushort(5297) };
inline constexpr phrase<> lng_bot_menu_button{ ushort(5298) };
inline constexpr phrase<> lng_bot_close_warning_title{ ushort(5299) };
inline constexpr phrase<> lng_bot_close_warning{ ushort(5300) };
inline constexpr phrase<> lng_bot_close_warning_sure{ ushort(5301) };
inline constexpr phrase<lngtag_bot> lng_bot_add_to_side_menu{ ushort(5302) };
inline constexpr phrase<> lng_bot_add_to_side_menu_done{ ushort(5303) };
inline constexpr phrase<> lng_bot_no_scan_qr{ ushort(5304) };
inline constexpr phrase<> lng_bot_no_share_story{ ushort(5305) };
inline constexpr phrase<> lng_bot_emoji_status_confirm{ ushort(5306) };
inline constexpr phrase<> lng_bot_emoji_status_title{ ushort(5307) };
inline constexpr phrase<lngtag_bot> lng_bot_emoji_status_text{ ushort(5308) };
inline constexpr phrase<lngtag_bot, lngtag_name> lng_bot_emoji_status_access_text{ ushort(5309) };
inline constexpr phrase<> lng_bot_emoji_status_access_allow{ ushort(5310) };
inline constexpr phrase<> lng_bot_share_prepared_title{ ushort(5311) };
inline constexpr phrase<lngtag_bot> lng_bot_share_prepared_about{ ushort(5312) };
inline constexpr phrase<> lng_bot_share_prepared_button{ ushort(5313) };
inline constexpr phrase<> lng_bot_download_file{ ushort(5314) };
inline constexpr phrase<lngtag_bot> lng_bot_download_file_sure{ ushort(5315) };
inline constexpr phrase<> lng_bot_download_file_button{ ushort(5316) };
inline constexpr phrase<> lng_bot_download_starting{ ushort(5317) };
inline constexpr phrase<lngtag_retry> lng_bot_download_failed{ ushort(5318) };
inline constexpr phrase<> lng_bot_download_retry{ ushort(5319) };
inline constexpr phrase<lngtag_count> lng_bot_status_users{ ushort(5320) };
inline constexpr phrase<> lng_typing{ ushort(5326) };
inline constexpr phrase<lngtag_user> lng_user_typing{ ushort(5327) };
inline constexpr phrase<lngtag_user, lngtag_second_user> lng_users_typing{ ushort(5328) };
inline constexpr phrase<lngtag_count> lng_many_typing{ ushort(5329) };
inline constexpr phrase<> lng_playing_game{ ushort(5335) };
inline constexpr phrase<lngtag_user> lng_user_playing_game{ ushort(5336) };
inline constexpr phrase<lngtag_user, lngtag_second_user> lng_users_playing_game{ ushort(5337) };
inline constexpr phrase<lngtag_count> lng_many_playing_game{ ushort(5338) };
inline constexpr phrase<> lng_send_action_record_video{ ushort(5344) };
inline constexpr phrase<lngtag_user> lng_user_action_record_video{ ushort(5345) };
inline constexpr phrase<> lng_send_action_upload_video{ ushort(5346) };
inline constexpr phrase<lngtag_user> lng_user_action_upload_video{ ushort(5347) };
inline constexpr phrase<> lng_send_action_record_audio{ ushort(5348) };
inline constexpr phrase<lngtag_user> lng_user_action_record_audio{ ushort(5349) };
inline constexpr phrase<> lng_send_action_upload_audio{ ushort(5350) };
inline constexpr phrase<lngtag_user> lng_user_action_upload_audio{ ushort(5351) };
inline constexpr phrase<> lng_send_action_record_round{ ushort(5352) };
inline constexpr phrase<lngtag_user> lng_user_action_record_round{ ushort(5353) };
inline constexpr phrase<> lng_send_action_upload_round{ ushort(5354) };
inline constexpr phrase<lngtag_user> lng_user_action_upload_round{ ushort(5355) };
inline constexpr phrase<> lng_send_action_upload_photo{ ushort(5356) };
inline constexpr phrase<lngtag_user> lng_user_action_upload_photo{ ushort(5357) };
inline constexpr phrase<> lng_send_action_upload_file{ ushort(5358) };
inline constexpr phrase<lngtag_user> lng_user_action_upload_file{ ushort(5359) };
inline constexpr phrase<> lng_send_action_choose_sticker{ ushort(5360) };
inline constexpr phrase<lngtag_user> lng_user_action_choose_sticker{ ushort(5361) };
inline constexpr phrase<lngtag_emoji> lng_user_action_watching_animations{ ushort(5362) };
inline constexpr phrase<lngtag_count> lng_unread_bar{ ushort(5363) };
inline constexpr phrase<> lng_unread_bar_some{ ushort(5369) };
inline constexpr phrase<> lng_maps_point{ ushort(5370) };
inline constexpr phrase<> lng_maps_select_on_map{ ushort(5371) };
inline constexpr phrase<> lng_maps_point_send{ ushort(5372) };
inline constexpr phrase<> lng_maps_point_set{ ushort(5373) };
inline constexpr phrase<> lng_maps_or_choose{ ushort(5374) };
inline constexpr phrase<> lng_maps_places_in_area{ ushort(5375) };
inline constexpr phrase<> lng_maps_no_places{ ushort(5376) };
inline constexpr phrase<> lng_maps_choose_to_search{ ushort(5377) };
inline constexpr phrase<> lng_maps_venues_source{ ushort(5378) };
inline constexpr phrase<> lng_live_location{ ushort(5379) };
inline constexpr phrase<> lng_live_location_now{ ushort(5380) };
inline constexpr phrase<lngtag_count> lng_live_location_minutes{ ushort(5381) };
inline constexpr phrase<lngtag_count> lng_live_location_hours{ ushort(5387) };
inline constexpr phrase<lngtag_time> lng_live_location_today{ ushort(5393) };
inline constexpr phrase<lngtag_time> lng_live_location_yesterday{ ushort(5394) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_live_location_date_time{ ushort(5395) };
inline constexpr phrase<> lng_save_photo{ ushort(5396) };
inline constexpr phrase<> lng_save_video{ ushort(5397) };
inline constexpr phrase<> lng_save_audio_file{ ushort(5398) };
inline constexpr phrase<> lng_save_audio{ ushort(5399) };
inline constexpr phrase<> lng_save_file{ ushort(5400) };
inline constexpr phrase<lngtag_ready, lngtag_total, lngtag_mb> lng_save_downloaded{ ushort(5401) };
inline constexpr phrase<lngtag_duration, lngtag_size> lng_duration_and_size{ ushort(5402) };
inline constexpr phrase<lngtag_played, lngtag_duration> lng_duration_played{ ushort(5403) };
inline constexpr phrase<lngtag_date, lngtag_duration> lng_date_and_duration{ ushort(5404) };
inline constexpr phrase<> lng_choose_image{ ushort(5405) };
inline constexpr phrase<> lng_choose_file{ ushort(5406) };
inline constexpr phrase<> lng_choose_files{ ushort(5407) };
inline constexpr phrase<> lng_choose_cover{ ushort(5408) };
inline constexpr phrase<> lng_choose_cover_bad{ ushort(5409) };
inline constexpr phrase<> lng_game_tag{ ushort(5410) };
inline constexpr phrase<> lng_context_new_window{ ushort(5411) };
inline constexpr phrase<> lng_context_view_profile{ ushort(5412) };
inline constexpr phrase<> lng_context_send_message{ ushort(5413) };
inline constexpr phrase<> lng_context_view_group{ ushort(5414) };
inline constexpr phrase<> lng_context_view_channel{ ushort(5415) };
inline constexpr phrase<> lng_context_view_topic{ ushort(5416) };
inline constexpr phrase<> lng_context_hide_psa{ ushort(5417) };
inline constexpr phrase<> lng_context_pin_to_top{ ushort(5418) };
inline constexpr phrase<> lng_context_unpin_from_top{ ushort(5419) };
inline constexpr phrase<> lng_context_mark_unread{ ushort(5420) };
inline constexpr phrase<> lng_context_mark_read{ ushort(5421) };
inline constexpr phrase<> lng_context_mark_read_sure{ ushort(5422) };
inline constexpr phrase<> lng_context_mark_read_all{ ushort(5423) };
inline constexpr phrase<> lng_context_mark_read_all_sure{ ushort(5424) };
inline constexpr phrase<> lng_context_mark_read_all_sure_2{ ushort(5425) };
inline constexpr phrase<> lng_context_mark_read_mentions_all{ ushort(5426) };
inline constexpr phrase<> lng_context_mark_read_reactions_all{ ushort(5427) };
inline constexpr phrase<> lng_context_archive_expand{ ushort(5428) };
inline constexpr phrase<> lng_context_archive_collapse{ ushort(5429) };
inline constexpr phrase<> lng_context_archive_to_menu{ ushort(5430) };
inline constexpr phrase<> lng_context_archive_to_list{ ushort(5431) };
inline constexpr phrase<> lng_context_archive_to_menu_info{ ushort(5432) };
inline constexpr phrase<> lng_context_archive_settings{ ushort(5433) };
inline constexpr phrase<> lng_context_archive_how_does_it_work{ ushort(5434) };
inline constexpr phrase<> lng_context_mute{ ushort(5435) };
inline constexpr phrase<> lng_context_unmute{ ushort(5436) };
inline constexpr phrase<> lng_context_promote_admin{ ushort(5437) };
inline constexpr phrase<> lng_context_edit_permissions{ ushort(5438) };
inline constexpr phrase<> lng_context_restrict_user{ ushort(5439) };
inline constexpr phrase<> lng_context_ban_user{ ushort(5440) };
inline constexpr phrase<> lng_context_remove_from_group{ ushort(5441) };
inline constexpr phrase<> lng_context_add_to_group{ ushort(5442) };
inline constexpr phrase<> lng_context_rate_transcription{ ushort(5443) };
inline constexpr phrase<> lng_toast_sent_rate_transcription{ ushort(5444) };
inline constexpr phrase<> lng_context_copy_link{ ushort(5445) };
inline constexpr phrase<> lng_context_copy_message_link{ ushort(5446) };
inline constexpr phrase<> lng_context_copy_post_link{ ushort(5447) };
inline constexpr phrase<> lng_context_copy_topic_link{ ushort(5448) };
inline constexpr phrase<> lng_context_copy_email{ ushort(5449) };
inline constexpr phrase<> lng_context_copy_hashtag{ ushort(5450) };
inline constexpr phrase<> lng_context_copy_mention{ ushort(5451) };
inline constexpr phrase<> lng_context_copy_filename{ ushort(5452) };
inline constexpr phrase<> lng_context_save_image{ ushort(5453) };
inline constexpr phrase<> lng_context_copy_image{ ushort(5454) };
inline constexpr phrase<> lng_context_cancel_download{ ushort(5455) };
inline constexpr phrase<> lng_context_show_in_folder{ ushort(5456) };
inline constexpr phrase<> lng_context_show_in_finder{ ushort(5457) };
inline constexpr phrase<> lng_context_save_video{ ushort(5458) };
inline constexpr phrase<> lng_context_save_audio_file{ ushort(5459) };
inline constexpr phrase<> lng_context_save_audio{ ushort(5460) };
inline constexpr phrase<> lng_context_pack_info{ ushort(5461) };
inline constexpr phrase<> lng_context_pack_add{ ushort(5462) };
inline constexpr phrase<> lng_context_save_file{ ushort(5463) };
inline constexpr phrase<> lng_context_save_music_to{ ushort(5464) };
inline constexpr phrase<> lng_context_save_music_profile{ ushort(5465) };
inline constexpr phrase<> lng_context_save_music_saved{ ushort(5466) };
inline constexpr phrase<> lng_context_save_music_folder{ ushort(5467) };
inline constexpr phrase<> lng_context_save_music_about{ ushort(5468) };
inline constexpr phrase<> lng_context_copy_text{ ushort(5469) };
inline constexpr phrase<> lng_context_open_gif{ ushort(5470) };
inline constexpr phrase<> lng_context_save_gif{ ushort(5471) };
inline constexpr phrase<> lng_context_delete_gif{ ushort(5472) };
inline constexpr phrase<> lng_context_open_channel{ ushort(5473) };
inline constexpr phrase<> lng_context_open_group{ ushort(5474) };
inline constexpr phrase<> lng_context_attached_stickers{ ushort(5475) };
inline constexpr phrase<> lng_context_to_msg{ ushort(5476) };
inline constexpr phrase<> lng_context_reply_msg{ ushort(5477) };
inline constexpr phrase<> lng_context_quote_and_reply{ ushort(5478) };
inline constexpr phrase<> lng_context_reply_to_task{ ushort(5479) };
inline constexpr phrase<> lng_context_edit_msg{ ushort(5480) };
inline constexpr phrase<> lng_context_add_factcheck{ ushort(5481) };
inline constexpr phrase<> lng_context_edit_factcheck{ ushort(5482) };
inline constexpr phrase<> lng_context_add_offer{ ushort(5483) };
inline constexpr phrase<> lng_context_forward_msg{ ushort(5484) };
inline constexpr phrase<> lng_context_send_now_msg{ ushort(5485) };
inline constexpr phrase<> lng_context_reschedule{ ushort(5486) };
inline constexpr phrase<> lng_context_delete_msg{ ushort(5487) };
inline constexpr phrase<lngtag_duration> lng_context_auto_delete_in{ ushort(5488) };
inline constexpr phrase<> lng_context_select_msg{ ushort(5489) };
inline constexpr phrase<> lng_context_select_msg_bulk{ ushort(5490) };
inline constexpr phrase<> lng_context_report_msg{ ushort(5491) };
inline constexpr phrase<> lng_context_pin_msg{ ushort(5492) };
inline constexpr phrase<> lng_context_unpin_msg{ ushort(5493) };
inline constexpr phrase<> lng_context_cancel_upload{ ushort(5494) };
inline constexpr phrase<> lng_context_upload_edit_caption{ ushort(5495) };
inline constexpr phrase<> lng_context_copy_selected{ ushort(5496) };
inline constexpr phrase<> lng_context_copy_selected_items{ ushort(5497) };
inline constexpr phrase<> lng_context_forward_selected{ ushort(5498) };
inline constexpr phrase<> lng_context_send_now_selected{ ushort(5499) };
inline constexpr phrase<> lng_context_reschedule_selected{ ushort(5500) };
inline constexpr phrase<> lng_context_delete_selected{ ushort(5501) };
inline constexpr phrase<> lng_context_save_images_selected{ ushort(5502) };
inline constexpr phrase<> lng_context_save_documents_selected{ ushort(5503) };
inline constexpr phrase<> lng_context_clear_selection{ ushort(5504) };
inline constexpr phrase<> lng_context_seen_loading{ ushort(5505) };
inline constexpr phrase<lngtag_count> lng_context_seen_text{ ushort(5506) };
inline constexpr phrase<> lng_context_seen_text_none{ ushort(5512) };
inline constexpr phrase<lngtag_count> lng_context_seen_listened{ ushort(5513) };
inline constexpr phrase<> lng_context_seen_listened_none{ ushort(5519) };
inline constexpr phrase<lngtag_count> lng_context_seen_watched{ ushort(5520) };
inline constexpr phrase<> lng_context_seen_watched_none{ ushort(5526) };
inline constexpr phrase<lngtag_count> lng_context_seen_reacted{ ushort(5527) };
inline constexpr phrase<> lng_context_seen_reacted_none{ ushort(5533) };
inline constexpr phrase<> lng_context_seen_reacted_all{ ushort(5534) };
inline constexpr phrase<lngtag_user> lng_context_sent_by{ ushort(5535) };
inline constexpr phrase<> lng_context_set_as_quick{ ushort(5536) };
inline constexpr phrase<> lng_context_filter_by_tag{ ushort(5537) };
inline constexpr phrase<> lng_context_tag_add_name{ ushort(5538) };
inline constexpr phrase<> lng_context_tag_edit_name{ ushort(5539) };
inline constexpr phrase<> lng_context_remove_tag{ ushort(5540) };
inline constexpr phrase<> lng_context_delete_from_disk{ ushort(5541) };
inline constexpr phrase<> lng_context_delete_all_files{ ushort(5542) };
inline constexpr phrase<> lng_context_save_custom_sound{ ushort(5543) };
inline constexpr phrase<> lng_context_translate{ ushort(5544) };
inline constexpr phrase<> lng_context_translate_selected{ ushort(5545) };
inline constexpr phrase<> lng_context_read_hidden{ ushort(5546) };
inline constexpr phrase<> lng_context_read_show{ ushort(5547) };
inline constexpr phrase<> lng_context_edit_shortcut{ ushort(5548) };
inline constexpr phrase<> lng_context_delete_shortcut{ ushort(5549) };
inline constexpr phrase<> lng_context_gift_send{ ushort(5550) };
inline constexpr phrase<> lng_context_charge_fee{ ushort(5551) };
inline constexpr phrase<> lng_context_remove_fee{ ushort(5552) };
inline constexpr phrase<lngtag_name, lngtag_amount> lng_context_fee_now{ ushort(5553) };
inline constexpr phrase<lngtag_name> lng_context_fee_free{ ushort(5554) };
inline constexpr phrase<> lng_add_tag_about{ ushort(5555) };
inline constexpr phrase<lngtag_link> lng_subscribe_tag_about{ ushort(5556) };
inline constexpr phrase<> lng_subscribe_tag_link{ ushort(5557) };
inline constexpr phrase<> lng_edit_tag_about{ ushort(5558) };
inline constexpr phrase<> lng_edit_tag_name{ ushort(5559) };
inline constexpr phrase<> lng_add_tag_button{ ushort(5560) };
inline constexpr phrase<lngtag_arrow> lng_add_tag_phrase{ ushort(5561) };
inline constexpr phrase<lngtag_arrow> lng_add_tag_phrase_long{ ushort(5562) };
inline constexpr phrase<> lng_unlock_tags{ ushort(5563) };
inline constexpr phrase<lngtag_name> lng_context_animated_emoji{ ushort(5564) };
inline constexpr phrase<lngtag_count> lng_context_animated_emoji_many{ ushort(5565) };
inline constexpr phrase<lngtag_name> lng_context_animated_reaction{ ushort(5571) };
inline constexpr phrase<lngtag_name> lng_context_animated_tag{ ushort(5572) };
inline constexpr phrase<lngtag_name> lng_context_animated_reactions{ ushort(5573) };
inline constexpr phrase<lngtag_count> lng_context_animated_reactions_many{ ushort(5574) };
inline constexpr phrase<> lng_context_noforwards_info_channel{ ushort(5580) };
inline constexpr phrase<> lng_context_noforwards_info_group{ ushort(5581) };
inline constexpr phrase<> lng_context_noforwards_info_bot{ ushort(5582) };
inline constexpr phrase<> lng_context_spoiler_effect{ ushort(5583) };
inline constexpr phrase<> lng_context_disable_spoiler{ ushort(5584) };
inline constexpr phrase<> lng_context_make_paid{ ushort(5585) };
inline constexpr phrase<> lng_context_change_price{ ushort(5586) };
inline constexpr phrase<> lng_context_edit_cover{ ushort(5587) };
inline constexpr phrase<> lng_context_clear_cover{ ushort(5588) };
inline constexpr phrase<> lng_context_mention{ ushort(5589) };
inline constexpr phrase<> lng_context_search_from{ ushort(5590) };
inline constexpr phrase<> lng_factcheck_title{ ushort(5591) };
inline constexpr phrase<> lng_factcheck_placeholder{ ushort(5592) };
inline constexpr phrase<> lng_factcheck_whats_this{ ushort(5593) };
inline constexpr phrase<lngtag_country> lng_factcheck_about{ ushort(5594) };
inline constexpr phrase<> lng_factcheck_add_done{ ushort(5595) };
inline constexpr phrase<> lng_factcheck_edit_done{ ushort(5596) };
inline constexpr phrase<> lng_factcheck_remove_done{ ushort(5597) };
inline constexpr phrase<lngtag_country> lng_factcheck_bottom{ ushort(5598) };
inline constexpr phrase<> lng_factcheck_links{ ushort(5599) };
inline constexpr phrase<> lng_paid_title{ ushort(5600) };
inline constexpr phrase<> lng_paid_enter_cost{ ushort(5601) };
inline constexpr phrase<> lng_paid_cost_placeholder{ ushort(5602) };
inline constexpr phrase<lngtag_link> lng_paid_about{ ushort(5603) };
inline constexpr phrase<> lng_paid_about_link{ ushort(5604) };
inline constexpr phrase<> lng_paid_about_link_url{ ushort(5605) };
inline constexpr phrase<lngtag_price> lng_paid_price{ ushort(5606) };
inline constexpr phrase<> lng_paid_react_title{ ushort(5607) };
inline constexpr phrase<lngtag_channel> lng_paid_react_about{ ushort(5608) };
inline constexpr phrase<lngtag_count> lng_paid_react_already{ ushort(5609) };
inline constexpr phrase<> lng_paid_react_top_title{ ushort(5615) };
inline constexpr phrase<lngtag_price> lng_paid_react_send{ ushort(5616) };
inline constexpr phrase<lngtag_link> lng_paid_react_agree{ ushort(5617) };
inline constexpr phrase<> lng_paid_react_agree_link{ ushort(5618) };
inline constexpr phrase<lngtag_count> lng_paid_react_toast{ ushort(5619) };
inline constexpr phrase<lngtag_count> lng_paid_react_toast_anonymous{ ushort(5625) };
inline constexpr phrase<lngtag_count> lng_paid_react_toast_text{ ushort(5631) };
inline constexpr phrase<> lng_paid_react_undo{ ushort(5637) };
inline constexpr phrase<> lng_paid_react_show_in_top{ ushort(5638) };
inline constexpr phrase<> lng_paid_react_anonymous{ ushort(5639) };
inline constexpr phrase<> lng_sensitive_tag{ ushort(5640) };
inline constexpr phrase<> lng_sensitive_title{ ushort(5641) };
inline constexpr phrase<> lng_sensitive_text{ ushort(5642) };
inline constexpr phrase<> lng_sensitive_always{ ushort(5643) };
inline constexpr phrase<> lng_sensitive_view{ ushort(5644) };
inline constexpr phrase<> lng_sensitive_toast{ ushort(5645) };
inline constexpr phrase<> lng_translate_show_original{ ushort(5646) };
inline constexpr phrase<lngtag_language> lng_translate_return_original{ ushort(5647) };
inline constexpr phrase<lngtag_name> lng_translate_bar_to{ ushort(5648) };
inline constexpr phrase<lngtag_name> lng_translate_bar_to_other{ ushort(5649) };
inline constexpr phrase<> lng_translate_menu_to{ ushort(5650) };
inline constexpr phrase<lngtag_name> lng_translate_menu_dont{ ushort(5651) };
inline constexpr phrase<lngtag_name> lng_translate_menu_dont_other{ ushort(5652) };
inline constexpr phrase<> lng_translate_menu_hide{ ushort(5653) };
inline constexpr phrase<> lng_translate_hidden_user{ ushort(5654) };
inline constexpr phrase<> lng_translate_hidden_group{ ushort(5655) };
inline constexpr phrase<> lng_translate_hidden_channel{ ushort(5656) };
inline constexpr phrase<lngtag_name> lng_translate_dont_added{ ushort(5657) };
inline constexpr phrase<> lng_translate_settings{ ushort(5658) };
inline constexpr phrase<> lng_translate_undo{ ushort(5659) };
inline constexpr phrase<> lng_downloads_section{ ushort(5660) };
inline constexpr phrase<> lng_downloads_view_in_chat{ ushort(5661) };
inline constexpr phrase<> lng_downloads_view_in_section{ ushort(5662) };
inline constexpr phrase<> lng_downloads_delete_sure_one{ ushort(5663) };
inline constexpr phrase<> lng_downloads_delete_sure_all{ ushort(5664) };
inline constexpr phrase<lngtag_count> lng_downloads_delete_sure{ ushort(5665) };
inline constexpr phrase<> lng_downloads_delete_in_cloud_one{ ushort(5671) };
inline constexpr phrase<> lng_downloads_delete_in_cloud{ ushort(5672) };
inline constexpr phrase<lngtag_name> lng_send_image_empty{ ushort(5673) };
inline constexpr phrase<lngtag_count> lng_send_images_selected{ ushort(5674) };
inline constexpr phrase<lngtag_count> lng_send_files_selected{ ushort(5680) };
inline constexpr phrase<> lng_send_grouped{ ushort(5686) };
inline constexpr phrase<> lng_send_compressed_one{ ushort(5687) };
inline constexpr phrase<> lng_send_compressed{ ushort(5688) };
inline constexpr phrase<> lng_send_media_invalid_files{ ushort(5689) };
inline constexpr phrase<> lng_send_image{ ushort(5690) };
inline constexpr phrase<> lng_send_file{ ushort(5691) };
inline constexpr phrase<> lng_send_video{ ushort(5692) };
inline constexpr phrase<> lng_forward_choose{ ushort(5693) };
inline constexpr phrase<> lng_forward_cant{ ushort(5694) };
inline constexpr phrase<lngtag_recipient> lng_forward_share_contact{ ushort(5695) };
inline constexpr phrase<> lng_forward_share_cant{ ushort(5696) };
inline constexpr phrase<> lng_forward_send_files_cant{ ushort(5697) };
inline constexpr phrase<> lng_forward_send{ ushort(5698) };
inline constexpr phrase<lngtag_count> lng_forward_messages{ ushort(5699) };
inline constexpr phrase<lngtag_count, lngtag_user> lng_forwarding_from{ ushort(5705) };
inline constexpr phrase<lngtag_user, lngtag_second_user> lng_forwarding_from_two{ ushort(5711) };
inline constexpr phrase<> lng_inline_switch_choose{ ushort(5712) };
inline constexpr phrase<> lng_inline_switch_cant{ ushort(5713) };
inline constexpr phrase<lngtag_name> lng_preview_reply_to{ ushort(5714) };
inline constexpr phrase<lngtag_name> lng_preview_reply_to_quote{ ushort(5715) };
inline constexpr phrase<lngtag_title> lng_preview_reply_to_task{ ushort(5716) };
inline constexpr phrase<> lng_suggest_bar_title{ ushort(5717) };
inline constexpr phrase<> lng_suggest_bar_text{ ushort(5718) };
inline constexpr phrase<lngtag_amount> lng_suggest_bar_priced{ ushort(5719) };
inline constexpr phrase<lngtag_date> lng_suggest_bar_dated{ ushort(5720) };
inline constexpr phrase<> lng_suggest_options_title{ ushort(5721) };
inline constexpr phrase<> lng_suggest_options_change{ ushort(5722) };
inline constexpr phrase<> lng_suggest_options_stars_offer{ ushort(5723) };
inline constexpr phrase<> lng_suggest_options_stars_request{ ushort(5724) };
inline constexpr phrase<> lng_suggest_options_stars_price{ ushort(5725) };
inline constexpr phrase<> lng_suggest_options_stars_price_about{ ushort(5726) };
inline constexpr phrase<> lng_suggest_options_ton_offer{ ushort(5727) };
inline constexpr phrase<> lng_suggest_options_ton_request{ ushort(5728) };
inline constexpr phrase<> lng_suggest_options_ton_price{ ushort(5729) };
inline constexpr phrase<> lng_suggest_options_ton_price_about{ ushort(5730) };
inline constexpr phrase<> lng_suggest_options_date{ ushort(5731) };
inline constexpr phrase<> lng_suggest_options_date_any{ ushort(5732) };
inline constexpr phrase<> lng_suggest_options_date_publish{ ushort(5733) };
inline constexpr phrase<> lng_suggest_options_date_now{ ushort(5734) };
inline constexpr phrase<> lng_suggest_options_date_about{ ushort(5735) };
inline constexpr phrase<lngtag_count, lngtag_percent> lng_suggest_options_you_get_stars{ ushort(5736) };
inline constexpr phrase<lngtag_count, lngtag_percent> lng_suggest_options_you_get_ton{ ushort(5742) };
inline constexpr phrase<> lng_suggest_options_stars_warning{ ushort(5748) };
inline constexpr phrase<lngtag_amount> lng_suggest_options_offer{ ushort(5749) };
inline constexpr phrase<> lng_suggest_options_offer_free{ ushort(5750) };
inline constexpr phrase<> lng_suggest_options_update{ ushort(5751) };
inline constexpr phrase<> lng_suggest_options_update_date{ ushort(5752) };
inline constexpr phrase<> lng_suggest_action_decline{ ushort(5753) };
inline constexpr phrase<> lng_suggest_action_accept{ ushort(5754) };
inline constexpr phrase<> lng_suggest_action_change{ ushort(5755) };
inline constexpr phrase<> lng_suggest_action_your{ ushort(5756) };
inline constexpr phrase<lngtag_from> lng_suggest_action_his{ ushort(5757) };
inline constexpr phrase<> lng_suggest_action_price_label{ ushort(5758) };
inline constexpr phrase<> lng_suggest_action_price_free{ ushort(5759) };
inline constexpr phrase<> lng_suggest_action_time_label{ ushort(5760) };
inline constexpr phrase<> lng_suggest_action_time_any{ ushort(5761) };
inline constexpr phrase<> lng_suggest_action_agreement{ ushort(5762) };
inline constexpr phrase<lngtag_channel, lngtag_date> lng_suggest_action_agree_date{ ushort(5763) };
inline constexpr phrase<lngtag_count> lng_suggest_action_your_charged_stars{ ushort(5764) };
inline constexpr phrase<lngtag_count> lng_suggest_action_your_charged_ton{ ushort(5770) };
inline constexpr phrase<lngtag_count, lngtag_from> lng_suggest_action_his_charged_stars{ ushort(5776) };
inline constexpr phrase<lngtag_count, lngtag_from> lng_suggest_action_his_charged_ton{ ushort(5782) };
inline constexpr phrase<lngtag_channel> lng_suggest_action_agree_receive_stars{ ushort(5788) };
inline constexpr phrase<lngtag_channel> lng_suggest_action_agree_receive_ton{ ushort(5789) };
inline constexpr phrase<lngtag_channel> lng_suggest_action_agree_removed_stars{ ushort(5790) };
inline constexpr phrase<lngtag_channel> lng_suggest_action_agree_removed_ton{ ushort(5791) };
inline constexpr phrase<> lng_suggest_action_your_not_enough_stars{ ushort(5792) };
inline constexpr phrase<> lng_suggest_action_your_not_enough_ton{ ushort(5793) };
inline constexpr phrase<> lng_suggest_action_his_not_enough_stars{ ushort(5794) };
inline constexpr phrase<> lng_suggest_action_his_not_enough_ton{ ushort(5795) };
inline constexpr phrase<lngtag_from> lng_suggest_action_declined{ ushort(5796) };
inline constexpr phrase<lngtag_from> lng_suggest_action_declined_reason{ ushort(5797) };
inline constexpr phrase<lngtag_from> lng_suggest_change_price{ ushort(5798) };
inline constexpr phrase<lngtag_from> lng_suggest_change_time{ ushort(5799) };
inline constexpr phrase<lngtag_from> lng_suggest_change_price_time{ ushort(5800) };
inline constexpr phrase<lngtag_from> lng_suggest_change_content{ ushort(5801) };
inline constexpr phrase<> lng_suggest_change_price_label{ ushort(5802) };
inline constexpr phrase<> lng_suggest_change_time_label{ ushort(5803) };
inline constexpr phrase<> lng_suggest_change_text_label{ ushort(5804) };
inline constexpr phrase<> lng_suggest_menu_edit_message{ ushort(5805) };
inline constexpr phrase<> lng_suggest_menu_edit_price{ ushort(5806) };
inline constexpr phrase<> lng_suggest_menu_edit_time{ ushort(5807) };
inline constexpr phrase<> lng_suggest_decline_title{ ushort(5808) };
inline constexpr phrase<lngtag_from> lng_suggest_decline_text{ ushort(5809) };
inline constexpr phrase<lngtag_channel> lng_suggest_decline_text_to{ ushort(5810) };
inline constexpr phrase<> lng_suggest_decline_reason{ ushort(5811) };
inline constexpr phrase<> lng_suggest_accept_title{ ushort(5812) };
inline constexpr phrase<lngtag_from> lng_suggest_accept_text{ ushort(5813) };
inline constexpr phrase<lngtag_channel> lng_suggest_accept_text_to{ ushort(5814) };
inline constexpr phrase<lngtag_count, lngtag_channel, lngtag_percent, lngtag_date> lng_suggest_accept_receive_stars{ ushort(5815) };
inline constexpr phrase<lngtag_count, lngtag_channel, lngtag_percent, lngtag_date> lng_suggest_accept_receive_ton{ ushort(5821) };
inline constexpr phrase<lngtag_count, lngtag_channel, lngtag_percent> lng_suggest_accept_receive_now_stars{ ushort(5827) };
inline constexpr phrase<lngtag_count, lngtag_channel, lngtag_percent> lng_suggest_accept_receive_now_ton{ ushort(5833) };
inline constexpr phrase<> lng_suggest_accept_receive_if{ ushort(5839) };
inline constexpr phrase<lngtag_count, lngtag_date> lng_suggest_accept_pay_stars{ ushort(5840) };
inline constexpr phrase<lngtag_count, lngtag_date> lng_suggest_accept_pay_ton{ ushort(5846) };
inline constexpr phrase<lngtag_count> lng_suggest_accept_pay_now_stars{ ushort(5852) };
inline constexpr phrase<lngtag_count> lng_suggest_accept_pay_now_ton{ ushort(5858) };
inline constexpr phrase<> lng_suggest_accept_send{ ushort(5864) };
inline constexpr phrase<lngtag_count> lng_suggest_stars_amount{ ushort(5865) };
inline constexpr phrase<lngtag_count> lng_suggest_ton_amount{ ushort(5871) };
inline constexpr phrase<> lng_suggest_warn_title_stars{ ushort(5877) };
inline constexpr phrase<> lng_suggest_warn_title_ton{ ushort(5878) };
inline constexpr phrase<> lng_suggest_warn_text_stars{ ushort(5879) };
inline constexpr phrase<> lng_suggest_warn_text_ton{ ushort(5880) };
inline constexpr phrase<> lng_suggest_warn_delete_anyway{ ushort(5881) };
inline constexpr phrase<lngtag_amount> lng_suggest_low_ton_title{ ushort(5882) };
inline constexpr phrase<> lng_suggest_low_ton_text{ ushort(5883) };
inline constexpr phrase<> lng_suggest_low_ton_fragment{ ushort(5884) };
inline constexpr phrase<> lng_suggest_low_ton_fragment_url{ ushort(5885) };
inline constexpr phrase<> lng_reply_in_another_title{ ushort(5886) };
inline constexpr phrase<> lng_reply_in_another_chat{ ushort(5887) };
inline constexpr phrase<> lng_reply_in_author{ ushort(5888) };
inline constexpr phrase<> lng_reply_in_chats_list{ ushort(5889) };
inline constexpr phrase<> lng_reply_show_in_chat{ ushort(5890) };
inline constexpr phrase<> lng_reply_remove{ ushort(5891) };
inline constexpr phrase<> lng_reply_about_quote{ ushort(5892) };
inline constexpr phrase<> lng_reply_options_header{ ushort(5893) };
inline constexpr phrase<> lng_reply_options_quote{ ushort(5894) };
inline constexpr phrase<> lng_reply_header_short{ ushort(5895) };
inline constexpr phrase<> lng_reply_quote_selected{ ushort(5896) };
inline constexpr phrase<> lng_reply_from_private_chat{ ushort(5897) };
inline constexpr phrase<> lng_reply_quote_long_title{ ushort(5898) };
inline constexpr phrase<> lng_reply_quote_long_text{ ushort(5899) };
inline constexpr phrase<> lng_link_options_header{ ushort(5900) };
inline constexpr phrase<> lng_link_header_short{ ushort(5901) };
inline constexpr phrase<> lng_link_move_up{ ushort(5902) };
inline constexpr phrase<> lng_link_move_down{ ushort(5903) };
inline constexpr phrase<> lng_link_shrink_photo{ ushort(5904) };
inline constexpr phrase<> lng_link_enlarge_photo{ ushort(5905) };
inline constexpr phrase<> lng_link_remove{ ushort(5906) };
inline constexpr phrase<> lng_link_about_choose{ ushort(5907) };
inline constexpr phrase<> lng_share_cant{ ushort(5908) };
inline constexpr phrase<> lng_reply_cant{ ushort(5909) };
inline constexpr phrase<> lng_reply_cant_forward{ ushort(5910) };
inline constexpr phrase<> lng_share_title{ ushort(5911) };
inline constexpr phrase<lngtag_time> lng_share_at_time_title{ ushort(5912) };
inline constexpr phrase<> lng_share_copy_link{ ushort(5913) };
inline constexpr phrase<> lng_share_confirm{ ushort(5914) };
inline constexpr phrase<> lng_share_wrong_user{ ushort(5915) };
inline constexpr phrase<> lng_share_game_link_copied{ ushort(5916) };
inline constexpr phrase<> lng_share_done{ ushort(5917) };
inline constexpr phrase<> lng_share_message_to_saved_messages{ ushort(5918) };
inline constexpr phrase<> lng_share_messages_to_saved_messages{ ushort(5919) };
inline constexpr phrase<lngtag_chat> lng_share_message_to_chat{ ushort(5920) };
inline constexpr phrase<lngtag_chat> lng_share_messages_to_chat{ ushort(5921) };
inline constexpr phrase<lngtag_user, lngtag_chat> lng_share_message_to_two_chats{ ushort(5922) };
inline constexpr phrase<lngtag_user, lngtag_chat> lng_share_messages_to_two_chats{ ushort(5923) };
inline constexpr phrase<lngtag_count> lng_share_message_to_many_chats{ ushort(5924) };
inline constexpr phrase<lngtag_count> lng_share_messages_to_many_chats{ ushort(5930) };
inline constexpr phrase<> lng_contact_phone{ ushort(5936) };
inline constexpr phrase<> lng_enter_contact_data{ ushort(5937) };
inline constexpr phrase<> lng_contact_mobile_hidden{ ushort(5938) };
inline constexpr phrase<lngtag_user> lng_contact_phone_after{ ushort(5939) };
inline constexpr phrase<> lng_contact_share_phone{ ushort(5940) };
inline constexpr phrase<lngtag_user> lng_contact_phone_will_be_shared{ ushort(5941) };
inline constexpr phrase<> lng_edit_contact_title{ ushort(5942) };
inline constexpr phrase<> lng_edit_channel_title{ ushort(5943) };
inline constexpr phrase<> lng_edit_bot_title{ ushort(5944) };
inline constexpr phrase<> lng_edit_autotranslate{ ushort(5945) };
inline constexpr phrase<> lng_edit_sign_messages{ ushort(5946) };
inline constexpr phrase<> lng_edit_sign_messages_about{ ushort(5947) };
inline constexpr phrase<> lng_edit_sign_profiles{ ushort(5948) };
inline constexpr phrase<> lng_edit_sign_profiles_about{ ushort(5949) };
inline constexpr phrase<> lng_edit_group{ ushort(5950) };
inline constexpr phrase<> lng_edit_channel_color{ ushort(5951) };
inline constexpr phrase<> lng_edit_channel_level_min{ ushort(5952) };
inline constexpr phrase<> lng_edit_channel_wallpaper{ ushort(5953) };
inline constexpr phrase<> lng_edit_channel_wallpaper_about{ ushort(5954) };
inline constexpr phrase<> lng_edit_channel_wallpaper_group{ ushort(5955) };
inline constexpr phrase<> lng_edit_channel_wallpaper_about_group{ ushort(5956) };
inline constexpr phrase<> lng_edit_channel_status{ ushort(5957) };
inline constexpr phrase<> lng_edit_channel_status_about{ ushort(5958) };
inline constexpr phrase<> lng_edit_channel_status_group{ ushort(5959) };
inline constexpr phrase<> lng_edit_channel_status_about_group{ ushort(5960) };
inline constexpr phrase<> lng_edit_self_title{ ushort(5961) };
inline constexpr phrase<> lng_confirm_contact_data{ ushort(5962) };
inline constexpr phrase<> lng_add_contact{ ushort(5963) };
inline constexpr phrase<> lng_add_contact_button{ ushort(5964) };
inline constexpr phrase<> lng_contacts_header{ ushort(5965) };
inline constexpr phrase<> lng_menu_not_contact{ ushort(5966) };
inline constexpr phrase<> lng_contacts_hidden_stories{ ushort(5967) };
inline constexpr phrase<lngtag_count> lng_contacts_stories_status{ ushort(5968) };
inline constexpr phrase<lngtag_count> lng_contacts_stories_status_new{ ushort(5974) };
inline constexpr phrase<lngtag_name> lng_contact_not_joined{ ushort(5980) };
inline constexpr phrase<> lng_try_other_contact{ ushort(5981) };
inline constexpr phrase<> lng_create_group_link{ ushort(5982) };
inline constexpr phrase<> lng_create_group_invite_link{ ushort(5983) };
inline constexpr phrase<> lng_create_group_description{ ushort(5984) };
inline constexpr phrase<> lng_drag_images_here{ ushort(5985) };
inline constexpr phrase<> lng_drag_photos_here{ ushort(5986) };
inline constexpr phrase<> lng_drag_files_here{ ushort(5987) };
inline constexpr phrase<> lng_drag_to_send_quick{ ushort(5988) };
inline constexpr phrase<> lng_drag_to_send_no_compression{ ushort(5989) };
inline constexpr phrase<> lng_drag_to_send_files{ ushort(5990) };
inline constexpr phrase<> lng_selected_clear{ ushort(5991) };
inline constexpr phrase<> lng_selected_delete{ ushort(5992) };
inline constexpr phrase<> lng_selected_forward{ ushort(5993) };
inline constexpr phrase<> lng_selected_send_now{ ushort(5994) };
inline constexpr phrase<> lng_selected_cancel_sure_this{ ushort(5995) };
inline constexpr phrase<> lng_selected_upload_stop{ ushort(5996) };
inline constexpr phrase<> lng_selected_delete_sure_this{ ushort(5997) };
inline constexpr phrase<lngtag_count> lng_selected_delete_sure{ ushort(5998) };
inline constexpr phrase<> lng_selected_remove_saved_music{ ushort(6004) };
inline constexpr phrase<> lng_saved_music_added{ ushort(6005) };
inline constexpr phrase<> lng_saved_music_removed{ ushort(6006) };
inline constexpr phrase<> lng_delete_photo_sure{ ushort(6007) };
inline constexpr phrase<lngtag_count> lng_delete_for_everyone_hint{ ushort(6008) };
inline constexpr phrase<lngtag_count> lng_delete_for_me_chat_hint{ ushort(6014) };
inline constexpr phrase<lngtag_count> lng_delete_for_me_hint{ ushort(6020) };
inline constexpr phrase<> lng_delete_clear_for_me{ ushort(6026) };
inline constexpr phrase<> lng_edit_auto_delete_settings{ ushort(6027) };
inline constexpr phrase<> lng_enable_auto_delete{ ushort(6028) };
inline constexpr phrase<lngtag_user> lng_selected_unsend_about_user_one{ ushort(6029) };
inline constexpr phrase<lngtag_count, lngtag_user> lng_selected_unsend_about_user{ ushort(6030) };
inline constexpr phrase<> lng_selected_unsend_about_group_one{ ushort(6036) };
inline constexpr phrase<lngtag_count> lng_selected_unsend_about_group{ ushort(6037) };
inline constexpr phrase<> lng_delete_for_everyone_check{ ushort(6043) };
inline constexpr phrase<lngtag_user> lng_delete_for_other_check{ ushort(6044) };
inline constexpr phrase<> lng_delete_for_other_my{ ushort(6045) };
inline constexpr phrase<> lng_box_delete{ ushort(6046) };
inline constexpr phrase<> lng_box_leave{ ushort(6047) };
inline constexpr phrase<> lng_upload_sure_stop{ ushort(6048) };
inline constexpr phrase<> lng_download_sure_stop{ ushort(6049) };
inline constexpr phrase<> lng_upload_show_file{ ushort(6050) };
inline constexpr phrase<lngtag_version> lng_about_version{ ushort(6051) };
inline constexpr phrase<lngtag_api_link> lng_about_text1{ ushort(6052) };
inline constexpr phrase<> lng_about_text1_api{ ushort(6053) };
inline constexpr phrase<lngtag_gpl_link, lngtag_github_link> lng_about_text2{ ushort(6054) };
inline constexpr phrase<lngtag_faq_link> lng_about_text3{ ushort(6055) };
inline constexpr phrase<> lng_about_text3_faq{ ushort(6056) };
inline constexpr phrase<> lng_about_done{ ushort(6057) };
inline constexpr phrase<> lng_search_no_results{ ushort(6058) };
inline constexpr phrase<lngtag_count> lng_search_found_results{ ushort(6059) };
inline constexpr phrase<> lng_search_global_results{ ushort(6065) };
inline constexpr phrase<> lng_search_messages_from{ ushort(6066) };
inline constexpr phrase<lngtag_n, lngtag_amount> lng_search_messages_n_of_amount{ ushort(6067) };
inline constexpr phrase<> lng_search_messages_none{ ushort(6068) };
inline constexpr phrase<> lng_search_filter_all{ ushort(6069) };
inline constexpr phrase<> lng_search_filter_private{ ushort(6070) };
inline constexpr phrase<> lng_search_filter_group{ ushort(6071) };
inline constexpr phrase<> lng_search_filter_channel{ ushort(6072) };
inline constexpr phrase<> lng_search_sponsored_button{ ushort(6073) };
inline constexpr phrase<lngtag_ready, lngtag_total, lngtag_mb> lng_media_save_progress{ ushort(6074) };
inline constexpr phrase<> lng_mediaview_save_as{ ushort(6075) };
inline constexpr phrase<> lng_mediaview_copy{ ushort(6076) };
inline constexpr phrase<> lng_mediaview_copy_frame{ ushort(6077) };
inline constexpr phrase<> lng_mediaview_forward{ ushort(6078) };
inline constexpr phrase<lngtag_time> lng_mediaview_share_at_time{ ushort(6079) };
inline constexpr phrase<> lng_mediaview_delete{ ushort(6080) };
inline constexpr phrase<> lng_mediaview_save_to_profile{ ushort(6081) };
inline constexpr phrase<> lng_mediaview_pin_story_done{ ushort(6082) };
inline constexpr phrase<> lng_mediaview_pin_story_about{ ushort(6083) };
inline constexpr phrase<lngtag_count> lng_mediaview_pin_stories_done{ ushort(6084) };
inline constexpr phrase<lngtag_count> lng_mediaview_pin_stories_about{ ushort(6090) };
inline constexpr phrase<> lng_mediaview_unpin_story_done{ ushort(6096) };
inline constexpr phrase<lngtag_count> lng_mediaview_unpin_stories_done{ ushort(6097) };
inline constexpr phrase<lngtag_count> lng_mediaview_pin_limit{ ushort(6103) };
inline constexpr phrase<> lng_mediaview_archive_story{ ushort(6109) };
inline constexpr phrase<> lng_mediaview_photos_all{ ushort(6110) };
inline constexpr phrase<> lng_mediaview_files_all{ ushort(6111) };
inline constexpr phrase<> lng_mediaview_single_photo{ ushort(6112) };
inline constexpr phrase<> lng_mediaview_group_photo{ ushort(6113) };
inline constexpr phrase<> lng_mediaview_channel_photo{ ushort(6114) };
inline constexpr phrase<> lng_mediaview_profile_photo{ ushort(6115) };
inline constexpr phrase<> lng_mediaview_profile_public_photo{ ushort(6116) };
inline constexpr phrase<> lng_mediaview_profile_photo_by_you{ ushort(6117) };
inline constexpr phrase<lngtag_file, lngtag_n, lngtag_amount> lng_mediaview_file_n_of_amount{ ushort(6118) };
inline constexpr phrase<lngtag_n, lngtag_amount> lng_mediaview_n_of_amount{ ushort(6119) };
inline constexpr phrase<> lng_mediaview_doc_image{ ushort(6120) };
inline constexpr phrase<lngtag_time> lng_mediaview_today{ ushort(6121) };
inline constexpr phrase<lngtag_time> lng_mediaview_yesterday{ ushort(6122) };
inline constexpr phrase<> lng_mediaview_just_now{ ushort(6123) };
inline constexpr phrase<lngtag_count> lng_mediaview_minutes_ago{ ushort(6124) };
inline constexpr phrase<lngtag_count> lng_mediaview_hours_ago{ ushort(6130) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_mediaview_date_time{ ushort(6136) };
inline constexpr phrase<> lng_mediaview_set_userpic{ ushort(6137) };
inline constexpr phrase<> lng_mediaview_report_profile_photo{ ushort(6138) };
inline constexpr phrase<> lng_mediaview_title{ ushort(6139) };
inline constexpr phrase<lngtag_downloads> lng_mediaview_saved_to{ ushort(6140) };
inline constexpr phrase<lngtag_downloads> lng_mediaview_saved_images_to{ ushort(6141) };
inline constexpr phrase<lngtag_downloads> lng_mediaview_video_saved_to{ ushort(6142) };
inline constexpr phrase<> lng_mediaview_downloads{ ushort(6143) };
inline constexpr phrase<lngtag_speed> lng_mediaview_playback_speed{ ushort(6144) };
inline constexpr phrase<> lng_mediaview_rotate_video{ ushort(6145) };
inline constexpr phrase<> lng_mediaview_quality_auto{ ushort(6146) };
inline constexpr phrase<> lng_theme_preview_title{ ushort(6147) };
inline constexpr phrase<> lng_theme_preview_generating{ ushort(6148) };
inline constexpr phrase<> lng_theme_preview_invalid{ ushort(6149) };
inline constexpr phrase<> lng_theme_preview_apply{ ushort(6150) };
inline constexpr phrase<lngtag_count> lng_theme_preview_users{ ushort(6151) };
inline constexpr phrase<lngtag_version, lngtag_changes, lngtag_link> lng_new_version_wrap{ ushort(6157) };
inline constexpr phrase<> lng_new_version_minor{ ushort(6158) };
inline constexpr phrase<> lng_menu_insert_unicode{ ushort(6159) };
inline constexpr phrase<> lng_menu_formatting{ ushort(6160) };
inline constexpr phrase<> lng_menu_formatting_bold{ ushort(6161) };
inline constexpr phrase<> lng_menu_formatting_italic{ ushort(6162) };
inline constexpr phrase<> lng_menu_formatting_underline{ ushort(6163) };
inline constexpr phrase<> lng_menu_formatting_strike_out{ ushort(6164) };
inline constexpr phrase<> lng_menu_formatting_blockquote{ ushort(6165) };
inline constexpr phrase<> lng_menu_formatting_monospace{ ushort(6166) };
inline constexpr phrase<> lng_menu_formatting_spoiler{ ushort(6167) };
inline constexpr phrase<> lng_menu_formatting_link_create{ ushort(6168) };
inline constexpr phrase<> lng_menu_formatting_link_edit{ ushort(6169) };
inline constexpr phrase<> lng_menu_formatting_clear{ ushort(6170) };
inline constexpr phrase<> lng_formatting_link_create_title{ ushort(6171) };
inline constexpr phrase<> lng_formatting_link_edit_title{ ushort(6172) };
inline constexpr phrase<> lng_formatting_link_text{ ushort(6173) };
inline constexpr phrase<> lng_formatting_link_url{ ushort(6174) };
inline constexpr phrase<> lng_formatting_link_create{ ushort(6175) };
inline constexpr phrase<> lng_formatting_code_title{ ushort(6176) };
inline constexpr phrase<> lng_formatting_code_language{ ushort(6177) };
inline constexpr phrase<> lng_formatting_code_auto{ ushort(6178) };
inline constexpr phrase<> lng_text_copied{ ushort(6179) };
inline constexpr phrase<> lng_code_copied{ ushort(6180) };
inline constexpr phrase<> lng_spellchecker_submenu{ ushort(6181) };
inline constexpr phrase<> lng_spellchecker_add{ ushort(6182) };
inline constexpr phrase<> lng_spellchecker_remove{ ushort(6183) };
inline constexpr phrase<> lng_spellchecker_ignore{ ushort(6184) };
inline constexpr phrase<lngtag_first_name, lngtag_last_name> lng_full_name{ ushort(6185) };
inline constexpr phrase<> lng_confirm_phone_link_invalid{ ushort(6186) };
inline constexpr phrase<> lng_confirm_phone_title{ ushort(6187) };
inline constexpr phrase<lngtag_phone> lng_confirm_phone_about{ ushort(6188) };
inline constexpr phrase<lngtag_phone> lng_confirm_phone_success{ ushort(6189) };
inline constexpr phrase<> lng_confirm_phone_send{ ushort(6190) };
inline constexpr phrase<> lng_confirm_phone_enter_code{ ushort(6191) };
inline constexpr phrase<> lng_theme_editor_no_keys{ ushort(6192) };
inline constexpr phrase<> lng_theme_editor_cant_change_theme{ ushort(6193) };
inline constexpr phrase<> lng_theme_editor_new_keys{ ushort(6194) };
inline constexpr phrase<> lng_theme_editor_background_image{ ushort(6195) };
inline constexpr phrase<lngtag_size> lng_theme_editor_saved_to_jpg{ ushort(6196) };
inline constexpr phrase<lngtag_size> lng_theme_editor_read_from_jpg{ ushort(6197) };
inline constexpr phrase<lngtag_size> lng_theme_editor_read_from_png{ ushort(6198) };
inline constexpr phrase<> lng_theme_editor_choose_image{ ushort(6199) };
inline constexpr phrase<> lng_theme_editor_choose_name{ ushort(6200) };
inline constexpr phrase<> lng_theme_editor_error{ ushort(6201) };
inline constexpr phrase<> lng_theme_editor_sure_close{ ushort(6202) };
inline constexpr phrase<> lng_theme_editor_need_auth{ ushort(6203) };
inline constexpr phrase<> lng_theme_editor_need_unlock{ ushort(6204) };
inline constexpr phrase<> lng_theme_editor_done{ ushort(6205) };
inline constexpr phrase<> lng_theme_editor_title{ ushort(6206) };
inline constexpr phrase<> lng_theme_editor_save_button{ ushort(6207) };
inline constexpr phrase<> lng_theme_editor_create_title{ ushort(6208) };
inline constexpr phrase<> lng_theme_editor_create{ ushort(6209) };
inline constexpr phrase<> lng_theme_editor_name{ ushort(6210) };
inline constexpr phrase<> lng_theme_editor_create_description{ ushort(6211) };
inline constexpr phrase<> lng_theme_editor_attach_description{ ushort(6212) };
inline constexpr phrase<> lng_theme_editor_import_existing{ ushort(6213) };
inline constexpr phrase<> lng_theme_editor_save_title{ ushort(6214) };
inline constexpr phrase<> lng_theme_editor_link_about{ ushort(6215) };
inline constexpr phrase<> lng_theme_editor_menu_export{ ushort(6216) };
inline constexpr phrase<> lng_theme_editor_menu_import{ ushort(6217) };
inline constexpr phrase<> lng_theme_editor_menu_show{ ushort(6218) };
inline constexpr phrase<> lng_payments_webview_no_use{ ushort(6219) };
inline constexpr phrase<lngtag_link> lng_payments_webview_install_edge{ ushort(6220) };
inline constexpr phrase<> lng_payments_webview_install_webkit{ ushort(6221) };
inline constexpr phrase<> lng_payments_webview_enable_opengl{ ushort(6222) };
inline constexpr phrase<> lng_payments_webview_switch_x11{ ushort(6223) };
inline constexpr phrase<> lng_payments_webview_update_windows{ ushort(6224) };
inline constexpr phrase<> lng_payments_sure_close{ ushort(6225) };
inline constexpr phrase<> lng_payments_receipt_label{ ushort(6226) };
inline constexpr phrase<> lng_payments_receipt_label_test{ ushort(6227) };
inline constexpr phrase<> lng_payments_invoice_label{ ushort(6228) };
inline constexpr phrase<> lng_payments_invoice_label_test{ ushort(6229) };
inline constexpr phrase<> lng_payments_receipt_button{ ushort(6230) };
inline constexpr phrase<lngtag_amount, lngtag_title> lng_payments_success{ ushort(6231) };
inline constexpr phrase<> lng_payments_checkout_title{ ushort(6232) };
inline constexpr phrase<> lng_payments_receipt_title{ ushort(6233) };
inline constexpr phrase<> lng_payments_total_label{ ushort(6234) };
inline constexpr phrase<> lng_payments_date_label{ ushort(6235) };
inline constexpr phrase<lngtag_amount> lng_payments_pay_amount{ ushort(6236) };
inline constexpr phrase<> lng_payments_payment_method{ ushort(6237) };
inline constexpr phrase<> lng_payments_new_card{ ushort(6238) };
inline constexpr phrase<> lng_payments_shipping_address{ ushort(6239) };
inline constexpr phrase<> lng_payments_address_street1{ ushort(6240) };
inline constexpr phrase<> lng_payments_address_street2{ ushort(6241) };
inline constexpr phrase<> lng_payments_address_city{ ushort(6242) };
inline constexpr phrase<> lng_payments_address_state{ ushort(6243) };
inline constexpr phrase<> lng_payments_address_country{ ushort(6244) };
inline constexpr phrase<> lng_payments_address_postcode{ ushort(6245) };
inline constexpr phrase<> lng_payments_shipping_method{ ushort(6246) };
inline constexpr phrase<> lng_payments_info_name{ ushort(6247) };
inline constexpr phrase<> lng_payments_info_email{ ushort(6248) };
inline constexpr phrase<> lng_payments_info_phone{ ushort(6249) };
inline constexpr phrase<lngtag_provider> lng_payments_to_provider_phone_email{ ushort(6250) };
inline constexpr phrase<lngtag_provider> lng_payments_to_provider_email{ ushort(6251) };
inline constexpr phrase<lngtag_provider> lng_payments_to_provider_phone{ ushort(6252) };
inline constexpr phrase<lngtag_provider> lng_payments_processed_by{ ushort(6253) };
inline constexpr phrase<> lng_payments_warning_title{ ushort(6254) };
inline constexpr phrase<lngtag_bot1, lngtag_provider, lngtag_bot2, lngtag_bot3> lng_payments_warning_body{ ushort(6255) };
inline constexpr phrase<> lng_payments_shipping_address_title{ ushort(6256) };
inline constexpr phrase<> lng_payments_card_title{ ushort(6257) };
inline constexpr phrase<> lng_payments_card_number{ ushort(6258) };
inline constexpr phrase<> lng_payments_card_cvc{ ushort(6259) };
inline constexpr phrase<> lng_payments_card_expire_date{ ushort(6260) };
inline constexpr phrase<> lng_payments_card_holder{ ushort(6261) };
inline constexpr phrase<> lng_payments_billing_address{ ushort(6262) };
inline constexpr phrase<> lng_payments_billing_country{ ushort(6263) };
inline constexpr phrase<> lng_payments_billing_zip_code{ ushort(6264) };
inline constexpr phrase<> lng_payments_save_information{ ushort(6265) };
inline constexpr phrase<> lng_payments_need_password{ ushort(6266) };
inline constexpr phrase<> lng_payments_password_title{ ushort(6267) };
inline constexpr phrase<lngtag_card> lng_payments_password_description{ ushort(6268) };
inline constexpr phrase<> lng_payments_password_submit{ ushort(6269) };
inline constexpr phrase<> lng_payments_tips_label{ ushort(6270) };
inline constexpr phrase<> lng_payments_tips_box_title{ ushort(6271) };
inline constexpr phrase<lngtag_amount> lng_payments_tips_max{ ushort(6272) };
inline constexpr phrase<> lng_payments_shipping_not_available{ ushort(6273) };
inline constexpr phrase<> lng_payments_card_declined{ ushort(6274) };
inline constexpr phrase<> lng_payments_payment_failed{ ushort(6275) };
inline constexpr phrase<> lng_payments_precheckout_failed{ ushort(6276) };
inline constexpr phrase<> lng_payments_precheckout_timeout{ ushort(6277) };
inline constexpr phrase<> lng_payments_precheckout_stars_failed{ ushort(6278) };
inline constexpr phrase<> lng_payments_precheckout_stars_timeout{ ushort(6279) };
inline constexpr phrase<> lng_payments_already_paid{ ushort(6280) };
inline constexpr phrase<> lng_payments_terms_title{ ushort(6281) };
inline constexpr phrase<lngtag_bot> lng_payments_terms_text{ ushort(6282) };
inline constexpr phrase<lngtag_bot> lng_payments_terms_text_once{ ushort(6283) };
inline constexpr phrase<lngtag_link> lng_payments_terms_agree{ ushort(6284) };
inline constexpr phrase<> lng_payments_terms_link{ ushort(6285) };
inline constexpr phrase<> lng_payments_terms_accept{ ushort(6286) };
inline constexpr phrase<> lng_call_status_incoming{ ushort(6287) };
inline constexpr phrase<> lng_call_status_connecting{ ushort(6288) };
inline constexpr phrase<> lng_call_status_exchanging{ ushort(6289) };
inline constexpr phrase<> lng_call_status_waiting{ ushort(6290) };
inline constexpr phrase<> lng_call_status_requesting{ ushort(6291) };
inline constexpr phrase<> lng_call_status_hanging{ ushort(6292) };
inline constexpr phrase<> lng_call_status_ended{ ushort(6293) };
inline constexpr phrase<> lng_call_status_failed{ ushort(6294) };
inline constexpr phrase<> lng_call_status_ringing{ ushort(6295) };
inline constexpr phrase<> lng_call_status_busy{ ushort(6296) };
inline constexpr phrase<> lng_call_status_group_invite{ ushort(6297) };
inline constexpr phrase<> lng_call_status_sure{ ushort(6298) };
inline constexpr phrase<lngtag_user> lng_call_fingerprint_tooltip{ ushort(6299) };
inline constexpr phrase<lngtag_user> lng_call_error_not_available{ ushort(6300) };
inline constexpr phrase<lngtag_user> lng_call_error_outdated{ ushort(6301) };
inline constexpr phrase<> lng_call_error_no_camera{ ushort(6302) };
inline constexpr phrase<> lng_call_error_camera_not_started{ ushort(6303) };
inline constexpr phrase<lngtag_user> lng_call_error_camera_outdated{ ushort(6304) };
inline constexpr phrase<> lng_call_error_audio_io{ ushort(6305) };
inline constexpr phrase<> lng_call_error_add_not_started{ ushort(6306) };
inline constexpr phrase<> lng_call_bar_hangup{ ushort(6307) };
inline constexpr phrase<> lng_call_leave_to_other_sure{ ushort(6308) };
inline constexpr phrase<> lng_call_leave_to_other_sure_channel{ ushort(6309) };
inline constexpr phrase<> lng_call_box_title{ ushort(6310) };
inline constexpr phrase<> lng_call_box_about{ ushort(6311) };
inline constexpr phrase<lngtag_time> lng_call_box_status_today{ ushort(6312) };
inline constexpr phrase<lngtag_time> lng_call_box_status_yesterday{ ushort(6313) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_call_box_status_date{ ushort(6314) };
inline constexpr phrase<lngtag_amount, lngtag_status> lng_call_box_status_group{ ushort(6315) };
inline constexpr phrase<> lng_call_box_clear_all{ ushort(6316) };
inline constexpr phrase<> lng_call_box_clear_sure{ ushort(6317) };
inline constexpr phrase<> lng_call_box_clear_button{ ushort(6318) };
inline constexpr phrase<> lng_call_box_groupcalls_subtitle{ ushort(6319) };
inline constexpr phrase<> lng_call_outgoing{ ushort(6320) };
inline constexpr phrase<> lng_call_video_outgoing{ ushort(6321) };
inline constexpr phrase<> lng_call_group_outgoing{ ushort(6322) };
inline constexpr phrase<> lng_call_incoming{ ushort(6323) };
inline constexpr phrase<> lng_call_video_incoming{ ushort(6324) };
inline constexpr phrase<> lng_call_group_incoming{ ushort(6325) };
inline constexpr phrase<> lng_call_missed{ ushort(6326) };
inline constexpr phrase<> lng_call_video_missed{ ushort(6327) };
inline constexpr phrase<> lng_call_group_missed{ ushort(6328) };
inline constexpr phrase<> lng_call_cancelled{ ushort(6329) };
inline constexpr phrase<> lng_call_video_cancelled{ ushort(6330) };
inline constexpr phrase<> lng_call_declined{ ushort(6331) };
inline constexpr phrase<> lng_call_video_declined{ ushort(6332) };
inline constexpr phrase<> lng_call_group_declined{ ushort(6333) };
inline constexpr phrase<lngtag_time, lngtag_duration> lng_call_duration_info{ ushort(6334) };
inline constexpr phrase<lngtag_type, lngtag_duration> lng_call_type_and_duration{ ushort(6335) };
inline constexpr phrase<> lng_call_invitation{ ushort(6336) };
inline constexpr phrase<> lng_call_ongoing{ ushort(6337) };
inline constexpr phrase<> lng_call_rate_label{ ushort(6338) };
inline constexpr phrase<> lng_call_rate_comment{ ushort(6339) };
inline constexpr phrase<> lng_call_start{ ushort(6340) };
inline constexpr phrase<> lng_call_start_video{ ushort(6341) };
inline constexpr phrase<> lng_call_stop_video{ ushort(6342) };
inline constexpr phrase<> lng_call_screencast{ ushort(6343) };
inline constexpr phrase<> lng_call_add_people{ ushort(6344) };
inline constexpr phrase<> lng_call_end_call{ ushort(6345) };
inline constexpr phrase<> lng_call_mute_audio{ ushort(6346) };
inline constexpr phrase<> lng_call_unmute_audio{ ushort(6347) };
inline constexpr phrase<> lng_call_accept{ ushort(6348) };
inline constexpr phrase<> lng_call_decline{ ushort(6349) };
inline constexpr phrase<> lng_call_redial{ ushort(6350) };
inline constexpr phrase<> lng_call_cancel{ ushort(6351) };
inline constexpr phrase<lngtag_user> lng_call_microphone_off{ ushort(6352) };
inline constexpr phrase<lngtag_user> lng_call_battery_level_low{ ushort(6353) };
inline constexpr phrase<> lng_group_call_title{ ushort(6354) };
inline constexpr phrase<> lng_group_call_title_channel{ ushort(6355) };
inline constexpr phrase<> lng_group_call_active{ ushort(6356) };
inline constexpr phrase<> lng_group_call_inactive{ ushort(6357) };
inline constexpr phrase<> lng_group_call_raised_hand_status{ ushort(6358) };
inline constexpr phrase<> lng_group_call_settings{ ushort(6359) };
inline constexpr phrase<> lng_group_call_video{ ushort(6360) };
inline constexpr phrase<> lng_group_call_screen_share_start{ ushort(6361) };
inline constexpr phrase<> lng_group_call_screen_share_stop{ ushort(6362) };
inline constexpr phrase<lngtag_index> lng_group_call_screen_title{ ushort(6363) };
inline constexpr phrase<> lng_group_call_screen_share_audio{ ushort(6364) };
inline constexpr phrase<> lng_group_call_unmute{ ushort(6365) };
inline constexpr phrase<> lng_group_call_unmute_sub{ ushort(6366) };
inline constexpr phrase<> lng_group_call_you_are_live{ ushort(6367) };
inline constexpr phrase<> lng_group_call_force_muted{ ushort(6368) };
inline constexpr phrase<> lng_group_call_force_muted_sub{ ushort(6369) };
inline constexpr phrase<> lng_group_call_raised_hand{ ushort(6370) };
inline constexpr phrase<> lng_group_call_connecting{ ushort(6371) };
inline constexpr phrase<> lng_group_call_leave{ ushort(6372) };
inline constexpr phrase<> lng_group_call_leave_title{ ushort(6373) };
inline constexpr phrase<> lng_group_call_leave_title_call{ ushort(6374) };
inline constexpr phrase<> lng_group_call_leave_title_channel{ ushort(6375) };
inline constexpr phrase<> lng_group_call_leave_sure{ ushort(6376) };
inline constexpr phrase<> lng_group_call_leave_sure_call{ ushort(6377) };
inline constexpr phrase<> lng_group_call_leave_sure_channel{ ushort(6378) };
inline constexpr phrase<> lng_group_call_close{ ushort(6379) };
inline constexpr phrase<> lng_group_call_close_sure{ ushort(6380) };
inline constexpr phrase<> lng_group_call_close_sure_channel{ ushort(6381) };
inline constexpr phrase<> lng_group_call_also_cancel{ ushort(6382) };
inline constexpr phrase<> lng_group_call_also_cancel_channel{ ushort(6383) };
inline constexpr phrase<> lng_group_call_leave_to_other_sure{ ushort(6384) };
inline constexpr phrase<> lng_group_call_leave_to_other_sure_channel{ ushort(6385) };
inline constexpr phrase<> lng_group_call_leave_channel_to_other_sure{ ushort(6386) };
inline constexpr phrase<> lng_group_call_leave_channel_to_other_sure_channel{ ushort(6387) };
inline constexpr phrase<> lng_group_call_create_sure{ ushort(6388) };
inline constexpr phrase<> lng_group_call_create_sure_channel{ ushort(6389) };
inline constexpr phrase<> lng_group_call_join_sure_personal{ ushort(6390) };
inline constexpr phrase<> lng_group_call_muted_no_camera{ ushort(6391) };
inline constexpr phrase<> lng_group_call_muted_no_screen{ ushort(6392) };
inline constexpr phrase<> lng_group_call_chat_no_camera{ ushort(6393) };
inline constexpr phrase<> lng_group_call_chat_no_screen{ ushort(6394) };
inline constexpr phrase<> lng_group_call_failed_screen{ ushort(6395) };
inline constexpr phrase<> lng_group_call_failed_camera{ ushort(6396) };
inline constexpr phrase<> lng_group_call_tooltip_screen{ ushort(6397) };
inline constexpr phrase<> lng_group_call_tooltip_camera{ ushort(6398) };
inline constexpr phrase<> lng_group_call_tooltip_microphone{ ushort(6399) };
inline constexpr phrase<> lng_group_call_tooltip_camera_off{ ushort(6400) };
inline constexpr phrase<> lng_group_call_tooltip_force_muted{ ushort(6401) };
inline constexpr phrase<> lng_group_call_tooltip_raised_hand{ ushort(6402) };
inline constexpr phrase<> lng_group_call_also_end{ ushort(6403) };
inline constexpr phrase<> lng_group_call_also_end_channel{ ushort(6404) };
inline constexpr phrase<> lng_group_call_settings_title{ ushort(6405) };
inline constexpr phrase<> lng_group_call_invite{ ushort(6406) };
inline constexpr phrase<> lng_group_call_invite_conf{ ushort(6407) };
inline constexpr phrase<> lng_group_call_invited_status{ ushort(6408) };
inline constexpr phrase<> lng_group_call_calling_status{ ushort(6409) };
inline constexpr phrase<> lng_group_call_blockchain_only_status{ ushort(6410) };
inline constexpr phrase<> lng_group_call_muted_by_me_status{ ushort(6411) };
inline constexpr phrase<> lng_group_call_invite_title{ ushort(6412) };
inline constexpr phrase<> lng_group_call_invite_button{ ushort(6413) };
inline constexpr phrase<> lng_group_call_confcall_add{ ushort(6414) };
inline constexpr phrase<lngtag_user, lngtag_group> lng_group_call_add_to_group_one{ ushort(6415) };
inline constexpr phrase<lngtag_group> lng_group_call_add_to_group_some{ ushort(6416) };
inline constexpr phrase<lngtag_group> lng_group_call_add_to_group_all{ ushort(6417) };
inline constexpr phrase<> lng_group_call_invite_members{ ushort(6418) };
inline constexpr phrase<> lng_group_call_invite_search_results{ ushort(6419) };
inline constexpr phrase<> lng_group_call_invite_limit{ ushort(6420) };
inline constexpr phrase<> lng_group_call_new_muted{ ushort(6421) };
inline constexpr phrase<> lng_group_call_speakers{ ushort(6422) };
inline constexpr phrase<> lng_group_call_microphone{ ushort(6423) };
inline constexpr phrase<> lng_group_call_push_to_talk{ ushort(6424) };
inline constexpr phrase<> lng_group_call_ptt_shortcut{ ushort(6425) };
inline constexpr phrase<> lng_group_call_ptt_recording{ ushort(6426) };
inline constexpr phrase<lngtag_amount> lng_group_call_ptt_delay_ms{ ushort(6427) };
inline constexpr phrase<lngtag_amount> lng_group_call_ptt_delay_s{ ushort(6428) };
inline constexpr phrase<lngtag_delay> lng_group_call_ptt_delay{ ushort(6429) };
inline constexpr phrase<> lng_group_call_share{ ushort(6430) };
inline constexpr phrase<> lng_group_call_noise_suppression{ ushort(6431) };
inline constexpr phrase<> lng_group_call_video_paused{ ushort(6432) };
inline constexpr phrase<> lng_group_call_share_speaker{ ushort(6433) };
inline constexpr phrase<> lng_group_call_copy_speaker_link{ ushort(6434) };
inline constexpr phrase<> lng_group_call_copy_listener_link{ ushort(6435) };
inline constexpr phrase<> lng_group_call_end{ ushort(6436) };
inline constexpr phrase<> lng_group_call_end_channel{ ushort(6437) };
inline constexpr phrase<> lng_group_call_cancel{ ushort(6438) };
inline constexpr phrase<> lng_group_call_cancel_channel{ ushort(6439) };
inline constexpr phrase<> lng_group_call_join{ ushort(6440) };
inline constexpr phrase<lngtag_chat> lng_group_call_join_confirm{ ushort(6441) };
inline constexpr phrase<lngtag_chat> lng_group_call_join_confirm_channel{ ushort(6442) };
inline constexpr phrase<lngtag_user> lng_group_call_invite_done_user{ ushort(6443) };
inline constexpr phrase<lngtag_count> lng_group_call_invite_done_many{ ushort(6444) };
inline constexpr phrase<> lng_group_call_no_members{ ushort(6450) };
inline constexpr phrase<lngtag_count> lng_group_call_members{ ushort(6451) };
inline constexpr phrase<> lng_group_call_context_mute{ ushort(6457) };
inline constexpr phrase<> lng_group_call_context_unmute{ ushort(6458) };
inline constexpr phrase<> lng_group_call_context_remove_hand{ ushort(6459) };
inline constexpr phrase<> lng_group_call_context_mute_for_me{ ushort(6460) };
inline constexpr phrase<> lng_group_call_context_unmute_for_me{ ushort(6461) };
inline constexpr phrase<> lng_group_call_context_pin_camera{ ushort(6462) };
inline constexpr phrase<> lng_group_call_context_unpin_camera{ ushort(6463) };
inline constexpr phrase<> lng_group_call_context_pin_screen{ ushort(6464) };
inline constexpr phrase<> lng_group_call_context_unpin_screen{ ushort(6465) };
inline constexpr phrase<> lng_group_call_context_remove{ ushort(6466) };
inline constexpr phrase<> lng_group_call_context_cancel_invite{ ushort(6467) };
inline constexpr phrase<> lng_group_call_context_stop_ringing{ ushort(6468) };
inline constexpr phrase<> lng_group_call_context_ban_from_call{ ushort(6469) };
inline constexpr phrase<lngtag_channel> lng_group_call_remove_channel{ ushort(6470) };
inline constexpr phrase<lngtag_channel> lng_group_call_remove_channel_from_channel{ ushort(6471) };
inline constexpr phrase<> lng_group_call_mac_access{ ushort(6472) };
inline constexpr phrase<> lng_group_call_mac_input{ ushort(6473) };
inline constexpr phrase<> lng_group_call_mac_accessibility{ ushort(6474) };
inline constexpr phrase<> lng_group_call_mac_screencast_access{ ushort(6475) };
inline constexpr phrase<> lng_group_call_mac_recording{ ushort(6476) };
inline constexpr phrase<> lng_group_call_mac_settings{ ushort(6477) };
inline constexpr phrase<> lng_group_call_start_as_header{ ushort(6478) };
inline constexpr phrase<> lng_group_call_start_as_header_channel{ ushort(6479) };
inline constexpr phrase<> lng_group_call_join_as_header{ ushort(6480) };
inline constexpr phrase<> lng_group_call_join_as_header_channel{ ushort(6481) };
inline constexpr phrase<> lng_group_call_display_as_header{ ushort(6482) };
inline constexpr phrase<> lng_group_call_join_as_about{ ushort(6483) };
inline constexpr phrase<lngtag_link> lng_group_call_or_schedule{ ushort(6484) };
inline constexpr phrase<> lng_group_call_schedule{ ushort(6485) };
inline constexpr phrase<> lng_group_call_schedule_channel{ ushort(6486) };
inline constexpr phrase<> lng_group_call_schedule_title{ ushort(6487) };
inline constexpr phrase<> lng_group_call_schedule_title_channel{ ushort(6488) };
inline constexpr phrase<lngtag_duration> lng_group_call_schedule_notified_group{ ushort(6489) };
inline constexpr phrase<lngtag_duration> lng_group_call_schedule_notified_channel{ ushort(6490) };
inline constexpr phrase<> lng_group_call_scheduled_status{ ushort(6491) };
inline constexpr phrase<> lng_group_call_scheduled_title{ ushort(6492) };
inline constexpr phrase<> lng_group_call_scheduled_title_channel{ ushort(6493) };
inline constexpr phrase<lngtag_when> lng_group_call_starts_short{ ushort(6494) };
inline constexpr phrase<lngtag_when> lng_group_call_starts{ ushort(6495) };
inline constexpr phrase<lngtag_when> lng_group_call_starts_channel{ ushort(6496) };
inline constexpr phrase<lngtag_time> lng_group_call_starts_today{ ushort(6497) };
inline constexpr phrase<lngtag_time> lng_group_call_starts_tomorrow{ ushort(6498) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_group_call_starts_date{ ushort(6499) };
inline constexpr phrase<> lng_group_call_starts_in{ ushort(6500) };
inline constexpr phrase<> lng_group_call_late_by{ ushort(6501) };
inline constexpr phrase<lngtag_time> lng_group_call_starts_short_today{ ushort(6502) };
inline constexpr phrase<lngtag_time> lng_group_call_starts_short_tomorrow{ ushort(6503) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_group_call_starts_short_date{ ushort(6504) };
inline constexpr phrase<> lng_group_call_start_now{ ushort(6505) };
inline constexpr phrase<> lng_group_call_start_now_sure{ ushort(6506) };
inline constexpr phrase<> lng_group_call_start_now_sure_channel{ ushort(6507) };
inline constexpr phrase<> lng_group_call_set_reminder{ ushort(6508) };
inline constexpr phrase<> lng_group_call_cancel_reminder{ ushort(6509) };
inline constexpr phrase<> lng_group_call_join_as_personal{ ushort(6510) };
inline constexpr phrase<> lng_group_call_edit_title{ ushort(6511) };
inline constexpr phrase<> lng_group_call_edit_title_channel{ ushort(6512) };
inline constexpr phrase<> lng_group_call_recording_start{ ushort(6513) };
inline constexpr phrase<> lng_group_call_recording_stop{ ushort(6514) };
inline constexpr phrase<> lng_group_call_recording_started{ ushort(6515) };
inline constexpr phrase<> lng_group_call_recording_started_video{ ushort(6516) };
inline constexpr phrase<> lng_group_call_recording_started_channel{ ushort(6517) };
inline constexpr phrase<> lng_group_call_recording_stopped{ ushort(6518) };
inline constexpr phrase<> lng_group_call_recording_stopped_channel{ ushort(6519) };
inline constexpr phrase<> lng_group_call_recording_saved{ ushort(6520) };
inline constexpr phrase<> lng_group_call_recording_saved_video{ ushort(6521) };
inline constexpr phrase<> lng_group_call_pinned_camera_me{ ushort(6522) };
inline constexpr phrase<> lng_group_call_pinned_screen_me{ ushort(6523) };
inline constexpr phrase<lngtag_user> lng_group_call_pinned_camera{ ushort(6524) };
inline constexpr phrase<lngtag_user> lng_group_call_pinned_screen{ ushort(6525) };
inline constexpr phrase<> lng_group_call_unpinned_camera_me{ ushort(6526) };
inline constexpr phrase<> lng_group_call_unpinned_screen_me{ ushort(6527) };
inline constexpr phrase<lngtag_user> lng_group_call_unpinned_camera{ ushort(6528) };
inline constexpr phrase<lngtag_user> lng_group_call_unpinned_screen{ ushort(6529) };
inline constexpr phrase<lngtag_user> lng_group_call_sure_screencast{ ushort(6530) };
inline constexpr phrase<> lng_group_call_pinned_on_top{ ushort(6531) };
inline constexpr phrase<> lng_group_call_unpinned_on_top{ ushort(6532) };
inline constexpr phrase<> lng_group_call_recording_start_sure{ ushort(6533) };
inline constexpr phrase<> lng_group_call_recording_stop_sure{ ushort(6534) };
inline constexpr phrase<> lng_group_call_recording_start_field{ ushort(6535) };
inline constexpr phrase<> lng_group_call_recording_start_button{ ushort(6536) };
inline constexpr phrase<> lng_group_call_recording_start_title{ ushort(6537) };
inline constexpr phrase<> lng_group_call_recording_start_checkbox{ ushort(6538) };
inline constexpr phrase<> lng_group_call_recording_start_audio_subtitle{ ushort(6539) };
inline constexpr phrase<> lng_group_call_recording_start_video_subtitle{ ushort(6540) };
inline constexpr phrase<> lng_group_call_is_recorded{ ushort(6541) };
inline constexpr phrase<> lng_group_call_is_recorded_video{ ushort(6542) };
inline constexpr phrase<> lng_group_call_is_recorded_channel{ ushort(6543) };
inline constexpr phrase<> lng_group_call_can_speak_here{ ushort(6544) };
inline constexpr phrase<lngtag_chat> lng_group_call_can_speak{ ushort(6545) };
inline constexpr phrase<lngtag_title> lng_group_call_title_changed{ ushort(6546) };
inline constexpr phrase<lngtag_title> lng_group_call_title_changed_channel{ ushort(6547) };
inline constexpr phrase<lngtag_name> lng_group_call_join_as_changed{ ushort(6548) };
inline constexpr phrase<lngtag_name> lng_group_call_join_as_changed_channel{ ushort(6549) };
inline constexpr phrase<> lng_group_call_no_stream_admin{ ushort(6550) };
inline constexpr phrase<lngtag_group> lng_group_call_no_stream{ ushort(6551) };
inline constexpr phrase<> lng_menu_start_group_call{ ushort(6552) };
inline constexpr phrase<> lng_menu_start_group_call_scheduled{ ushort(6553) };
inline constexpr phrase<> lng_menu_start_group_call_with{ ushort(6554) };
inline constexpr phrase<> lng_menu_start_group_call_join{ ushort(6555) };
inline constexpr phrase<> lng_menu_start_group_call_options{ ushort(6556) };
inline constexpr phrase<> lng_menu_start_group_call_channel{ ushort(6557) };
inline constexpr phrase<> lng_menu_start_group_call_scheduled_channel{ ushort(6558) };
inline constexpr phrase<> lng_menu_start_group_call_with_channel{ ushort(6559) };
inline constexpr phrase<> lng_group_call_rtmp_title{ ushort(6560) };
inline constexpr phrase<> lng_group_call_rtmp_url_subtitle{ ushort(6561) };
inline constexpr phrase<> lng_group_call_rtmp_url_copy{ ushort(6562) };
inline constexpr phrase<> lng_group_call_rtmp_url_copied{ ushort(6563) };
inline constexpr phrase<> lng_group_call_rtmp_key_subtitle{ ushort(6564) };
inline constexpr phrase<> lng_group_call_rtmp_key_copy{ ushort(6565) };
inline constexpr phrase<> lng_group_call_rtmp_key_copied{ ushort(6566) };
inline constexpr phrase<> lng_group_call_rtmp_key_warning{ ushort(6567) };
inline constexpr phrase<> lng_group_call_rtmp_info{ ushort(6568) };
inline constexpr phrase<> lng_group_call_rtmp_start{ ushort(6569) };
inline constexpr phrase<> lng_group_call_rtmp_revoke{ ushort(6570) };
inline constexpr phrase<> lng_group_call_rtmp_revoke_sure{ ushort(6571) };
inline constexpr phrase<lngtag_count> lng_group_call_rtmp_viewers{ ushort(6572) };
inline constexpr phrase<> lng_confcall_join_title{ ushort(6578) };
inline constexpr phrase<> lng_confcall_join_text{ ushort(6579) };
inline constexpr phrase<lngtag_user> lng_confcall_join_text_inviter{ ushort(6580) };
inline constexpr phrase<lngtag_user> lng_confcall_already_joined_one{ ushort(6581) };
inline constexpr phrase<lngtag_user, lngtag_other> lng_confcall_already_joined_two{ ushort(6582) };
inline constexpr phrase<lngtag_user, lngtag_other, lngtag_third> lng_confcall_already_joined_three{ ushort(6583) };
inline constexpr phrase<lngtag_count, lngtag_user, lngtag_other> lng_confcall_already_joined_many{ ushort(6584) };
inline constexpr phrase<> lng_confcall_join_button{ ushort(6590) };
inline constexpr phrase<> lng_confcall_create_call{ ushort(6591) };
inline constexpr phrase<lngtag_count> lng_confcall_create_call_description{ ushort(6592) };
inline constexpr phrase<> lng_confcall_create_title{ ushort(6598) };
inline constexpr phrase<> lng_confcall_create_link{ ushort(6599) };
inline constexpr phrase<> lng_confcall_create_link_description{ ushort(6600) };
inline constexpr phrase<> lng_confcall_link_revoke{ ushort(6601) };
inline constexpr phrase<> lng_confcall_link_revoked_title{ ushort(6602) };
inline constexpr phrase<> lng_confcall_link_inactive{ ushort(6603) };
inline constexpr phrase<> lng_confcall_link_revoked_text{ ushort(6604) };
inline constexpr phrase<> lng_confcall_link_title{ ushort(6605) };
inline constexpr phrase<> lng_confcall_link_about{ ushort(6606) };
inline constexpr phrase<> lng_confcall_link_or{ ushort(6607) };
inline constexpr phrase<lngtag_link> lng_confcall_link_join{ ushort(6608) };
inline constexpr phrase<lngtag_arrow> lng_confcall_link_join_link{ ushort(6609) };
inline constexpr phrase<> lng_confcall_inactive_title{ ushort(6610) };
inline constexpr phrase<> lng_confcall_inactive_about{ ushort(6611) };
inline constexpr phrase<lngtag_user> lng_confcall_invite_done_user{ ushort(6612) };
inline constexpr phrase<lngtag_count> lng_confcall_invite_done_many{ ushort(6613) };
inline constexpr phrase<lngtag_user> lng_confcall_invite_already_user{ ushort(6619) };
inline constexpr phrase<lngtag_count> lng_confcall_invite_already_many{ ushort(6620) };
inline constexpr phrase<lngtag_user> lng_confcall_invite_privacy_user{ ushort(6626) };
inline constexpr phrase<lngtag_count> lng_confcall_invite_privacy_many{ ushort(6627) };
inline constexpr phrase<lngtag_user> lng_confcall_invite_fail_user{ ushort(6633) };
inline constexpr phrase<lngtag_count> lng_confcall_invite_fail_many{ ushort(6634) };
inline constexpr phrase<lngtag_user> lng_confcall_invite_kicked_user{ ushort(6640) };
inline constexpr phrase<lngtag_count> lng_confcall_invite_kicked_many{ ushort(6641) };
inline constexpr phrase<> lng_confcall_not_accessible{ ushort(6647) };
inline constexpr phrase<> lng_confcall_participants_limit{ ushort(6648) };
inline constexpr phrase<lngtag_user> lng_confcall_sure_remove{ ushort(6649) };
inline constexpr phrase<> lng_confcall_e2e_badge{ ushort(6650) };
inline constexpr phrase<> lng_confcall_e2e_badge_small{ ushort(6651) };
inline constexpr phrase<> lng_confcall_e2e_about{ ushort(6652) };
inline constexpr phrase<> lng_no_mic_permission{ ushort(6653) };
inline constexpr phrase<lngtag_time> lng_player_message_today{ ushort(6654) };
inline constexpr phrase<lngtag_time> lng_player_message_yesterday{ ushort(6655) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_player_message_date{ ushort(6656) };
inline constexpr phrase<> lng_audio_player_reverse{ ushort(6657) };
inline constexpr phrase<> lng_audio_player_shuffle{ ushort(6658) };
inline constexpr phrase<> lng_audio_transcribe_long{ ushort(6659) };
inline constexpr phrase<lngtag_count, lngtag_date> lng_audio_transcribe_trials_left{ ushort(6660) };
inline constexpr phrase<lngtag_date, lngtag_link> lng_audio_transcribe_trials_over{ ushort(6666) };
inline constexpr phrase<> lng_rights_edit_admin{ ushort(6667) };
inline constexpr phrase<> lng_rights_edit_admin_header{ ushort(6668) };
inline constexpr phrase<> lng_rights_edit_admin_rank_name{ ushort(6669) };
inline constexpr phrase<lngtag_title> lng_rights_edit_admin_rank_about{ ushort(6670) };
inline constexpr phrase<> lng_rights_about_add_admins_yes{ ushort(6671) };
inline constexpr phrase<> lng_rights_about_add_admins_no{ ushort(6672) };
inline constexpr phrase<lngtag_user, lngtag_date> lng_rights_about_by{ ushort(6673) };
inline constexpr phrase<> lng_rights_about_admin_cant_edit{ ushort(6674) };
inline constexpr phrase<> lng_rights_about_restriction_cant_edit{ ushort(6675) };
inline constexpr phrase<> lng_rights_restriction_for_all{ ushort(6676) };
inline constexpr phrase<> lng_rights_permission_for_all{ ushort(6677) };
inline constexpr phrase<> lng_rights_permission_unavailable{ ushort(6678) };
inline constexpr phrase<> lng_rights_permission_in_discuss{ ushort(6679) };
inline constexpr phrase<> lng_rights_permission_cant_edit{ ushort(6680) };
inline constexpr phrase<> lng_rights_user_restrictions{ ushort(6681) };
inline constexpr phrase<> lng_rights_user_restrictions_header{ ushort(6682) };
inline constexpr phrase<> lng_rights_default_restrictions_header{ ushort(6683) };
inline constexpr phrase<> lng_rights_slowmode_header{ ushort(6684) };
inline constexpr phrase<> lng_rights_slowmode_off{ ushort(6685) };
inline constexpr phrase<> lng_rights_slowmode_about{ ushort(6686) };
inline constexpr phrase<lngtag_interval> lng_rights_slowmode_about_interval{ ushort(6687) };
inline constexpr phrase<lngtag_count> lng_rights_slowmode_interval_seconds{ ushort(6688) };
inline constexpr phrase<lngtag_count> lng_rights_slowmode_interval_minutes{ ushort(6694) };
inline constexpr phrase<> lng_rights_boosts_no_restrict{ ushort(6700) };
inline constexpr phrase<> lng_rights_boosts_about{ ushort(6701) };
inline constexpr phrase<> lng_rights_boosts_about_on{ ushort(6702) };
inline constexpr phrase<> lng_rights_charge_stars{ ushort(6703) };
inline constexpr phrase<> lng_rights_charge_stars_about{ ushort(6704) };
inline constexpr phrase<> lng_rights_charge_price{ ushort(6705) };
inline constexpr phrase<lngtag_percent, lngtag_amount> lng_rights_charge_price_about{ ushort(6706) };
inline constexpr phrase<lngtag_left> lng_slowmode_enabled{ ushort(6707) };
inline constexpr phrase<> lng_slowmode_no_many{ ushort(6708) };
inline constexpr phrase<> lng_slowmode_too_long{ ushort(6709) };
inline constexpr phrase<lngtag_count> lng_slowmode_seconds{ ushort(6710) };
inline constexpr phrase<> lng_payment_confirm_title{ ushort(6716) };
inline constexpr phrase<lngtag_count, lngtag_name> lng_payment_confirm_text{ ushort(6717) };
inline constexpr phrase<lngtag_count> lng_payment_confirm_amount{ ushort(6723) };
inline constexpr phrase<lngtag_count> lng_payment_confirm_users{ ushort(6729) };
inline constexpr phrase<lngtag_count> lng_payment_confirm_chats{ ushort(6735) };
inline constexpr phrase<lngtag_count, lngtag_amount> lng_payment_confirm_sure{ ushort(6741) };
inline constexpr phrase<> lng_payment_confirm_dont_ask{ ushort(6747) };
inline constexpr phrase<lngtag_count> lng_payment_confirm_button{ ushort(6748) };
inline constexpr phrase<lngtag_name, lngtag_cost> lng_payment_bar_text{ ushort(6754) };
inline constexpr phrase<> lng_payment_bar_button{ ushort(6755) };
inline constexpr phrase<> lng_payment_refund_title{ ushort(6756) };
inline constexpr phrase<lngtag_name> lng_payment_refund_text{ ushort(6757) };
inline constexpr phrase<lngtag_name> lng_payment_refund_channel{ ushort(6758) };
inline constexpr phrase<lngtag_count> lng_payment_refund_also{ ushort(6759) };
inline constexpr phrase<> lng_payment_refund_confirm{ ushort(6765) };
inline constexpr phrase<> lng_rights_gigagroup_title{ ushort(6766) };
inline constexpr phrase<> lng_rights_gigagroup_convert{ ushort(6767) };
inline constexpr phrase<> lng_rights_gigagroup_about{ ushort(6768) };
inline constexpr phrase<> lng_gigagroup_convert_title{ ushort(6769) };
inline constexpr phrase<> lng_gigagroup_convert_feature1{ ushort(6770) };
inline constexpr phrase<> lng_gigagroup_convert_feature2{ ushort(6771) };
inline constexpr phrase<> lng_gigagroup_convert_feature3{ ushort(6772) };
inline constexpr phrase<> lng_gigagroup_convert_sure{ ushort(6773) };
inline constexpr phrase<> lng_gigagroup_warning_title{ ushort(6774) };
inline constexpr phrase<> lng_gigagroup_warning{ ushort(6775) };
inline constexpr phrase<> lng_gigagroup_done{ ushort(6776) };
inline constexpr phrase<> lng_gigagroup_suggest_title{ ushort(6777) };
inline constexpr phrase<> lng_gigagroup_suggest_text{ ushort(6778) };
inline constexpr phrase<> lng_gigagroup_suggest_more{ ushort(6779) };
inline constexpr phrase<> lng_rights_channel_info{ ushort(6780) };
inline constexpr phrase<> lng_rights_channel_manage{ ushort(6781) };
inline constexpr phrase<> lng_rights_channel_post{ ushort(6782) };
inline constexpr phrase<> lng_rights_channel_edit{ ushort(6783) };
inline constexpr phrase<> lng_rights_channel_delete{ ushort(6784) };
inline constexpr phrase<> lng_rights_channel_manage_stories{ ushort(6785) };
inline constexpr phrase<> lng_rights_channel_post_stories{ ushort(6786) };
inline constexpr phrase<> lng_rights_channel_edit_stories{ ushort(6787) };
inline constexpr phrase<> lng_rights_channel_delete_stories{ ushort(6788) };
inline constexpr phrase<> lng_rights_channel_manage_calls{ ushort(6789) };
inline constexpr phrase<> lng_rights_channel_manage_direct{ ushort(6790) };
inline constexpr phrase<> lng_rights_group_info{ ushort(6791) };
inline constexpr phrase<> lng_rights_group_ban{ ushort(6792) };
inline constexpr phrase<> lng_rights_group_invite_link{ ushort(6793) };
inline constexpr phrase<> lng_rights_group_invite{ ushort(6794) };
inline constexpr phrase<> lng_rights_group_pin{ ushort(6795) };
inline constexpr phrase<> lng_rights_group_topics{ ushort(6796) };
inline constexpr phrase<> lng_rights_group_add_topics{ ushort(6797) };
inline constexpr phrase<> lng_rights_group_manage_calls{ ushort(6798) };
inline constexpr phrase<> lng_rights_group_delete{ ushort(6799) };
inline constexpr phrase<> lng_rights_group_anonymous{ ushort(6800) };
inline constexpr phrase<> lng_rights_add_admins{ ushort(6801) };
inline constexpr phrase<> lng_rights_chat_send_text{ ushort(6802) };
inline constexpr phrase<> lng_rights_chat_send_media{ ushort(6803) };
inline constexpr phrase<> lng_rights_chat_send_stickers{ ushort(6804) };
inline constexpr phrase<> lng_rights_chat_send_links{ ushort(6805) };
inline constexpr phrase<> lng_rights_chat_send_polls{ ushort(6806) };
inline constexpr phrase<> lng_rights_chat_add_members{ ushort(6807) };
inline constexpr phrase<> lng_rights_chat_photos{ ushort(6808) };
inline constexpr phrase<> lng_rights_chat_videos{ ushort(6809) };
inline constexpr phrase<> lng_rights_chat_stickers{ ushort(6810) };
inline constexpr phrase<> lng_rights_chat_music{ ushort(6811) };
inline constexpr phrase<> lng_rights_chat_files{ ushort(6812) };
inline constexpr phrase<> lng_rights_chat_voice_messages{ ushort(6813) };
inline constexpr phrase<> lng_rights_chat_video_messages{ ushort(6814) };
inline constexpr phrase<lngtag_user, lngtag_date> lng_rights_chat_restricted_by{ ushort(6815) };
inline constexpr phrase<lngtag_user, lngtag_date> lng_rights_chat_banned_by{ ushort(6816) };
inline constexpr phrase<> lng_rights_chat_banned_until_header{ ushort(6817) };
inline constexpr phrase<> lng_rights_chat_banned_forever{ ushort(6818) };
inline constexpr phrase<lngtag_count> lng_rights_chat_banned_day{ ushort(6819) };
inline constexpr phrase<lngtag_count> lng_rights_chat_banned_week{ ushort(6825) };
inline constexpr phrase<> lng_rights_chat_banned_custom{ ushort(6831) };
inline constexpr phrase<lngtag_date> lng_rights_chat_banned_custom_date{ ushort(6832) };
inline constexpr phrase<> lng_rights_transfer_group{ ushort(6833) };
inline constexpr phrase<> lng_rights_transfer_channel{ ushort(6834) };
inline constexpr phrase<> lng_rights_transfer_check{ ushort(6835) };
inline constexpr phrase<lngtag_user> lng_rights_transfer_check_about{ ushort(6836) };
inline constexpr phrase<> lng_rights_transfer_check_password{ ushort(6837) };
inline constexpr phrase<> lng_rights_transfer_check_session{ ushort(6838) };
inline constexpr phrase<> lng_rights_transfer_check_later{ ushort(6839) };
inline constexpr phrase<> lng_rights_transfer_set_password{ ushort(6840) };
inline constexpr phrase<lngtag_group, lngtag_user> lng_rights_transfer_about{ ushort(6841) };
inline constexpr phrase<> lng_rights_transfer_sure{ ushort(6842) };
inline constexpr phrase<> lng_rights_transfer_password_title{ ushort(6843) };
inline constexpr phrase<> lng_rights_transfer_password_description{ ushort(6844) };
inline constexpr phrase<lngtag_user> lng_rights_transfer_done_group{ ushort(6845) };
inline constexpr phrase<lngtag_user> lng_rights_transfer_done_channel{ ushort(6846) };
inline constexpr phrase<> lng_bots_password_confirm_check_about{ ushort(6847) };
inline constexpr phrase<> lng_bots_password_confirm_title{ ushort(6848) };
inline constexpr phrase<> lng_bots_password_confirm_description{ ushort(6849) };
inline constexpr phrase<> lng_restricted_send_message{ ushort(6850) };
inline constexpr phrase<> lng_restricted_send_photos{ ushort(6851) };
inline constexpr phrase<> lng_restricted_send_videos{ ushort(6852) };
inline constexpr phrase<> lng_restricted_send_music{ ushort(6853) };
inline constexpr phrase<> lng_restricted_send_files{ ushort(6854) };
inline constexpr phrase<> lng_restricted_send_voice_messages_group{ ushort(6855) };
inline constexpr phrase<> lng_restricted_send_video_messages_group{ ushort(6856) };
inline constexpr phrase<> lng_restricted_send_stickers{ ushort(6857) };
inline constexpr phrase<> lng_restricted_send_gifs{ ushort(6858) };
inline constexpr phrase<> lng_restricted_send_inline{ ushort(6859) };
inline constexpr phrase<> lng_restricted_send_polls{ ushort(6860) };
inline constexpr phrase<> lng_restricted_boost_group{ ushort(6861) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_restricted_send_message_until{ ushort(6862) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_restricted_send_photos_until{ ushort(6863) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_restricted_send_videos_until{ ushort(6864) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_restricted_send_music_until{ ushort(6865) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_restricted_send_files_until{ ushort(6866) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_restricted_send_voice_messages_until{ ushort(6867) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_restricted_send_video_messages_until{ ushort(6868) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_restricted_send_stickers_until{ ushort(6869) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_restricted_send_gifs_until{ ushort(6870) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_restricted_send_inline_until{ ushort(6871) };
inline constexpr phrase<lngtag_date, lngtag_time> lng_restricted_send_polls_until{ ushort(6872) };
inline constexpr phrase<> lng_restricted_send_message_all{ ushort(6873) };
inline constexpr phrase<> lng_restricted_send_photos_all{ ushort(6874) };
inline constexpr phrase<> lng_restricted_send_videos_all{ ushort(6875) };
inline constexpr phrase<> lng_restricted_send_music_all{ ushort(6876) };
inline constexpr phrase<> lng_restricted_send_files_all{ ushort(6877) };
inline constexpr phrase<> lng_restricted_send_voice_messages_all{ ushort(6878) };
inline constexpr phrase<> lng_restricted_send_video_messages_all{ ushort(6879) };
inline constexpr phrase<> lng_restricted_send_stickers_all{ ushort(6880) };
inline constexpr phrase<> lng_restricted_send_gifs_all{ ushort(6881) };
inline constexpr phrase<> lng_restricted_send_inline_all{ ushort(6882) };
inline constexpr phrase<> lng_restricted_send_polls_all{ ushort(6883) };
inline constexpr phrase<> lng_restricted_send_public_polls{ ushort(6884) };
inline constexpr phrase<> lng_restricted_send_todo_lists{ ushort(6885) };
inline constexpr phrase<> lng_restricted_send_paid_media{ ushort(6886) };
inline constexpr phrase<lngtag_user> lng_restricted_send_voice_messages{ ushort(6887) };
inline constexpr phrase<lngtag_user> lng_restricted_send_video_messages{ ushort(6888) };
inline constexpr phrase<lngtag_user> lng_restricted_send_non_premium{ ushort(6889) };
inline constexpr phrase<> lng_restricted_send_non_premium_more{ ushort(6890) };
inline constexpr phrase<lngtag_user> lng_send_non_premium_text{ ushort(6891) };
inline constexpr phrase<> lng_send_non_premium_go{ ushort(6892) };
inline constexpr phrase<> lng_send_non_premium_story{ ushort(6893) };
inline constexpr phrase<> lng_send_non_premium_unlock{ ushort(6894) };
inline constexpr phrase<lngtag_user, lngtag_link> lng_send_non_premium_message_toast{ ushort(6895) };
inline constexpr phrase<> lng_send_non_premium_message_toast_link{ ushort(6896) };
inline constexpr phrase<lngtag_channel, lngtag_amount> lng_send_charges_stars_channel{ ushort(6897) };
inline constexpr phrase<lngtag_channel> lng_send_free_channel{ ushort(6898) };
inline constexpr phrase<lngtag_user, lngtag_amount> lng_send_charges_stars_text{ ushort(6899) };
inline constexpr phrase<> lng_send_charges_stars_go{ ushort(6900) };
inline constexpr phrase<> lng_exceptions_list_title{ ushort(6901) };
inline constexpr phrase<> lng_removed_list_title{ ushort(6902) };
inline constexpr phrase<> lng_admin_log_title_all{ ushort(6903) };
inline constexpr phrase<> lng_admin_log_title_selected{ ushort(6904) };
inline constexpr phrase<> lng_admin_log_filter{ ushort(6905) };
inline constexpr phrase<> lng_admin_log_filter_title{ ushort(6906) };
inline constexpr phrase<> lng_admin_log_filter_all_actions{ ushort(6907) };
inline constexpr phrase<> lng_admin_log_filter_actions_type_subtitle{ ushort(6908) };
inline constexpr phrase<> lng_admin_log_filter_actions_member_section{ ushort(6909) };
inline constexpr phrase<> lng_admin_log_filter_actions_subscriber_section{ ushort(6910) };
inline constexpr phrase<> lng_admin_log_filter_restrictions{ ushort(6911) };
inline constexpr phrase<> lng_admin_log_filter_admins_new{ ushort(6912) };
inline constexpr phrase<> lng_admin_log_filter_members_new{ ushort(6913) };
inline constexpr phrase<> lng_admin_log_filter_subscribers_new{ ushort(6914) };
inline constexpr phrase<> lng_admin_log_filter_actions_settings_section{ ushort(6915) };
inline constexpr phrase<> lng_admin_log_filter_actions_channel_settings_section{ ushort(6916) };
inline constexpr phrase<> lng_admin_log_filter_info_group{ ushort(6917) };
inline constexpr phrase<> lng_admin_log_filter_info_channel{ ushort(6918) };
inline constexpr phrase<> lng_admin_log_filter_actions_messages_section{ ushort(6919) };
inline constexpr phrase<> lng_admin_log_filter_messages_deleted{ ushort(6920) };
inline constexpr phrase<> lng_admin_log_filter_messages_edited{ ushort(6921) };
inline constexpr phrase<> lng_admin_log_filter_messages_pinned{ ushort(6922) };
inline constexpr phrase<> lng_admin_log_filter_voice_chats{ ushort(6923) };
inline constexpr phrase<> lng_admin_log_filter_voice_chats_channel{ ushort(6924) };
inline constexpr phrase<> lng_admin_log_filter_invite_links{ ushort(6925) };
inline constexpr phrase<> lng_admin_log_filter_members_removed{ ushort(6926) };
inline constexpr phrase<> lng_admin_log_filter_subscribers_removed{ ushort(6927) };
inline constexpr phrase<> lng_admin_log_filter_topics{ ushort(6928) };
inline constexpr phrase<> lng_admin_log_filter_sub_extend{ ushort(6929) };
inline constexpr phrase<> lng_admin_log_filter_all_admins{ ushort(6930) };
inline constexpr phrase<> lng_admin_log_filter_actions_admins_subtitle{ ushort(6931) };
inline constexpr phrase<> lng_admin_log_filter_actions_admins_section{ ushort(6932) };
inline constexpr phrase<> lng_admin_log_about{ ushort(6933) };
inline constexpr phrase<> lng_admin_log_about_text{ ushort(6934) };
inline constexpr phrase<> lng_admin_log_about_text_channel{ ushort(6935) };
inline constexpr phrase<> lng_admin_log_no_results_title{ ushort(6936) };
inline constexpr phrase<> lng_admin_log_no_results_text{ ushort(6937) };
inline constexpr phrase<lngtag_query> lng_admin_log_no_results_search_text{ ushort(6938) };
inline constexpr phrase<> lng_admin_log_no_events_title{ ushort(6939) };
inline constexpr phrase<> lng_admin_log_no_events_text{ ushort(6940) };
inline constexpr phrase<> lng_admin_log_no_events_text_channel{ ushort(6941) };
inline constexpr phrase<> lng_admin_log_empty_text{ ushort(6942) };
inline constexpr phrase<lngtag_from, lngtag_title> lng_admin_log_changed_title_channel{ ushort(6943) };
inline constexpr phrase<lngtag_from> lng_admin_log_changed_description_group{ ushort(6944) };
inline constexpr phrase<lngtag_from> lng_admin_log_removed_description_group{ ushort(6945) };
inline constexpr phrase<lngtag_from> lng_admin_log_changed_description_channel{ ushort(6946) };
inline constexpr phrase<lngtag_from> lng_admin_log_removed_description_channel{ ushort(6947) };
inline constexpr phrase<> lng_admin_log_previous_description{ ushort(6948) };
inline constexpr phrase<lngtag_from> lng_admin_log_changed_link_group{ ushort(6949) };
inline constexpr phrase<lngtag_from> lng_admin_log_removed_link_group{ ushort(6950) };
inline constexpr phrase<lngtag_from> lng_admin_log_changed_link_channel{ ushort(6951) };
inline constexpr phrase<lngtag_from> lng_admin_log_removed_link_channel{ ushort(6952) };
inline constexpr phrase<> lng_admin_log_previous_link{ ushort(6953) };
inline constexpr phrase<lngtag_from> lng_admin_log_reordered_link_group{ ushort(6954) };
inline constexpr phrase<lngtag_from> lng_admin_log_reordered_link_channel{ ushort(6955) };
inline constexpr phrase<> lng_admin_log_previous_links_order{ ushort(6956) };
inline constexpr phrase<lngtag_from, lngtag_link> lng_admin_log_activated_link{ ushort(6957) };
inline constexpr phrase<lngtag_from, lngtag_link> lng_admin_log_deactivated_link{ ushort(6958) };
inline constexpr phrase<lngtag_from> lng_admin_log_changed_photo_group{ ushort(6959) };
inline constexpr phrase<lngtag_from> lng_admin_log_changed_photo_channel{ ushort(6960) };
inline constexpr phrase<lngtag_from> lng_admin_log_removed_photo_group{ ushort(6961) };
inline constexpr phrase<lngtag_from> lng_admin_log_removed_photo_channel{ ushort(6962) };
inline constexpr phrase<lngtag_from> lng_admin_log_invites_enabled{ ushort(6963) };
inline constexpr phrase<lngtag_from> lng_admin_log_invites_disabled{ ushort(6964) };
inline constexpr phrase<lngtag_from> lng_admin_log_signatures_enabled{ ushort(6965) };
inline constexpr phrase<lngtag_from> lng_admin_log_signatures_disabled{ ushort(6966) };
inline constexpr phrase<lngtag_from> lng_admin_log_signature_profiles_enabled{ ushort(6967) };
inline constexpr phrase<lngtag_from> lng_admin_log_signature_profiles_disabled{ ushort(6968) };
inline constexpr phrase<lngtag_from> lng_admin_log_forwards_enabled{ ushort(6969) };
inline constexpr phrase<lngtag_from> lng_admin_log_forwards_disabled{ ushort(6970) };
inline constexpr phrase<lngtag_from> lng_admin_log_history_made_hidden{ ushort(6971) };
inline constexpr phrase<lngtag_from> lng_admin_log_history_made_visible{ ushort(6972) };
inline constexpr phrase<lngtag_from> lng_admin_log_pinned_message{ ushort(6973) };
inline constexpr phrase<lngtag_from> lng_admin_log_unpinned_message{ ushort(6974) };
inline constexpr phrase<lngtag_from> lng_admin_log_edited_caption{ ushort(6975) };
inline constexpr phrase<lngtag_from> lng_admin_log_edited_media{ ushort(6976) };
inline constexpr phrase<lngtag_from> lng_admin_log_edited_media_and_caption{ ushort(6977) };
inline constexpr phrase<lngtag_from> lng_admin_log_edited_media_and_removed_caption{ ushort(6978) };
inline constexpr phrase<lngtag_from> lng_admin_log_removed_caption{ ushort(6979) };
inline constexpr phrase<> lng_admin_log_previous_caption{ ushort(6980) };
inline constexpr phrase<lngtag_from> lng_admin_log_edited_message{ ushort(6981) };
inline constexpr phrase<> lng_admin_log_previous_message{ ushort(6982) };
inline constexpr phrase<lngtag_from> lng_admin_log_deleted_message{ ushort(6983) };
inline constexpr phrase<lngtag_from> lng_admin_log_sent_message{ ushort(6984) };
inline constexpr phrase<lngtag_from> lng_admin_log_participant_joined{ ushort(6985) };
inline constexpr phrase<lngtag_from> lng_admin_log_participant_joined_channel{ ushort(6986) };
inline constexpr phrase<lngtag_from, lngtag_link> lng_admin_log_participant_joined_by_link{ ushort(6987) };
inline constexpr phrase<lngtag_from, lngtag_link> lng_admin_log_participant_joined_by_link_channel{ ushort(6988) };
inline constexpr phrase<lngtag_from, lngtag_link> lng_admin_log_participant_joined_by_filter_link{ ushort(6989) };
inline constexpr phrase<lngtag_from, lngtag_link> lng_admin_log_participant_joined_by_filter_link_channel{ ushort(6990) };
inline constexpr phrase<lngtag_from, lngtag_link, lngtag_user> lng_admin_log_participant_approved_by_link{ ushort(6991) };
inline constexpr phrase<lngtag_from, lngtag_link, lngtag_user> lng_admin_log_participant_approved_by_link_channel{ ushort(6992) };
inline constexpr phrase<lngtag_from, lngtag_user> lng_admin_log_participant_approved_by_request{ ushort(6993) };
inline constexpr phrase<lngtag_from, lngtag_user> lng_admin_log_participant_approved_by_request_channel{ ushort(6994) };
inline constexpr phrase<lngtag_from, lngtag_link> lng_admin_log_revoke_invite_link{ ushort(6995) };
inline constexpr phrase<lngtag_from, lngtag_link> lng_admin_log_delete_invite_link{ ushort(6996) };
inline constexpr phrase<lngtag_from> lng_admin_log_participant_left{ ushort(6997) };
inline constexpr phrase<lngtag_from> lng_admin_log_participant_left_channel{ ushort(6998) };
inline constexpr phrase<lngtag_from> lng_admin_log_stopped_poll{ ushort(6999) };
inline constexpr phrase<lngtag_user> lng_admin_log_invited{ ushort(7000) };
inline constexpr phrase<lngtag_user> lng_admin_log_banned{ ushort(7001) };
inline constexpr phrase<lngtag_user> lng_admin_log_unbanned{ ushort(7002) };
inline constexpr phrase<lngtag_user, lngtag_until> lng_admin_log_restricted{ ushort(7003) };
inline constexpr phrase<lngtag_user> lng_admin_log_promoted{ ushort(7004) };
inline constexpr phrase<lngtag_user> lng_admin_log_transferred{ ushort(7005) };
inline constexpr phrase<> lng_admin_log_changed_default_permissions{ ushort(7006) };
inline constexpr phrase<lngtag_from, lngtag_sticker_set> lng_admin_log_changed_stickers_group{ ushort(7007) };
inline constexpr phrase<> lng_admin_log_changed_stickers_set{ ushort(7008) };
inline constexpr phrase<lngtag_from> lng_admin_log_removed_stickers_group{ ushort(7009) };
inline constexpr phrase<lngtag_from, lngtag_sticker_set> lng_admin_log_changed_emoji_group{ ushort(7010) };
inline constexpr phrase<> lng_admin_log_changed_emoji_set{ ushort(7011) };
inline constexpr phrase<lngtag_from> lng_admin_log_removed_emoji_group{ ushort(7012) };
inline constexpr phrase<lngtag_from, lngtag_chat> lng_admin_log_changed_linked_chat{ ushort(7013) };
inline constexpr phrase<lngtag_from> lng_admin_log_removed_linked_chat{ ushort(7014) };
inline constexpr phrase<lngtag_from, lngtag_chat> lng_admin_log_changed_linked_channel{ ushort(7015) };
inline constexpr phrase<lngtag_from> lng_admin_log_removed_linked_channel{ ushort(7016) };
inline constexpr phrase<lngtag_from, lngtag_address> lng_admin_log_changed_location_chat{ ushort(7017) };
inline constexpr phrase<lngtag_from> lng_admin_log_removed_location_chat{ ushort(7018) };
inline constexpr phrase<lngtag_from, lngtag_duration> lng_admin_log_changed_slow_mode{ ushort(7019) };
inline constexpr phrase<lngtag_from> lng_admin_log_removed_slow_mode{ ushort(7020) };
inline constexpr phrase<lngtag_from> lng_admin_log_started_group_call{ ushort(7021) };
inline constexpr phrase<lngtag_from> lng_admin_log_started_group_call_channel{ ushort(7022) };
inline constexpr phrase<lngtag_from> lng_admin_log_discarded_group_call{ ushort(7023) };
inline constexpr phrase<lngtag_from> lng_admin_log_discarded_group_call_channel{ ushort(7024) };
inline constexpr phrase<lngtag_from, lngtag_user> lng_admin_log_muted_participant{ ushort(7025) };
inline constexpr phrase<lngtag_from, lngtag_user> lng_admin_log_muted_participant_channel{ ushort(7026) };
inline constexpr phrase<lngtag_from, lngtag_user> lng_admin_log_unmuted_participant{ ushort(7027) };
inline constexpr phrase<lngtag_from, lngtag_user> lng_admin_log_unmuted_participant_channel{ ushort(7028) };
inline constexpr phrase<lngtag_from> lng_admin_log_allowed_unmute_self{ ushort(7029) };
inline constexpr phrase<lngtag_from> lng_admin_log_allowed_unmute_self_channel{ ushort(7030) };
inline constexpr phrase<lngtag_from> lng_admin_log_disallowed_unmute_self{ ushort(7031) };
inline constexpr phrase<lngtag_from> lng_admin_log_disallowed_unmute_self_channel{ ushort(7032) };
inline constexpr phrase<lngtag_from, lngtag_user, lngtag_percent> lng_admin_log_participant_volume{ ushort(7033) };
inline constexpr phrase<lngtag_from, lngtag_user, lngtag_percent> lng_admin_log_participant_volume_channel{ ushort(7034) };
inline constexpr phrase<lngtag_from> lng_admin_log_antispam_enabled{ ushort(7035) };
inline constexpr phrase<lngtag_from> lng_admin_log_antispam_disabled{ ushort(7036) };
inline constexpr phrase<lngtag_from> lng_admin_log_autotranslate_enabled{ ushort(7037) };
inline constexpr phrase<lngtag_from> lng_admin_log_autotranslate_disabled{ ushort(7038) };
inline constexpr phrase<lngtag_from, lngtag_previous, lngtag_color> lng_admin_log_change_color{ ushort(7039) };
inline constexpr phrase<lngtag_from, lngtag_emoji> lng_admin_log_set_background_emoji{ ushort(7040) };
inline constexpr phrase<lngtag_from, lngtag_previous, lngtag_emoji> lng_admin_log_change_background_emoji{ ushort(7041) };
inline constexpr phrase<lngtag_from, lngtag_emoji> lng_admin_log_removed_background_emoji{ ushort(7042) };
inline constexpr phrase<lngtag_from, lngtag_previous, lngtag_color> lng_admin_log_change_profile_color{ ushort(7043) };
inline constexpr phrase<lngtag_from, lngtag_emoji> lng_admin_log_set_profile_background_emoji{ ushort(7044) };
inline constexpr phrase<lngtag_from, lngtag_previous, lngtag_emoji> lng_admin_log_change_profile_background_emoji{ ushort(7045) };
inline constexpr phrase<lngtag_from, lngtag_emoji> lng_admin_log_removed_profile_background_emoji{ ushort(7046) };
inline constexpr phrase<lngtag_from, lngtag_previous, lngtag_color> lng_admin_log_change_profile_color_group{ ushort(7047) };
inline constexpr phrase<lngtag_from, lngtag_emoji> lng_admin_log_set_profile_background_emoji_group{ ushort(7048) };
inline constexpr phrase<lngtag_from, lngtag_previous, lngtag_emoji> lng_admin_log_change_profile_background_emoji_group{ ushort(7049) };
inline constexpr phrase<lngtag_from, lngtag_emoji> lng_admin_log_removed_profile_background_emoji_group{ ushort(7050) };
inline constexpr phrase<lngtag_from> lng_admin_log_change_wallpaper{ ushort(7051) };
inline constexpr phrase<lngtag_from, lngtag_emoji> lng_admin_log_set_status{ ushort(7052) };
inline constexpr phrase<lngtag_from, lngtag_previous, lngtag_emoji> lng_admin_log_change_status{ ushort(7053) };
inline constexpr phrase<lngtag_from, lngtag_emoji> lng_admin_log_removed_status{ ushort(7054) };
inline constexpr phrase<lngtag_from, lngtag_emoji, lngtag_date> lng_admin_log_set_status_until{ ushort(7055) };
inline constexpr phrase<lngtag_from, lngtag_previous, lngtag_emoji, lngtag_date> lng_admin_log_change_status_until{ ushort(7056) };
inline constexpr phrase<lngtag_name, lngtag_mention> lng_admin_log_user_with_username{ ushort(7057) };
inline constexpr phrase<lngtag_from, lngtag_duration> lng_admin_log_messages_ttl_set{ ushort(7058) };
inline constexpr phrase<lngtag_from, lngtag_previous, lngtag_duration> lng_admin_log_messages_ttl_changed{ ushort(7059) };
inline constexpr phrase<lngtag_from, lngtag_duration> lng_admin_log_messages_ttl_removed{ ushort(7060) };
inline constexpr phrase<lngtag_from> lng_admin_log_reactions_disabled{ ushort(7061) };
inline constexpr phrase<lngtag_from, lngtag_emoji> lng_admin_log_reactions_updated{ ushort(7062) };
inline constexpr phrase<lngtag_from> lng_admin_log_reactions_allowed_all{ ushort(7063) };
inline constexpr phrase<lngtag_from> lng_admin_log_reactions_allowed_official{ ushort(7064) };
inline constexpr phrase<lngtag_link> lng_admin_log_edited_invite_link{ ushort(7065) };
inline constexpr phrase<lngtag_previous, lngtag_limit> lng_admin_log_invite_link_expire_date{ ushort(7066) };
inline constexpr phrase<lngtag_previous, lngtag_limit> lng_admin_log_invite_link_usage_limit{ ushort(7067) };
inline constexpr phrase<lngtag_previous, lngtag_limit> lng_admin_log_invite_link_label{ ushort(7068) };
inline constexpr phrase<> lng_admin_log_invite_link_request_needed{ ushort(7069) };
inline constexpr phrase<> lng_admin_log_invite_link_request_not_needed{ ushort(7070) };
inline constexpr phrase<lngtag_from> lng_admin_log_topics_enabled{ ushort(7071) };
inline constexpr phrase<lngtag_from> lng_admin_log_topics_disabled{ ushort(7072) };
inline constexpr phrase<lngtag_from, lngtag_topic> lng_admin_log_topics_created{ ushort(7073) };
inline constexpr phrase<lngtag_from, lngtag_topic, lngtag_new_topic> lng_admin_log_topics_changed{ ushort(7074) };
inline constexpr phrase<lngtag_from, lngtag_topic> lng_admin_log_topics_closed{ ushort(7075) };
inline constexpr phrase<lngtag_from, lngtag_topic> lng_admin_log_topics_reopened{ ushort(7076) };
inline constexpr phrase<lngtag_from, lngtag_topic> lng_admin_log_topics_hidden{ ushort(7077) };
inline constexpr phrase<lngtag_from, lngtag_topic> lng_admin_log_topics_unhidden{ ushort(7078) };
inline constexpr phrase<lngtag_from, lngtag_topic> lng_admin_log_topics_deleted{ ushort(7079) };
inline constexpr phrase<lngtag_from, lngtag_topic> lng_admin_log_topics_pinned{ ushort(7080) };
inline constexpr phrase<lngtag_from, lngtag_topic> lng_admin_log_topics_unpinned{ ushort(7081) };
inline constexpr phrase<> lng_admin_log_restricted_forever{ ushort(7082) };
inline constexpr phrase<lngtag_date> lng_admin_log_restricted_until{ ushort(7083) };
inline constexpr phrase<> lng_admin_log_banned_view_messages{ ushort(7084) };
inline constexpr phrase<> lng_admin_log_banned_send_messages{ ushort(7085) };
inline constexpr phrase<> lng_admin_log_banned_send_photos{ ushort(7086) };
inline constexpr phrase<> lng_admin_log_banned_send_videos{ ushort(7087) };
inline constexpr phrase<> lng_admin_log_banned_send_music{ ushort(7088) };
inline constexpr phrase<> lng_admin_log_banned_send_files{ ushort(7089) };
inline constexpr phrase<> lng_admin_log_banned_send_voice_messages{ ushort(7090) };
inline constexpr phrase<> lng_admin_log_banned_send_video_messages{ ushort(7091) };
inline constexpr phrase<> lng_admin_log_banned_send_stickers{ ushort(7092) };
inline constexpr phrase<> lng_admin_log_banned_embed_links{ ushort(7093) };
inline constexpr phrase<> lng_admin_log_banned_send_polls{ ushort(7094) };
inline constexpr phrase<> lng_admin_log_admin_change_info{ ushort(7095) };
inline constexpr phrase<> lng_admin_log_admin_post_messages{ ushort(7096) };
inline constexpr phrase<> lng_admin_log_admin_edit_messages{ ushort(7097) };
inline constexpr phrase<> lng_admin_log_admin_delete_messages{ ushort(7098) };
inline constexpr phrase<> lng_admin_log_admin_post_stories{ ushort(7099) };
inline constexpr phrase<> lng_admin_log_admin_edit_stories{ ushort(7100) };
inline constexpr phrase<> lng_admin_log_admin_delete_stories{ ushort(7101) };
inline constexpr phrase<> lng_admin_log_admin_remain_anonymous{ ushort(7102) };
inline constexpr phrase<> lng_admin_log_admin_ban_users{ ushort(7103) };
inline constexpr phrase<> lng_admin_log_admin_invite_users{ ushort(7104) };
inline constexpr phrase<> lng_admin_log_admin_invite_link{ ushort(7105) };
inline constexpr phrase<> lng_admin_log_admin_pin_messages{ ushort(7106) };
inline constexpr phrase<> lng_admin_log_admin_manage_topics{ ushort(7107) };
inline constexpr phrase<> lng_admin_log_admin_create_topics{ ushort(7108) };
inline constexpr phrase<> lng_admin_log_admin_manage_calls{ ushort(7109) };
inline constexpr phrase<> lng_admin_log_admin_manage_calls_channel{ ushort(7110) };
inline constexpr phrase<> lng_admin_log_admin_manage_direct{ ushort(7111) };
inline constexpr phrase<> lng_admin_log_admin_add_admins{ ushort(7112) };
inline constexpr phrase<lngtag_name, lngtag_date> lng_admin_log_subscription_extend{ ushort(7113) };
inline constexpr phrase<> lng_admin_log_antispam_menu_report{ ushort(7114) };
inline constexpr phrase<lngtag_link> lng_admin_log_antispam_menu_report_toast{ ushort(7115) };
inline constexpr phrase<> lng_admin_log_antispam_menu_report_toast_link{ ushort(7116) };
inline constexpr phrase<lngtag_link> lng_terms_signup{ ushort(7117) };
inline constexpr phrase<> lng_terms_signup_link{ ushort(7118) };
inline constexpr phrase<> lng_terms_header{ ushort(7119) };
inline constexpr phrase<lngtag_count> lng_terms_age{ ushort(7120) };
inline constexpr phrase<> lng_terms_agree{ ushort(7126) };
inline constexpr phrase<> lng_terms_decline{ ushort(7127) };
inline constexpr phrase<> lng_terms_signup_sorry{ ushort(7128) };
inline constexpr phrase<> lng_terms_update_sorry{ ushort(7129) };
inline constexpr phrase<> lng_terms_decline_and_delete{ ushort(7130) };
inline constexpr phrase<> lng_terms_back{ ushort(7131) };
inline constexpr phrase<> lng_terms_delete_warning{ ushort(7132) };
inline constexpr phrase<> lng_terms_delete_now{ ushort(7133) };
inline constexpr phrase<lngtag_bot> lng_terms_agree_to_proceed{ ushort(7134) };
inline constexpr phrase<> lng_date_input_day{ ushort(7135) };
inline constexpr phrase<> lng_date_input_month{ ushort(7136) };
inline constexpr phrase<> lng_date_input_year{ ushort(7137) };
inline constexpr phrase<> lng_forward_title{ ushort(7138) };
inline constexpr phrase<lngtag_count> lng_forward_many_title{ ushort(7139) };
inline constexpr phrase<> lng_forward_about{ ushort(7145) };
inline constexpr phrase<> lng_forward_many_about{ ushort(7146) };
inline constexpr phrase<> lng_forward_show_sender{ ushort(7147) };
inline constexpr phrase<> lng_forward_show_senders{ ushort(7148) };
inline constexpr phrase<> lng_forward_show_caption{ ushort(7149) };
inline constexpr phrase<> lng_forward_show_captions{ ushort(7150) };
inline constexpr phrase<> lng_forward_change_recipient{ ushort(7151) };
inline constexpr phrase<> lng_forward_sender_names_removed{ ushort(7152) };
inline constexpr phrase<> lng_forward_header_short{ ushort(7153) };
inline constexpr phrase<> lng_forward_action_show_sender{ ushort(7154) };
inline constexpr phrase<> lng_forward_action_show_senders{ ushort(7155) };
inline constexpr phrase<> lng_forward_action_hide_sender{ ushort(7156) };
inline constexpr phrase<> lng_forward_action_hide_senders{ ushort(7157) };
inline constexpr phrase<> lng_forward_action_show_caption{ ushort(7158) };
inline constexpr phrase<> lng_forward_action_show_captions{ ushort(7159) };
inline constexpr phrase<> lng_forward_action_hide_caption{ ushort(7160) };
inline constexpr phrase<> lng_forward_action_hide_captions{ ushort(7161) };
inline constexpr phrase<> lng_forward_action_change_recipient{ ushort(7162) };
inline constexpr phrase<> lng_forward_action_remove{ ushort(7163) };
inline constexpr phrase<> lng_passport_title{ ushort(7164) };
inline constexpr phrase<lngtag_bot> lng_passport_request1{ ushort(7165) };
inline constexpr phrase<> lng_passport_request2{ ushort(7166) };
inline constexpr phrase<> lng_passport_create_password{ ushort(7167) };
inline constexpr phrase<> lng_passport_about_password{ ushort(7168) };
inline constexpr phrase<> lng_passport_password_create{ ushort(7169) };
inline constexpr phrase<> lng_passport_email_validate{ ushort(7170) };
inline constexpr phrase<lngtag_email> lng_passport_code_sent{ ushort(7171) };
inline constexpr phrase<> lng_passport_stop_password_sure{ ushort(7172) };
inline constexpr phrase<> lng_passport_password_placeholder{ ushort(7173) };
inline constexpr phrase<> lng_passport_next{ ushort(7174) };
inline constexpr phrase<> lng_passport_password_wrong{ ushort(7175) };
inline constexpr phrase<> lng_passport_header{ ushort(7176) };
inline constexpr phrase<> lng_passport_identity_title{ ushort(7177) };
inline constexpr phrase<> lng_passport_identity_description{ ushort(7178) };
inline constexpr phrase<> lng_passport_identity_passport{ ushort(7179) };
inline constexpr phrase<> lng_passport_identity_passport_upload{ ushort(7180) };
inline constexpr phrase<> lng_passport_identity_card{ ushort(7181) };
inline constexpr phrase<> lng_passport_identity_card_upload{ ushort(7182) };
inline constexpr phrase<> lng_passport_identity_license{ ushort(7183) };
inline constexpr phrase<> lng_passport_identity_license_upload{ ushort(7184) };
inline constexpr phrase<> lng_passport_identity_internal{ ushort(7185) };
inline constexpr phrase<> lng_passport_identity_internal_upload{ ushort(7186) };
inline constexpr phrase<> lng_passport_identity_about{ ushort(7187) };
inline constexpr phrase<> lng_passport_address_title{ ushort(7188) };
inline constexpr phrase<> lng_passport_address_description{ ushort(7189) };
inline constexpr phrase<> lng_passport_address_bill{ ushort(7190) };
inline constexpr phrase<> lng_passport_address_bill_upload{ ushort(7191) };
inline constexpr phrase<> lng_passport_address_statement{ ushort(7192) };
inline constexpr phrase<> lng_passport_address_statement_upload{ ushort(7193) };
inline constexpr phrase<> lng_passport_address_agreement{ ushort(7194) };
inline constexpr phrase<> lng_passport_address_agreement_upload{ ushort(7195) };
inline constexpr phrase<> lng_passport_address_registration{ ushort(7196) };
inline constexpr phrase<> lng_passport_address_registration_upload{ ushort(7197) };
inline constexpr phrase<> lng_passport_address_temporary{ ushort(7198) };
inline constexpr phrase<> lng_passport_address_temporary_upload{ ushort(7199) };
inline constexpr phrase<> lng_passport_address_about{ ushort(7200) };
inline constexpr phrase<lngtag_document, lngtag_second_document> lng_passport_or_title{ ushort(7201) };
inline constexpr phrase<> lng_passport_document_type{ ushort(7202) };
inline constexpr phrase<> lng_passport_upload_document{ ushort(7203) };
inline constexpr phrase<> lng_passport_phone_title{ ushort(7204) };
inline constexpr phrase<> lng_passport_phone_description{ ushort(7205) };
inline constexpr phrase<> lng_passport_email_title{ ushort(7206) };
inline constexpr phrase<> lng_passport_email_description{ ushort(7207) };
inline constexpr phrase<> lng_passport_identity_selfie{ ushort(7208) };
inline constexpr phrase<> lng_passport_translation_needed{ ushort(7209) };
inline constexpr phrase<lngtag_policy, lngtag_bot> lng_passport_accept_allow{ ushort(7210) };
inline constexpr phrase<lngtag_bot> lng_passport_allow{ ushort(7211) };
inline constexpr phrase<lngtag_bot> lng_passport_policy{ ushort(7212) };
inline constexpr phrase<> lng_passport_authorize{ ushort(7213) };
inline constexpr phrase<> lng_passport_form_error{ ushort(7214) };
inline constexpr phrase<> lng_passport_save_value{ ushort(7215) };
inline constexpr phrase<lngtag_index> lng_passport_scan_index{ ushort(7216) };
inline constexpr phrase<> lng_passport_upload_scans{ ushort(7217) };
inline constexpr phrase<> lng_passport_upload_more{ ushort(7218) };
inline constexpr phrase<> lng_passport_selfie_title{ ushort(7219) };
inline constexpr phrase<> lng_passport_selfie_description{ ushort(7220) };
inline constexpr phrase<> lng_passport_upload_selfie{ ushort(7221) };
inline constexpr phrase<> lng_passport_reupload_selfie{ ushort(7222) };
inline constexpr phrase<> lng_passport_front_side_title{ ushort(7223) };
inline constexpr phrase<> lng_passport_front_side_description{ ushort(7224) };
inline constexpr phrase<> lng_passport_upload_front_side{ ushort(7225) };
inline constexpr phrase<> lng_passport_reupload_front_side{ ushort(7226) };
inline constexpr phrase<> lng_passport_reverse_side_title{ ushort(7227) };
inline constexpr phrase<> lng_passport_reverse_side_description{ ushort(7228) };
inline constexpr phrase<> lng_passport_upload_reverse_side{ ushort(7229) };
inline constexpr phrase<> lng_passport_reupload_reverse_side{ ushort(7230) };
inline constexpr phrase<> lng_passport_main_page_title{ ushort(7231) };
inline constexpr phrase<> lng_passport_main_page_description{ ushort(7232) };
inline constexpr phrase<> lng_passport_upload_main_page{ ushort(7233) };
inline constexpr phrase<> lng_passport_reupload_main_page{ ushort(7234) };
inline constexpr phrase<> lng_passport_personal_details{ ushort(7235) };
inline constexpr phrase<> lng_passport_personal_details_enter{ ushort(7236) };
inline constexpr phrase<> lng_passport_document_details{ ushort(7237) };
inline constexpr phrase<> lng_passport_choose_image{ ushort(7238) };
inline constexpr phrase<> lng_passport_delete_scan_undo{ ushort(7239) };
inline constexpr phrase<lngtag_date> lng_passport_scan_uploaded{ ushort(7240) };
inline constexpr phrase<> lng_passport_first_name{ ushort(7241) };
inline constexpr phrase<> lng_passport_middle_name{ ushort(7242) };
inline constexpr phrase<> lng_passport_last_name{ ushort(7243) };
inline constexpr phrase<> lng_passport_birth_date{ ushort(7244) };
inline constexpr phrase<> lng_passport_gender{ ushort(7245) };
inline constexpr phrase<> lng_passport_gender_male{ ushort(7246) };
inline constexpr phrase<> lng_passport_gender_female{ ushort(7247) };
inline constexpr phrase<> lng_passport_country{ ushort(7248) };
inline constexpr phrase<> lng_passport_residence_country{ ushort(7249) };
inline constexpr phrase<> lng_passport_country_choose{ ushort(7250) };
inline constexpr phrase<> lng_passport_document_number{ ushort(7251) };
inline constexpr phrase<> lng_passport_expiry_date{ ushort(7252) };
inline constexpr phrase<> lng_passport_native_name_title{ ushort(7253) };
inline constexpr phrase<lngtag_country> lng_passport_native_name_about{ ushort(7254) };
inline constexpr phrase<lngtag_language> lng_passport_native_name_language{ ushort(7255) };
inline constexpr phrase<> lng_passport_native_name_language_about{ ushort(7256) };
inline constexpr phrase<> lng_passport_address{ ushort(7257) };
inline constexpr phrase<> lng_passport_address_enter{ ushort(7258) };
inline constexpr phrase<> lng_passport_street{ ushort(7259) };
inline constexpr phrase<> lng_passport_city{ ushort(7260) };
inline constexpr phrase<> lng_passport_state{ ushort(7261) };
inline constexpr phrase<> lng_passport_postcode{ ushort(7262) };
inline constexpr phrase<> lng_passport_translation{ ushort(7263) };
inline constexpr phrase<lngtag_existing> lng_passport_use_existing{ ushort(7264) };
inline constexpr phrase<> lng_passport_use_existing_phone{ ushort(7265) };
inline constexpr phrase<> lng_passport_new_phone{ ushort(7266) };
inline constexpr phrase<> lng_passport_new_phone_code{ ushort(7267) };
inline constexpr phrase<> lng_passport_use_existing_email{ ushort(7268) };
inline constexpr phrase<> lng_passport_new_email{ ushort(7269) };
inline constexpr phrase<> lng_passport_new_email_code{ ushort(7270) };
inline constexpr phrase<lngtag_phone> lng_passport_confirm_phone{ ushort(7271) };
inline constexpr phrase<lngtag_email> lng_passport_confirm_email{ ushort(7272) };
inline constexpr phrase<> lng_passport_sure_cancel{ ushort(7273) };
inline constexpr phrase<> lng_passport_scans_limit_reached{ ushort(7274) };
inline constexpr phrase<> lng_passport_delete_document{ ushort(7275) };
inline constexpr phrase<> lng_passport_delete_document_sure{ ushort(7276) };
inline constexpr phrase<> lng_passport_delete_details{ ushort(7277) };
inline constexpr phrase<> lng_passport_delete_details_sure{ ushort(7278) };
inline constexpr phrase<> lng_passport_delete_address{ ushort(7279) };
inline constexpr phrase<> lng_passport_delete_address_sure{ ushort(7280) };
inline constexpr phrase<> lng_passport_delete_email{ ushort(7281) };
inline constexpr phrase<> lng_passport_delete_email_sure{ ushort(7282) };
inline constexpr phrase<> lng_passport_delete_phone{ ushort(7283) };
inline constexpr phrase<> lng_passport_delete_phone_sure{ ushort(7284) };
inline constexpr phrase<> lng_passport_success{ ushort(7285) };
inline constexpr phrase<> lng_passport_stop_sure{ ushort(7286) };
inline constexpr phrase<> lng_passport_stop{ ushort(7287) };
inline constexpr phrase<> lng_passport_restart_sure{ ushort(7288) };
inline constexpr phrase<> lng_passport_restart{ ushort(7289) };
inline constexpr phrase<> lng_passport_error_too_large{ ushort(7290) };
inline constexpr phrase<> lng_passport_error_bad_size{ ushort(7291) };
inline constexpr phrase<> lng_passport_error_cant_read{ ushort(7292) };
inline constexpr phrase<> lng_passport_bad_name{ ushort(7293) };
inline constexpr phrase<> lng_passport_wait_upload{ ushort(7294) };
inline constexpr phrase<> lng_passport_app_out_of_date{ ushort(7295) };
inline constexpr phrase<> lng_export_title{ ushort(7296) };
inline constexpr phrase<> lng_export_progress_title{ ushort(7297) };
inline constexpr phrase<> lng_export_option_info{ ushort(7298) };
inline constexpr phrase<> lng_export_option_info_about{ ushort(7299) };
inline constexpr phrase<> lng_export_option_contacts{ ushort(7300) };
inline constexpr phrase<> lng_export_option_contacts_about{ ushort(7301) };
inline constexpr phrase<> lng_export_option_stories{ ushort(7302) };
inline constexpr phrase<> lng_export_option_stories_about{ ushort(7303) };
inline constexpr phrase<> lng_export_option_sessions{ ushort(7304) };
inline constexpr phrase<> lng_export_option_sessions_about{ ushort(7305) };
inline constexpr phrase<> lng_export_header_other{ ushort(7306) };
inline constexpr phrase<> lng_export_option_other{ ushort(7307) };
inline constexpr phrase<> lng_export_option_other_about{ ushort(7308) };
inline constexpr phrase<> lng_export_header_chats{ ushort(7309) };
inline constexpr phrase<> lng_export_option_personal_chats{ ushort(7310) };
inline constexpr phrase<> lng_export_option_bot_chats{ ushort(7311) };
inline constexpr phrase<> lng_export_option_private_groups{ ushort(7312) };
inline constexpr phrase<> lng_export_option_private_channels{ ushort(7313) };
inline constexpr phrase<> lng_export_option_public_groups{ ushort(7314) };
inline constexpr phrase<> lng_export_option_public_channels{ ushort(7315) };
inline constexpr phrase<> lng_export_option_only_my{ ushort(7316) };
inline constexpr phrase<> lng_export_header_media{ ushort(7317) };
inline constexpr phrase<> lng_export_option_photos{ ushort(7318) };
inline constexpr phrase<> lng_export_option_video_files{ ushort(7319) };
inline constexpr phrase<> lng_export_option_voice_messages{ ushort(7320) };
inline constexpr phrase<> lng_export_option_video_messages{ ushort(7321) };
inline constexpr phrase<> lng_export_option_stickers{ ushort(7322) };
inline constexpr phrase<> lng_export_option_gifs{ ushort(7323) };
inline constexpr phrase<> lng_export_option_files{ ushort(7324) };
inline constexpr phrase<lngtag_size> lng_export_option_size_limit{ ushort(7325) };
inline constexpr phrase<> lng_export_header_format{ ushort(7326) };
inline constexpr phrase<lngtag_path> lng_export_option_location{ ushort(7327) };
inline constexpr phrase<lngtag_format, lngtag_path> lng_export_option_format_location{ ushort(7328) };
inline constexpr phrase<> lng_export_option_choose_format{ ushort(7329) };
inline constexpr phrase<> lng_export_option_html{ ushort(7330) };
inline constexpr phrase<> lng_export_option_json{ ushort(7331) };
inline constexpr phrase<> lng_export_option_html_and_json{ ushort(7332) };
inline constexpr phrase<lngtag_from, lngtag_till> lng_export_limits{ ushort(7333) };
inline constexpr phrase<> lng_export_beginning{ ushort(7334) };
inline constexpr phrase<> lng_export_end{ ushort(7335) };
inline constexpr phrase<> lng_export_from_beginning{ ushort(7336) };
inline constexpr phrase<> lng_export_till_end{ ushort(7337) };
inline constexpr phrase<> lng_export_start{ ushort(7338) };
inline constexpr phrase<> lng_export_state_initializing{ ushort(7339) };
inline constexpr phrase<> lng_export_state_userpics{ ushort(7340) };
inline constexpr phrase<> lng_export_state_chats_list{ ushort(7341) };
inline constexpr phrase<> lng_export_state_chats{ ushort(7342) };
inline constexpr phrase<> lng_export_skip_file{ ushort(7343) };
inline constexpr phrase<> lng_export_progress{ ushort(7344) };
inline constexpr phrase<> lng_export_stop{ ushort(7345) };
inline constexpr phrase<> lng_export_sure_stop{ ushort(7346) };
inline constexpr phrase<> lng_export_about_done{ ushort(7347) };
inline constexpr phrase<> lng_export_done{ ushort(7348) };
inline constexpr phrase<> lng_export_finished{ ushort(7349) };
inline constexpr phrase<lngtag_amount> lng_export_total_amount{ ushort(7350) };
inline constexpr phrase<lngtag_size> lng_export_total_size{ ushort(7351) };
inline constexpr phrase<> lng_export_folder{ ushort(7352) };
inline constexpr phrase<> lng_export_invalid{ ushort(7353) };
inline constexpr phrase<lngtag_hours, lngtag_date> lng_export_delay{ ushort(7354) };
inline constexpr phrase<> lng_export_delay_less_than_hour{ ushort(7355) };
inline constexpr phrase<> lng_export_suggest_title{ ushort(7356) };
inline constexpr phrase<> lng_export_suggest_text{ ushort(7357) };
inline constexpr phrase<> lng_export_suggest_cancel{ ushort(7358) };
inline constexpr phrase<> lng_export_about_telegram{ ushort(7359) };
inline constexpr phrase<> lng_export_about_contacts{ ushort(7360) };
inline constexpr phrase<> lng_export_about_frequent{ ushort(7361) };
inline constexpr phrase<> lng_export_about_sessions{ ushort(7362) };
inline constexpr phrase<> lng_export_about_web_sessions{ ushort(7363) };
inline constexpr phrase<> lng_export_about_chats{ ushort(7364) };
inline constexpr phrase<> lng_export_about_left_chats{ ushort(7365) };
inline constexpr phrase<> lng_language_switch_title{ ushort(7366) };
inline constexpr phrase<lngtag_lang_name, lngtag_percent, lngtag_link> lng_language_switch_about_official{ ushort(7367) };
inline constexpr phrase<lngtag_lang_name, lngtag_percent, lngtag_link> lng_language_switch_about_unofficial{ ushort(7368) };
inline constexpr phrase<> lng_language_switch_link{ ushort(7369) };
inline constexpr phrase<> lng_language_switch_apply{ ushort(7370) };
inline constexpr phrase<> lng_language_not_found{ ushort(7371) };
inline constexpr phrase<> lng_language_already{ ushort(7372) };
inline constexpr phrase<> lng_language_not_ready_title{ ushort(7373) };
inline constexpr phrase<lngtag_lang_name, lngtag_link> lng_language_not_ready_about{ ushort(7374) };
inline constexpr phrase<> lng_language_not_ready_link{ ushort(7375) };
inline constexpr phrase<> lng_translate_box_error{ ushort(7376) };
inline constexpr phrase<> lng_translate_settings_subtitle{ ushort(7377) };
inline constexpr phrase<> lng_translate_settings_show{ ushort(7378) };
inline constexpr phrase<> lng_translate_settings_chat{ ushort(7379) };
inline constexpr phrase<> lng_translate_settings_choose{ ushort(7380) };
inline constexpr phrase<> lng_translate_settings_about{ ushort(7381) };
inline constexpr phrase<> lng_translate_settings_one{ ushort(7382) };
inline constexpr phrase<lngtag_extension> lng_launch_exe_warning{ ushort(7383) };
inline constexpr phrase<lngtag_extension> lng_launch_other_warning{ ushort(7384) };
inline constexpr phrase<> lng_launch_svg_warning{ ushort(7385) };
inline constexpr phrase<> lng_launch_exe_sure{ ushort(7386) };
inline constexpr phrase<> lng_launch_other_sure{ ushort(7387) };
inline constexpr phrase<> lng_launch_exe_dont_ask{ ushort(7388) };
inline constexpr phrase<> lng_launch_dont_ask{ ushort(7389) };
inline constexpr phrase<> lng_launch_dont_ask_settings{ ushort(7390) };
inline constexpr phrase<> lng_polls_anonymous{ ushort(7391) };
inline constexpr phrase<> lng_polls_public{ ushort(7392) };
inline constexpr phrase<> lng_polls_anonymous_quiz{ ushort(7393) };
inline constexpr phrase<> lng_polls_public_quiz{ ushort(7394) };
inline constexpr phrase<> lng_polls_closed{ ushort(7395) };
inline constexpr phrase<lngtag_count> lng_polls_votes_count{ ushort(7396) };
inline constexpr phrase<> lng_polls_votes_none{ ushort(7402) };
inline constexpr phrase<lngtag_count> lng_polls_answers_count{ ushort(7403) };
inline constexpr phrase<> lng_polls_answers_none{ ushort(7409) };
inline constexpr phrase<> lng_polls_submit_votes{ ushort(7410) };
inline constexpr phrase<> lng_polls_view_results{ ushort(7411) };
inline constexpr phrase<> lng_polls_retract{ ushort(7412) };
inline constexpr phrase<> lng_polls_stop{ ushort(7413) };
inline constexpr phrase<> lng_polls_stop_warning{ ushort(7414) };
inline constexpr phrase<> lng_polls_stop_sure{ ushort(7415) };
inline constexpr phrase<> lng_polls_menu_item{ ushort(7416) };
inline constexpr phrase<> lng_polls_create{ ushort(7417) };
inline constexpr phrase<> lng_polls_create_title{ ushort(7418) };
inline constexpr phrase<> lng_polls_create_question{ ushort(7419) };
inline constexpr phrase<> lng_polls_create_question_placeholder{ ushort(7420) };
inline constexpr phrase<> lng_polls_create_options{ ushort(7421) };
inline constexpr phrase<> lng_polls_create_option_add{ ushort(7422) };
inline constexpr phrase<lngtag_count> lng_polls_create_limit{ ushort(7423) };
inline constexpr phrase<> lng_polls_create_maximum{ ushort(7429) };
inline constexpr phrase<> lng_polls_create_settings{ ushort(7430) };
inline constexpr phrase<> lng_polls_create_anonymous{ ushort(7431) };
inline constexpr phrase<> lng_polls_create_multiple_choice{ ushort(7432) };
inline constexpr phrase<> lng_polls_create_quiz_mode{ ushort(7433) };
inline constexpr phrase<> lng_polls_create_button{ ushort(7434) };
inline constexpr phrase<> lng_polls_create_one_answer{ ushort(7435) };
inline constexpr phrase<> lng_polls_choose_question{ ushort(7436) };
inline constexpr phrase<> lng_polls_choose_answers{ ushort(7437) };
inline constexpr phrase<> lng_polls_choose_correct{ ushort(7438) };
inline constexpr phrase<> lng_polls_solution_title{ ushort(7439) };
inline constexpr phrase<> lng_polls_solution_placeholder{ ushort(7440) };
inline constexpr phrase<> lng_polls_solution_about{ ushort(7441) };
inline constexpr phrase<> lng_polls_poll_results_title{ ushort(7442) };
inline constexpr phrase<> lng_polls_quiz_results_title{ ushort(7443) };
inline constexpr phrase<lngtag_count> lng_polls_show_more{ ushort(7444) };
inline constexpr phrase<> lng_polls_votes_collapse{ ushort(7450) };
inline constexpr phrase<> lng_todo_title{ ushort(7451) };
inline constexpr phrase<> lng_todo_title_group{ ushort(7452) };
inline constexpr phrase<lngtag_count, lngtag_total> lng_todo_completed{ ushort(7453) };
inline constexpr phrase<lngtag_total> lng_todo_completed_none{ ushort(7459) };
inline constexpr phrase<> lng_todo_menu_item{ ushort(7460) };
inline constexpr phrase<> lng_todo_create{ ushort(7461) };
inline constexpr phrase<> lng_todo_create_title{ ushort(7462) };
inline constexpr phrase<> lng_todo_create_title_placeholder{ ushort(7463) };
inline constexpr phrase<> lng_todo_create_list{ ushort(7464) };
inline constexpr phrase<> lng_todo_create_list_add{ ushort(7465) };
inline constexpr phrase<lngtag_count> lng_todo_create_limit{ ushort(7466) };
inline constexpr phrase<> lng_todo_create_maximum{ ushort(7472) };
inline constexpr phrase<> lng_todo_create_settings{ ushort(7473) };
inline constexpr phrase<> lng_todo_create_allow_add{ ushort(7474) };
inline constexpr phrase<> lng_todo_create_allow_mark{ ushort(7475) };
inline constexpr phrase<> lng_todo_create_button{ ushort(7476) };
inline constexpr phrase<> lng_todo_choose_title{ ushort(7477) };
inline constexpr phrase<> lng_todo_choose_tasks{ ushort(7478) };
inline constexpr phrase<> lng_todo_add_title{ ushort(7479) };
inline constexpr phrase<lngtag_link> lng_todo_create_premium{ ushort(7480) };
inline constexpr phrase<lngtag_link> lng_todo_add_premium{ ushort(7481) };
inline constexpr phrase<lngtag_link> lng_todo_mark_premium{ ushort(7482) };
inline constexpr phrase<> lng_todo_premium_link{ ushort(7483) };
inline constexpr phrase<lngtag_user> lng_todo_mark_restricted{ ushort(7484) };
inline constexpr phrase<> lng_todo_mark_forwarded{ ushort(7485) };
inline constexpr phrase<> lng_outdated_title{ ushort(7486) };
inline constexpr phrase<> lng_outdated_title_bits{ ushort(7487) };
inline constexpr phrase<lngtag_date> lng_outdated_soon{ ushort(7488) };
inline constexpr phrase<> lng_outdated_now{ ushort(7489) };
inline constexpr phrase<> lng_filters_all{ ushort(7490) };
inline constexpr phrase<> lng_filters_all_short{ ushort(7491) };
inline constexpr phrase<> lng_filters_setup{ ushort(7492) };
inline constexpr phrase<> lng_filters_title{ ushort(7493) };
inline constexpr phrase<> lng_filters_subtitle{ ushort(7494) };
inline constexpr phrase<> lng_filters_no_chats{ ushort(7495) };
inline constexpr phrase<lngtag_count> lng_filters_chats_count{ ushort(7496) };
inline constexpr phrase<> lng_filters_create{ ushort(7502) };
inline constexpr phrase<> lng_filters_about{ ushort(7503) };
inline constexpr phrase<> lng_filters_recommended{ ushort(7504) };
inline constexpr phrase<> lng_filters_recommended_add{ ushort(7505) };
inline constexpr phrase<> lng_filters_restore{ ushort(7506) };
inline constexpr phrase<> lng_filters_new{ ushort(7507) };
inline constexpr phrase<> lng_filters_edit{ ushort(7508) };
inline constexpr phrase<> lng_filters_setup_menu{ ushort(7509) };
inline constexpr phrase<> lng_filters_new_name{ ushort(7510) };
inline constexpr phrase<> lng_filters_enable_animations{ ushort(7511) };
inline constexpr phrase<> lng_filters_disable_animations{ ushort(7512) };
inline constexpr phrase<> lng_filters_add_chats{ ushort(7513) };
inline constexpr phrase<> lng_filters_remove_chats{ ushort(7514) };
inline constexpr phrase<> lng_filters_include{ ushort(7515) };
inline constexpr phrase<> lng_filters_include_about{ ushort(7516) };
inline constexpr phrase<> lng_filters_exclude{ ushort(7517) };
inline constexpr phrase<> lng_filters_exclude_about{ ushort(7518) };
inline constexpr phrase<> lng_filters_create_button{ ushort(7519) };
inline constexpr phrase<> lng_filters_include_title{ ushort(7520) };
inline constexpr phrase<> lng_filters_exclude_title{ ushort(7521) };
inline constexpr phrase<> lng_filters_edit_types{ ushort(7522) };
inline constexpr phrase<> lng_filters_edit_chats{ ushort(7523) };
inline constexpr phrase<> lng_filters_include_contacts{ ushort(7524) };
inline constexpr phrase<> lng_filters_include_groups{ ushort(7525) };
inline constexpr phrase<> lng_filters_include_channels{ ushort(7526) };
inline constexpr phrase<> lng_filters_include_bots{ ushort(7527) };
inline constexpr phrase<> lng_filters_name_people{ ushort(7528) };
inline constexpr phrase<> lng_filters_name_unread{ ushort(7529) };
inline constexpr phrase<> lng_filters_name_unmuted{ ushort(7530) };
inline constexpr phrase<> lng_filters_empty{ ushort(7531) };
inline constexpr phrase<> lng_filters_default{ ushort(7532) };
inline constexpr phrase<> lng_filters_type_contacts{ ushort(7533) };
inline constexpr phrase<> lng_filters_type_non_contacts{ ushort(7534) };
inline constexpr phrase<> lng_filters_type_groups{ ushort(7535) };
inline constexpr phrase<> lng_filters_type_channels{ ushort(7536) };
inline constexpr phrase<> lng_filters_type_new{ ushort(7537) };
inline constexpr phrase<> lng_filters_type_existing{ ushort(7538) };
inline constexpr phrase<> lng_filters_type_bots{ ushort(7539) };
inline constexpr phrase<> lng_filters_type_no_archived{ ushort(7540) };
inline constexpr phrase<> lng_filters_type_no_muted{ ushort(7541) };
inline constexpr phrase<> lng_filters_type_no_read{ ushort(7542) };
inline constexpr phrase<> lng_filters_icon_header{ ushort(7543) };
inline constexpr phrase<> lng_filters_context_edit{ ushort(7544) };
inline constexpr phrase<> lng_filters_context_remove{ ushort(7545) };
inline constexpr phrase<> lng_filters_remove_sure{ ushort(7546) };
inline constexpr phrase<> lng_filters_remove_yes{ ushort(7547) };
inline constexpr phrase<> lng_filters_menu_add{ ushort(7548) };
inline constexpr phrase<lngtag_chat, lngtag_folder> lng_filters_toast_add{ ushort(7549) };
inline constexpr phrase<lngtag_chat, lngtag_folder> lng_filters_toast_remove{ ushort(7550) };
inline constexpr phrase<> lng_filters_shareable_status{ ushort(7551) };
inline constexpr phrase<> lng_filters_view_subtitle{ ushort(7552) };
inline constexpr phrase<> lng_filters_vertical{ ushort(7553) };
inline constexpr phrase<> lng_filters_horizontal{ ushort(7554) };
inline constexpr phrase<> lng_filters_enable_tags{ ushort(7555) };
inline constexpr phrase<> lng_filters_enable_tags_about{ ushort(7556) };
inline constexpr phrase<lngtag_link> lng_filters_enable_tags_about_premium{ ushort(7557) };
inline constexpr phrase<> lng_filters_tag_color_subtitle{ ushort(7558) };
inline constexpr phrase<> lng_filters_tag_color_about{ ushort(7559) };
inline constexpr phrase<> lng_filters_tag_color_no{ ushort(7560) };
inline constexpr phrase<> lng_filters_delete_sure{ ushort(7561) };
inline constexpr phrase<> lng_filters_link{ ushort(7562) };
inline constexpr phrase<> lng_filters_link_has{ ushort(7563) };
inline constexpr phrase<> lng_filters_checkbox_remove_bot{ ushort(7564) };
inline constexpr phrase<> lng_filters_checkbox_remove_group{ ushort(7565) };
inline constexpr phrase<> lng_filters_checkbox_remove_channel{ ushort(7566) };
inline constexpr phrase<> lng_filters_link_create{ ushort(7567) };
inline constexpr phrase<> lng_filters_link_cant{ ushort(7568) };
inline constexpr phrase<> lng_filters_link_about{ ushort(7569) };
inline constexpr phrase<> lng_filters_link_about_many{ ushort(7570) };
inline constexpr phrase<> lng_filters_link_title{ ushort(7571) };
inline constexpr phrase<lngtag_folder> lng_filters_link_share_about{ ushort(7572) };
inline constexpr phrase<> lng_filters_link_subtitle{ ushort(7573) };
inline constexpr phrase<> lng_filters_link_chats_none{ ushort(7574) };
inline constexpr phrase<lngtag_count> lng_filters_link_chats{ ushort(7575) };
inline constexpr phrase<> lng_filters_link_bot_status{ ushort(7581) };
inline constexpr phrase<> lng_filters_link_bot_error{ ushort(7582) };
inline constexpr phrase<> lng_filters_link_private_status{ ushort(7583) };
inline constexpr phrase<> lng_filters_link_private_error{ ushort(7584) };
inline constexpr phrase<> lng_filters_link_noadmin_status{ ushort(7585) };
inline constexpr phrase<> lng_filters_link_noadmin_group_error{ ushort(7586) };
inline constexpr phrase<> lng_filters_link_noadmin_channel_error{ ushort(7587) };
inline constexpr phrase<> lng_filters_link_already_group{ ushort(7588) };
inline constexpr phrase<> lng_filters_link_already_channel{ ushort(7589) };
inline constexpr phrase<> lng_filters_link_inaccessible{ ushort(7590) };
inline constexpr phrase<> lng_filters_link_chats_about{ ushort(7591) };
inline constexpr phrase<> lng_filters_link_no_about{ ushort(7592) };
inline constexpr phrase<> lng_filters_link_chats_no{ ushort(7593) };
inline constexpr phrase<> lng_filters_link_chats_no_about{ ushort(7594) };
inline constexpr phrase<> lng_filters_link_name_it{ ushort(7595) };
inline constexpr phrase<> lng_filters_link_delete_sure{ ushort(7596) };
inline constexpr phrase<> lng_filters_link_qr_about{ ushort(7597) };
inline constexpr phrase<> lng_filters_link_group_admin_error{ ushort(7598) };
inline constexpr phrase<> lng_filters_by_link_title{ ushort(7599) };
inline constexpr phrase<lngtag_folder> lng_filters_by_link_sure{ ushort(7600) };
inline constexpr phrase<lngtag_count> lng_filters_by_link_join{ ushort(7601) };
inline constexpr phrase<lngtag_folder> lng_filters_by_link_add_button{ ushort(7607) };
inline constexpr phrase<> lng_filters_by_link_add_no{ ushort(7608) };
inline constexpr phrase<> lng_filters_by_link_more{ ushort(7609) };
inline constexpr phrase<lngtag_folder> lng_filters_by_link_more_sure{ ushort(7610) };
inline constexpr phrase<> lng_filters_by_link_about{ ushort(7611) };
inline constexpr phrase<lngtag_count> lng_filters_by_link_and_join_button{ ushort(7612) };
inline constexpr phrase<> lng_filters_by_link_join_no{ ushort(7618) };
inline constexpr phrase<> lng_filters_by_link_already{ ushort(7619) };
inline constexpr phrase<lngtag_folder> lng_filters_by_link_already_about{ ushort(7620) };
inline constexpr phrase<lngtag_count> lng_filters_by_link_in{ ushort(7621) };
inline constexpr phrase<> lng_filters_by_link_remove{ ushort(7627) };
inline constexpr phrase<lngtag_folder> lng_filters_by_link_remove_sure{ ushort(7628) };
inline constexpr phrase<lngtag_count> lng_filters_by_link_quit{ ushort(7629) };
inline constexpr phrase<> lng_filters_by_link_select{ ushort(7635) };
inline constexpr phrase<> lng_filters_by_link_deselect{ ushort(7636) };
inline constexpr phrase<> lng_filters_by_link_about_quit{ ushort(7637) };
inline constexpr phrase<> lng_filters_by_link_remove_button{ ushort(7638) };
inline constexpr phrase<lngtag_count> lng_filters_by_link_and_quit_button{ ushort(7639) };
inline constexpr phrase<lngtag_folder> lng_filters_added_title{ ushort(7645) };
inline constexpr phrase<lngtag_count> lng_filters_added_also{ ushort(7646) };
inline constexpr phrase<lngtag_folder> lng_filters_updated_title{ ushort(7652) };
inline constexpr phrase<lngtag_count> lng_filters_updated_also{ ushort(7653) };
inline constexpr phrase<lngtag_count> lng_filters_bar_you_can{ ushort(7659) };
inline constexpr phrase<lngtag_count> lng_filters_bar_view{ ushort(7665) };
inline constexpr phrase<> lng_chat_theme_change{ ushort(7671) };
inline constexpr phrase<> lng_chat_theme_wallpaper{ ushort(7672) };
inline constexpr phrase<> lng_chat_theme_none{ ushort(7673) };
inline constexpr phrase<> lng_chat_theme_apply{ ushort(7674) };
inline constexpr phrase<> lng_chat_theme_change_wallpaper{ ushort(7675) };
inline constexpr phrase<> lng_chat_theme_title{ ushort(7676) };
inline constexpr phrase<> lng_chat_theme_cant_voice{ ushort(7677) };
inline constexpr phrase<lngtag_name> lng_chat_theme_gift_replace{ ushort(7678) };
inline constexpr phrase<> lng_photo_editor_menu_delete{ ushort(7679) };
inline constexpr phrase<> lng_photo_editor_menu_flip{ ushort(7680) };
inline constexpr phrase<> lng_photo_editor_menu_duplicate{ ushort(7681) };
inline constexpr phrase<> lng_voice_speed_slow{ ushort(7682) };
inline constexpr phrase<> lng_voice_speed_normal{ ushort(7683) };
inline constexpr phrase<> lng_voice_speed_medium{ ushort(7684) };
inline constexpr phrase<> lng_voice_speed_fast{ ushort(7685) };
inline constexpr phrase<> lng_voice_speed_very_fast{ ushort(7686) };
inline constexpr phrase<> lng_voice_speed_super_fast{ ushort(7687) };
inline constexpr phrase<> lng_view_button_user{ ushort(7688) };
inline constexpr phrase<> lng_view_button_bot{ ushort(7689) };
inline constexpr phrase<> lng_view_button_group{ ushort(7690) };
inline constexpr phrase<> lng_view_button_channel{ ushort(7691) };
inline constexpr phrase<> lng_view_button_bot_app{ ushort(7692) };
inline constexpr phrase<> lng_view_button_background{ ushort(7693) };
inline constexpr phrase<> lng_view_button_theme{ ushort(7694) };
inline constexpr phrase<> lng_view_button_message{ ushort(7695) };
inline constexpr phrase<> lng_view_button_story{ ushort(7696) };
inline constexpr phrase<> lng_view_button_voice_chat{ ushort(7697) };
inline constexpr phrase<> lng_view_button_voice_chat_channel{ ushort(7698) };
inline constexpr phrase<> lng_view_button_request_join{ ushort(7699) };
inline constexpr phrase<> lng_view_button_external_link{ ushort(7700) };
inline constexpr phrase<> lng_view_button_boost{ ushort(7701) };
inline constexpr phrase<> lng_view_button_giftcode{ ushort(7702) };
inline constexpr phrase<> lng_view_button_iv{ ushort(7703) };
inline constexpr phrase<> lng_view_button_stickerset{ ushort(7704) };
inline constexpr phrase<> lng_view_button_emojipack{ ushort(7705) };
inline constexpr phrase<> lng_view_button_collectible{ ushort(7706) };
inline constexpr phrase<> lng_view_button_call{ ushort(7707) };
inline constexpr phrase<> lng_view_button_storyalbum{ ushort(7708) };
inline constexpr phrase<> lng_view_button_collection{ ushort(7709) };
inline constexpr phrase<> lng_sponsored_hide_ads{ ushort(7710) };
inline constexpr phrase<> lng_sponsored_title{ ushort(7711) };
inline constexpr phrase<lngtag_link> lng_sponsored_info_description1_linked{ ushort(7712) };
inline constexpr phrase<> lng_sponsored_info_description1_link{ ushort(7713) };
inline constexpr phrase<> lng_sponsored_info_description1_url{ ushort(7714) };
inline constexpr phrase<> lng_sponsored_info_description2{ ushort(7715) };
inline constexpr phrase<> lng_sponsored_info_menu{ ushort(7716) };
inline constexpr phrase<lngtag_text> lng_sponsored_info_submenu{ ushort(7717) };
inline constexpr phrase<> lng_sponsored_menu_revenued_about{ ushort(7718) };
inline constexpr phrase<> lng_sponsored_menu_revenued_report{ ushort(7719) };
inline constexpr phrase<> lng_sponsored_revenued_subtitle{ ushort(7720) };
inline constexpr phrase<> lng_sponsored_revenued_info1_title{ ushort(7721) };
inline constexpr phrase<> lng_sponsored_revenued_info1_description{ ushort(7722) };
inline constexpr phrase<> lng_sponsored_revenued_info1_bot_description{ ushort(7723) };
inline constexpr phrase<> lng_sponsored_revenued_info1_search_description{ ushort(7724) };
inline constexpr phrase<> lng_sponsored_revenued_info2_title{ ushort(7725) };
inline constexpr phrase<> lng_sponsored_revenued_info2_bot_title{ ushort(7726) };
inline constexpr phrase<> lng_sponsored_revenued_info2_description{ ushort(7727) };
inline constexpr phrase<> lng_sponsored_revenued_info2_bot_description{ ushort(7728) };
inline constexpr phrase<> lng_sponsored_revenued_info3_title{ ushort(7729) };
inline constexpr phrase<lngtag_count, lngtag_link> lng_sponsored_revenued_info3_description{ ushort(7730) };
inline constexpr phrase<lngtag_link> lng_sponsored_revenued_info3_bot_description{ ushort(7736) };
inline constexpr phrase<lngtag_link> lng_sponsored_revenued_info3_search_description{ ushort(7737) };
inline constexpr phrase<lngtag_arrow> lng_sponsored_revenued_info3_search_link{ ushort(7738) };
inline constexpr phrase<> lng_sponsored_revenued_footer_title{ ushort(7739) };
inline constexpr phrase<lngtag_link> lng_sponsored_revenued_footer_description{ ushort(7740) };
inline constexpr phrase<lngtag_link> lng_sponsored_revenued_footer_bot_description{ ushort(7741) };
inline constexpr phrase<lngtag_link> lng_sponsored_revenued_footer_search_description{ ushort(7742) };
inline constexpr phrase<> lng_sponsored_top_bar_hide{ ushort(7743) };
inline constexpr phrase<> lng_telegram_features_url{ ushort(7744) };
inline constexpr phrase<> lng_mini_apps_disclaimer_title{ ushort(7745) };
inline constexpr phrase<> lng_mini_apps_disclaimer_text{ ushort(7746) };
inline constexpr phrase<lngtag_link> lng_mini_apps_disclaimer_button{ ushort(7747) };
inline constexpr phrase<> lng_mini_apps_disclaimer_link{ ushort(7748) };
inline constexpr phrase<> lng_mini_apps_tos_url{ ushort(7749) };
inline constexpr phrase<> lng_ringtones_box_title{ ushort(7750) };
inline constexpr phrase<> lng_ringtones_box_cloud_subtitle{ ushort(7751) };
inline constexpr phrase<> lng_ringtones_box_volume{ ushort(7752) };
inline constexpr phrase<> lng_ringtones_box_upload_choose{ ushort(7753) };
inline constexpr phrase<> lng_ringtones_box_upload_button{ ushort(7754) };
inline constexpr phrase<> lng_ringtones_box_about{ ushort(7755) };
inline constexpr phrase<> lng_ringtones_box_default{ ushort(7756) };
inline constexpr phrase<> lng_ringtones_box_no_sound{ ushort(7757) };
inline constexpr phrase<> lng_ringtones_toast_added{ ushort(7758) };
inline constexpr phrase<lngtag_size> lng_ringtones_error_max_size{ ushort(7759) };
inline constexpr phrase<lngtag_duration> lng_ringtones_error_max_duration{ ushort(7760) };
inline constexpr phrase<> lng_forum_topic_new{ ushort(7761) };
inline constexpr phrase<> lng_forum_topic_edit{ ushort(7762) };
inline constexpr phrase<> lng_forum_topic_title{ ushort(7763) };
inline constexpr phrase<> lng_forum_topic_close{ ushort(7764) };
inline constexpr phrase<> lng_forum_topic_reopen{ ushort(7765) };
inline constexpr phrase<> lng_forum_topic_closed{ ushort(7766) };
inline constexpr phrase<> lng_forum_topic_delete{ ushort(7767) };
inline constexpr phrase<> lng_forum_topic_delete_sure{ ushort(7768) };
inline constexpr phrase<> lng_forum_topic_created_title_my{ ushort(7769) };
inline constexpr phrase<> lng_forum_topic_created_body_my{ ushort(7770) };
inline constexpr phrase<> lng_forum_topic_created_title{ ushort(7771) };
inline constexpr phrase<> lng_forum_topic_created_body{ ushort(7772) };
inline constexpr phrase<> lng_forum_topics_switch{ ushort(7773) };
inline constexpr phrase<lngtag_count> lng_forum_topics_not_enough{ ushort(7774) };
inline constexpr phrase<> lng_forum_topics_no_discussion{ ushort(7780) };
inline constexpr phrase<> lng_forum_choose_title_and_icon{ ushort(7781) };
inline constexpr phrase<> lng_forum_replies_only{ ushort(7782) };
inline constexpr phrase<lngtag_topic> lng_forum_message_in{ ushort(7783) };
inline constexpr phrase<lngtag_topic> lng_forum_reply_in{ ushort(7784) };
inline constexpr phrase<> lng_forum_no_topics{ ushort(7785) };
inline constexpr phrase<> lng_forum_create_topic{ ushort(7786) };
inline constexpr phrase<> lng_forum_discard_sure{ ushort(7787) };
inline constexpr phrase<> lng_forum_view_as_messages{ ushort(7788) };
inline constexpr phrase<> lng_forum_view_as_topics{ ushort(7789) };
inline constexpr phrase<> lng_forum_no_messages{ ushort(7790) };
inline constexpr phrase<lngtag_count> lng_forum_messages{ ushort(7791) };
inline constexpr phrase<> lng_forum_show_topics_list{ ushort(7797) };
inline constexpr phrase<> lng_monoforum_choose_to_reply{ ushort(7798) };
inline constexpr phrase<> lng_request_peer_requirements{ ushort(7799) };
inline constexpr phrase<lngtag_rights> lng_request_peer_rights{ ushort(7800) };
inline constexpr phrase<lngtag_rights, lngtag_last> lng_request_peer_rights_and{ ushort(7801) };
inline constexpr phrase<lngtag_chat, lngtag_bot> lng_request_peer_confirm{ ushort(7802) };
inline constexpr phrase<lngtag_bot, lngtag_chat> lng_request_peer_confirm_add{ ushort(7803) };
inline constexpr phrase<lngtag_bot, lngtag_chat, lngtag_rights> lng_request_peer_confirm_rights{ ushort(7804) };
inline constexpr phrase<> lng_request_peer_confirm_send{ ushort(7805) };
inline constexpr phrase<> lng_request_user_title{ ushort(7806) };
inline constexpr phrase<> lng_request_users_title{ ushort(7807) };
inline constexpr phrase<> lng_request_user_premium_yes{ ushort(7808) };
inline constexpr phrase<> lng_request_user_premium_no{ ushort(7809) };
inline constexpr phrase<> lng_request_user_no{ ushort(7810) };
inline constexpr phrase<> lng_request_user_no_about{ ushort(7811) };
inline constexpr phrase<> lng_request_bot_title{ ushort(7812) };
inline constexpr phrase<> lng_request_bot_no{ ushort(7813) };
inline constexpr phrase<> lng_request_bot_no_about{ ushort(7814) };
inline constexpr phrase<> lng_request_group_title{ ushort(7815) };
inline constexpr phrase<> lng_request_group_no{ ushort(7816) };
inline constexpr phrase<> lng_request_group_no_about{ ushort(7817) };
inline constexpr phrase<> lng_request_group_public_yes{ ushort(7818) };
inline constexpr phrase<> lng_request_group_public_no{ ushort(7819) };
inline constexpr phrase<> lng_request_group_topics_yes{ ushort(7820) };
inline constexpr phrase<> lng_request_group_topics_no{ ushort(7821) };
inline constexpr phrase<> lng_request_group_am_owner{ ushort(7822) };
inline constexpr phrase<> lng_request_group_change_info{ ushort(7823) };
inline constexpr phrase<> lng_request_group_delete_messages{ ushort(7824) };
inline constexpr phrase<> lng_request_group_ban_users{ ushort(7825) };
inline constexpr phrase<> lng_request_group_invite{ ushort(7826) };
inline constexpr phrase<> lng_request_group_pin_messages{ ushort(7827) };
inline constexpr phrase<> lng_request_group_manage_topics{ ushort(7828) };
inline constexpr phrase<> lng_request_group_manage_video_chats{ ushort(7829) };
inline constexpr phrase<> lng_request_group_anonymous{ ushort(7830) };
inline constexpr phrase<> lng_request_group_add_admins{ ushort(7831) };
inline constexpr phrase<> lng_request_group_create{ ushort(7832) };
inline constexpr phrase<> lng_request_channel_title{ ushort(7833) };
inline constexpr phrase<> lng_request_channel_no{ ushort(7834) };
inline constexpr phrase<> lng_request_channel_no_about{ ushort(7835) };
inline constexpr phrase<> lng_request_channel_public_yes{ ushort(7836) };
inline constexpr phrase<> lng_request_channel_public_no{ ushort(7837) };
inline constexpr phrase<> lng_request_channel_am_owner{ ushort(7838) };
inline constexpr phrase<> lng_request_channel_change_info{ ushort(7839) };
inline constexpr phrase<> lng_request_channel_post_messages{ ushort(7840) };
inline constexpr phrase<> lng_request_channel_edit_messages{ ushort(7841) };
inline constexpr phrase<> lng_request_channel_delete_messages{ ushort(7842) };
inline constexpr phrase<> lng_request_channel_add_subscribers{ ushort(7843) };
inline constexpr phrase<> lng_request_channel_manage_livestreams{ ushort(7844) };
inline constexpr phrase<> lng_request_channel_manage_direct{ ushort(7845) };
inline constexpr phrase<> lng_request_channel_add_admins{ ushort(7846) };
inline constexpr phrase<> lng_request_channel_create{ ushort(7847) };
inline constexpr phrase<> lng_userpic_builder_color_subtitle{ ushort(7848) };
inline constexpr phrase<> lng_userpic_builder_emoji_subtitle{ ushort(7849) };
inline constexpr phrase<> lng_stories_my_name{ ushort(7850) };
inline constexpr phrase<> lng_stories_archive{ ushort(7851) };
inline constexpr phrase<> lng_stories_unarchive{ ushort(7852) };
inline constexpr phrase<lngtag_count> lng_stories_row_count{ ushort(7853) };
inline constexpr phrase<lngtag_count> lng_stories_views{ ushort(7859) };
inline constexpr phrase<> lng_stories_no_views{ ushort(7865) };
inline constexpr phrase<> lng_stories_view_reactions{ ushort(7866) };
inline constexpr phrase<> lng_stories_unsupported{ ushort(7867) };
inline constexpr phrase<> lng_stories_cant_reply{ ushort(7868) };
inline constexpr phrase<> lng_stories_about_silent{ ushort(7869) };
inline constexpr phrase<lngtag_user> lng_stories_about_close_friends{ ushort(7870) };
inline constexpr phrase<lngtag_user> lng_stories_about_contacts{ ushort(7871) };
inline constexpr phrase<lngtag_user> lng_stories_about_selected_contacts{ ushort(7872) };
inline constexpr phrase<> lng_stories_about_close_friends_my{ ushort(7873) };
inline constexpr phrase<> lng_stories_about_contacts_my{ ushort(7874) };
inline constexpr phrase<> lng_stories_about_selected_contacts_my{ ushort(7875) };
inline constexpr phrase<> lng_stories_click_to_view_mine{ ushort(7876) };
inline constexpr phrase<lngtag_users> lng_stories_click_to_view{ ushort(7877) };
inline constexpr phrase<lngtag_accumulated, lngtag_user> lng_stories_click_to_view_and_one{ ushort(7878) };
inline constexpr phrase<lngtag_accumulated, lngtag_user> lng_stories_click_to_view_and_last{ ushort(7879) };
inline constexpr phrase<> lng_stories_show_more{ ushort(7880) };
inline constexpr phrase<> lng_stories_my_title{ ushort(7881) };
inline constexpr phrase<> lng_stories_archive_button{ ushort(7882) };
inline constexpr phrase<> lng_stories_recent_button{ ushort(7883) };
inline constexpr phrase<> lng_stories_archive_title{ ushort(7884) };
inline constexpr phrase<> lng_stories_archive_about{ ushort(7885) };
inline constexpr phrase<> lng_stories_channel_archive_about{ ushort(7886) };
inline constexpr phrase<> lng_stories_empty{ ushort(7887) };
inline constexpr phrase<> lng_stories_empty_channel{ ushort(7888) };
inline constexpr phrase<> lng_stories_reply_sent{ ushort(7889) };
inline constexpr phrase<lngtag_user> lng_stories_hidden_to_contacts{ ushort(7890) };
inline constexpr phrase<lngtag_user> lng_stories_shown_in_chats{ ushort(7891) };
inline constexpr phrase<> lng_stories_delete_one_sure{ ushort(7892) };
inline constexpr phrase<lngtag_count> lng_stories_delete_sure{ ushort(7893) };
inline constexpr phrase<> lng_stories_save_sure{ ushort(7899) };
inline constexpr phrase<lngtag_count> lng_stories_save_sure_many{ ushort(7900) };
inline constexpr phrase<> lng_stories_save_done{ ushort(7906) };
inline constexpr phrase<lngtag_count> lng_stories_save_done_many{ ushort(7907) };
inline constexpr phrase<> lng_stories_save_done_about{ ushort(7913) };
inline constexpr phrase<> lng_stories_archive_sure{ ushort(7914) };
inline constexpr phrase<lngtag_count> lng_stories_archive_sure_many{ ushort(7915) };
inline constexpr phrase<> lng_stories_archive_done{ ushort(7921) };
inline constexpr phrase<lngtag_count> lng_stories_archive_done_many{ ushort(7922) };
inline constexpr phrase<> lng_stories_channel_save_sure{ ushort(7928) };
inline constexpr phrase<lngtag_count> lng_stories_channel_save_sure_many{ ushort(7929) };
inline constexpr phrase<> lng_stories_channel_save_done{ ushort(7935) };
inline constexpr phrase<lngtag_count> lng_stories_channel_save_done_many{ ushort(7936) };
inline constexpr phrase<> lng_stories_channel_save_done_about{ ushort(7942) };
inline constexpr phrase<> lng_stories_channel_archive_sure{ ushort(7943) };
inline constexpr phrase<lngtag_count> lng_stories_channel_archive_sure_many{ ushort(7944) };
inline constexpr phrase<> lng_stories_channel_archive_done{ ushort(7950) };
inline constexpr phrase<lngtag_count> lng_stories_channel_archive_done_many{ ushort(7951) };
inline constexpr phrase<lngtag_link> lng_stories_save_promo{ ushort(7957) };
inline constexpr phrase<> lng_stories_reaction_as_message{ ushort(7958) };
inline constexpr phrase<> lng_stories_album_add{ ushort(7959) };
inline constexpr phrase<> lng_stories_album_new_title{ ushort(7960) };
inline constexpr phrase<> lng_stories_album_new_button{ ushort(7961) };
inline constexpr phrase<> lng_stories_album_new_text{ ushort(7962) };
inline constexpr phrase<> lng_stories_album_new_ph{ ushort(7963) };
inline constexpr phrase<> lng_stories_album_new_create{ ushort(7964) };
inline constexpr phrase<> lng_stories_album_empty_title{ ushort(7965) };
inline constexpr phrase<> lng_stories_album_empty_text{ ushort(7966) };
inline constexpr phrase<> lng_stories_album_all{ ushort(7967) };
inline constexpr phrase<> lng_stories_album_add_title{ ushort(7968) };
inline constexpr phrase<> lng_stories_album_add_button{ ushort(7969) };
inline constexpr phrase<> lng_stories_album_share{ ushort(7970) };
inline constexpr phrase<> lng_stories_album_edit{ ushort(7971) };
inline constexpr phrase<> lng_stories_album_limit_title{ ushort(7972) };
inline constexpr phrase<> lng_stories_album_limit_text{ ushort(7973) };
inline constexpr phrase<> lng_stories_album_delete{ ushort(7974) };
inline constexpr phrase<> lng_stories_album_delete_sure{ ushort(7975) };
inline constexpr phrase<> lng_stories_album_delete_button{ ushort(7976) };
inline constexpr phrase<> lng_stories_album_add_to{ ushort(7977) };
inline constexpr phrase<> lng_stealth_mode_menu_item{ ushort(7978) };
inline constexpr phrase<> lng_stealth_mode_title{ ushort(7979) };
inline constexpr phrase<> lng_stealth_mode_unlock_about{ ushort(7980) };
inline constexpr phrase<> lng_stealth_mode_about{ ushort(7981) };
inline constexpr phrase<> lng_stealth_mode_past_title{ ushort(7982) };
inline constexpr phrase<> lng_stealth_mode_past_about{ ushort(7983) };
inline constexpr phrase<> lng_stealth_mode_next_title{ ushort(7984) };
inline constexpr phrase<> lng_stealth_mode_next_about{ ushort(7985) };
inline constexpr phrase<> lng_stealth_mode_unlock{ ushort(7986) };
inline constexpr phrase<> lng_stealth_mode_enable{ ushort(7987) };
inline constexpr phrase<lngtag_left> lng_stealth_mode_cooldown_in{ ushort(7988) };
inline constexpr phrase<> lng_stealth_mode_cooldown_tip{ ushort(7989) };
inline constexpr phrase<> lng_stealth_mode_enabled_tip_title{ ushort(7990) };
inline constexpr phrase<> lng_stealth_mode_enabled_tip{ ushort(7991) };
inline constexpr phrase<lngtag_left> lng_stealth_mode_countdown{ ushort(7992) };
inline constexpr phrase<> lng_stealth_mode_already_title{ ushort(7993) };
inline constexpr phrase<lngtag_left> lng_stealth_mode_already_about{ ushort(7994) };
inline constexpr phrase<> lng_stories_link_invalid{ ushort(7995) };
inline constexpr phrase<> lng_stats_title{ ushort(7996) };
inline constexpr phrase<> lng_stats_message_title{ ushort(7997) };
inline constexpr phrase<> lng_stats_story_title{ ushort(7998) };
inline constexpr phrase<> lng_stats_zoom_out{ ushort(7999) };
inline constexpr phrase<lngtag_days_count, lngtag_month, lngtag_year> lng_stats_day_month_year{ ushort(8000) };
inline constexpr phrase<lngtag_days_count, lngtag_month> lng_stats_day_month{ ushort(8001) };
inline constexpr phrase<lngtag_day, lngtag_days_count, lngtag_month, lngtag_year> lng_stats_weekday_day_month_year{ ushort(8002) };
inline constexpr phrase<lngtag_day, lngtag_days_count, lngtag_month, lngtag_time> lng_stats_weekday_day_month_time{ ushort(8003) };
inline constexpr phrase<> lng_stats_overview_title{ ushort(8004) };
inline constexpr phrase<> lng_stats_overview_member_count{ ushort(8005) };
inline constexpr phrase<> lng_stats_overview_mean_view_count{ ushort(8006) };
inline constexpr phrase<> lng_stats_overview_mean_share_count{ ushort(8007) };
inline constexpr phrase<> lng_stats_overview_mean_reactions_count{ ushort(8008) };
inline constexpr phrase<> lng_stats_overview_mean_story_view_count{ ushort(8009) };
inline constexpr phrase<> lng_stats_overview_mean_story_share_count{ ushort(8010) };
inline constexpr phrase<> lng_stats_overview_mean_story_reactions_count{ ushort(8011) };
inline constexpr phrase<> lng_stats_overview_enabled_notifications{ ushort(8012) };
inline constexpr phrase<> lng_stats_overview_messages{ ushort(8013) };
inline constexpr phrase<> lng_stats_overview_group_mean_view_count{ ushort(8014) };
inline constexpr phrase<> lng_stats_overview_group_mean_post_count{ ushort(8015) };
inline constexpr phrase<> lng_stats_overview_message_private_shares{ ushort(8016) };
inline constexpr phrase<> lng_stats_overview_message_public_shares{ ushort(8017) };
inline constexpr phrase<> lng_stats_overview_message_views{ ushort(8018) };
inline constexpr phrase<lngtag_count> lng_stats_overview_message_public_share{ ushort(8019) };
inline constexpr phrase<> lng_stats_members_title{ ushort(8025) };
inline constexpr phrase<> lng_stats_admins_title{ ushort(8026) };
inline constexpr phrase<> lng_stats_inviters_title{ ushort(8027) };
inline constexpr phrase<lngtag_count> lng_stats_member_messages{ ushort(8028) };
inline constexpr phrase<lngtag_count> lng_stats_member_characters{ ushort(8034) };
inline constexpr phrase<lngtag_count> lng_stats_member_deletions{ ushort(8040) };
inline constexpr phrase<lngtag_count> lng_stats_member_bans{ ushort(8046) };
inline constexpr phrase<lngtag_count> lng_stats_member_restrictions{ ushort(8052) };
inline constexpr phrase<lngtag_count> lng_stats_member_invitations{ ushort(8058) };
inline constexpr phrase<> lng_stats_recent_messages_title{ ushort(8064) };
inline constexpr phrase<lngtag_count> lng_stats_recent_messages_views{ ushort(8065) };
inline constexpr phrase<> lng_stats_loading{ ushort(8071) };
inline constexpr phrase<> lng_stats_loading_subtext{ ushort(8072) };
inline constexpr phrase<> lng_stats_boosts_loading{ ushort(8073) };
inline constexpr phrase<> lng_stats_boosts_loading_subtext{ ushort(8074) };
inline constexpr phrase<> lng_stats_earn_loading{ ushort(8075) };
inline constexpr phrase<> lng_stats_earn_loading_subtext{ ushort(8076) };
inline constexpr phrase<> lng_chart_title_member_count{ ushort(8077) };
inline constexpr phrase<> lng_chart_title_join{ ushort(8078) };
inline constexpr phrase<> lng_chart_title_mute{ ushort(8079) };
inline constexpr phrase<> lng_chart_title_view_count_by_hour{ ushort(8080) };
inline constexpr phrase<> lng_chart_title_view_count_by_source{ ushort(8081) };
inline constexpr phrase<> lng_chart_title_join_by_source{ ushort(8082) };
inline constexpr phrase<> lng_chart_title_language{ ushort(8083) };
inline constexpr phrase<> lng_chart_title_message_interaction{ ushort(8084) };
inline constexpr phrase<> lng_chart_title_instant_view_interaction{ ushort(8085) };
inline constexpr phrase<> lng_chart_title_reactions_by_emotion{ ushort(8086) };
inline constexpr phrase<> lng_chart_title_story_interactions{ ushort(8087) };
inline constexpr phrase<> lng_chart_title_story_reactions_by_emotion{ ushort(8088) };
inline constexpr phrase<> lng_chart_title_group_join{ ushort(8089) };
inline constexpr phrase<> lng_chart_title_group_join_by_source{ ushort(8090) };
inline constexpr phrase<> lng_chart_title_group_language{ ushort(8091) };
inline constexpr phrase<> lng_chart_title_group_message_content{ ushort(8092) };
inline constexpr phrase<> lng_chart_title_group_action{ ushort(8093) };
inline constexpr phrase<> lng_chart_title_group_day{ ushort(8094) };
inline constexpr phrase<> lng_chart_title_group_week{ ushort(8095) };
inline constexpr phrase<> lng_boosts_title{ ushort(8096) };
inline constexpr phrase<> lng_boosts_level{ ushort(8097) };
inline constexpr phrase<> lng_boosts_existing{ ushort(8098) };
inline constexpr phrase<> lng_boosts_premium_audience{ ushort(8099) };
inline constexpr phrase<> lng_boosts_premium_members{ ushort(8100) };
inline constexpr phrase<> lng_boosts_next_level{ ushort(8101) };
inline constexpr phrase<lngtag_count> lng_boosts_list_title{ ushort(8102) };
inline constexpr phrase<> lng_boosts_list_subtext{ ushort(8108) };
inline constexpr phrase<> lng_boosts_list_subtext_group{ ushort(8109) };
inline constexpr phrase<lngtag_count> lng_boosts_show_more_boosts{ ushort(8110) };
inline constexpr phrase<lngtag_count> lng_boosts_show_more_gifts{ ushort(8116) };
inline constexpr phrase<lngtag_date> lng_boosts_list_status{ ushort(8122) };
inline constexpr phrase<> lng_boosts_link_title{ ushort(8123) };
inline constexpr phrase<> lng_boosts_link_subtext{ ushort(8124) };
inline constexpr phrase<> lng_boosts_link_subtext_group{ ushort(8125) };
inline constexpr phrase<> lng_boosts_get_boosts{ ushort(8126) };
inline constexpr phrase<> lng_boosts_get_boosts_subtext{ ushort(8127) };
inline constexpr phrase<> lng_boosts_get_boosts_subtext_group{ ushort(8128) };
inline constexpr phrase<> lng_boosts_list_unclaimed{ ushort(8129) };
inline constexpr phrase<> lng_boosts_list_pending{ ushort(8130) };
inline constexpr phrase<> lng_boosts_list_pending_about{ ushort(8131) };
inline constexpr phrase<lngtag_count> lng_boosts_list_tab_gifts{ ushort(8132) };
inline constexpr phrase<> lng_boosts_prepaid_giveaway_title{ ushort(8138) };
inline constexpr phrase<> lng_boosts_prepaid_giveaway_title_subtext{ ushort(8139) };
inline constexpr phrase<> lng_boosts_prepaid_giveaway_single{ ushort(8140) };
inline constexpr phrase<lngtag_count> lng_boosts_prepaid_giveaway_quantity{ ushort(8141) };
inline constexpr phrase<lngtag_count> lng_boosts_prepaid_giveaway_moths{ ushort(8147) };
inline constexpr phrase<lngtag_count, lngtag_duration> lng_boosts_prepaid_giveaway_status{ ushort(8153) };
inline constexpr phrase<lngtag_count, lngtag_amount> lng_boosts_prepaid_giveaway_credits_status{ ushort(8159) };
inline constexpr phrase<> lng_channel_earn_title{ ushort(8165) };
inline constexpr phrase<lngtag_link> lng_channel_earn_about{ ushort(8166) };
inline constexpr phrase<lngtag_link> lng_channel_earn_about_bot{ ushort(8167) };
inline constexpr phrase<lngtag_emoji> lng_channel_earn_about_link{ ushort(8168) };
inline constexpr phrase<> lng_channel_earn_overview_title{ ushort(8169) };
inline constexpr phrase<> lng_channel_earn_available{ ushort(8170) };
inline constexpr phrase<> lng_channel_earn_reward{ ushort(8171) };
inline constexpr phrase<> lng_channel_earn_total{ ushort(8172) };
inline constexpr phrase<> lng_channel_earn_balance_title{ ushort(8173) };
inline constexpr phrase<> lng_channel_earn_balance_button{ ushort(8174) };
inline constexpr phrase<> lng_channel_earn_balance_password_title{ ushort(8175) };
inline constexpr phrase<> lng_channel_earn_balance_password_description{ ushort(8176) };
inline constexpr phrase<lngtag_link> lng_channel_earn_balance_about{ ushort(8177) };
inline constexpr phrase<lngtag_link> lng_channel_earn_balance_about_temp{ ushort(8178) };
inline constexpr phrase<> lng_channel_earn_transfer_sure_about1{ ushort(8179) };
inline constexpr phrase<> lng_channel_earn_transfer_sure_about2{ ushort(8180) };
inline constexpr phrase<> lng_channel_earn_history_title{ ushort(8181) };
inline constexpr phrase<> lng_channel_earn_history_in{ ushort(8182) };
inline constexpr phrase<> lng_channel_earn_history_in_about{ ushort(8183) };
inline constexpr phrase<> lng_channel_earn_history_out{ ushort(8184) };
inline constexpr phrase<> lng_channel_earn_history_out_failed{ ushort(8185) };
inline constexpr phrase<> lng_channel_earn_history_out_about_failed{ ushort(8186) };
inline constexpr phrase<> lng_channel_earn_history_out_button{ ushort(8187) };
inline constexpr phrase<> lng_channel_earn_history_return{ ushort(8188) };
inline constexpr phrase<> lng_channel_earn_history_return_about{ ushort(8189) };
inline constexpr phrase<> lng_channel_earn_history_pending{ ushort(8190) };
inline constexpr phrase<> lng_channel_earn_history_failed{ ushort(8191) };
inline constexpr phrase<lngtag_count> lng_channel_earn_history_show_more{ ushort(8192) };
inline constexpr phrase<> lng_channel_earn_off{ ushort(8198) };
inline constexpr phrase<> lng_channel_earn_off_about{ ushort(8199) };
inline constexpr phrase<> lng_channel_earn_cpm_min{ ushort(8200) };
inline constexpr phrase<lngtag_count, lngtag_emoji> lng_channel_earn_cpm{ ushort(8201) };
inline constexpr phrase<> lng_channel_earn_learn_title{ ushort(8207) };
inline constexpr phrase<> lng_channel_earn_bot_learn_title{ ushort(8208) };
inline constexpr phrase<> lng_channel_earn_learn_in_subtitle{ ushort(8209) };
inline constexpr phrase<> lng_channel_earn_learn_in_about{ ushort(8210) };
inline constexpr phrase<> lng_channel_earn_learn_bot_in_about{ ushort(8211) };
inline constexpr phrase<> lng_channel_earn_learn_split_subtitle{ ushort(8212) };
inline constexpr phrase<> lng_channel_earn_learn_split_about{ ushort(8213) };
inline constexpr phrase<> lng_channel_earn_learn_out_subtitle{ ushort(8214) };
inline constexpr phrase<> lng_channel_earn_learn_out_about{ ushort(8215) };
inline constexpr phrase<lngtag_emoji> lng_channel_earn_learn_coin_title{ ushort(8216) };
inline constexpr phrase<lngtag_link> lng_channel_earn_learn_coin_about{ ushort(8217) };
inline constexpr phrase<> lng_channel_earn_learn_close{ ushort(8218) };
inline constexpr phrase<> lng_channel_earn_learn_coin_link{ ushort(8219) };
inline constexpr phrase<> lng_channel_earn_chart_top_hours{ ushort(8220) };
inline constexpr phrase<> lng_channel_earn_chart_revenue{ ushort(8221) };
inline constexpr phrase<> lng_channel_earn_chart_overriden_detail_credits{ ushort(8222) };
inline constexpr phrase<> lng_channel_earn_chart_overriden_detail_currency{ ushort(8223) };
inline constexpr phrase<> lng_channel_earn_chart_overriden_detail_usd{ ushort(8224) };
inline constexpr phrase<> lng_channel_earn_currency_history{ ushort(8225) };
inline constexpr phrase<> lng_channel_earn_credits_history{ ushort(8226) };
inline constexpr phrase<> lng_channel_earn_out_check_password_about{ ushort(8227) };
inline constexpr phrase<> lng_bot_earn_title{ ushort(8228) };
inline constexpr phrase<> lng_bot_earn_chart_revenue{ ushort(8229) };
inline constexpr phrase<> lng_bot_earn_overview_title{ ushort(8230) };
inline constexpr phrase<> lng_bot_earn_available{ ushort(8231) };
inline constexpr phrase<> lng_bot_earn_reward{ ushort(8232) };
inline constexpr phrase<> lng_bot_earn_total{ ushort(8233) };
inline constexpr phrase<> lng_bot_earn_balance_title{ ushort(8234) };
inline constexpr phrase<> lng_bot_earn_balance_about{ ushort(8235) };
inline constexpr phrase<> lng_bot_earn_balance_about_url{ ushort(8236) };
inline constexpr phrase<lngtag_count, lngtag_emoji> lng_bot_earn_balance_button{ ushort(8237) };
inline constexpr phrase<> lng_bot_earn_balance_button_all{ ushort(8243) };
inline constexpr phrase<> lng_bot_earn_balance_button_locked{ ushort(8244) };
inline constexpr phrase<> lng_bot_earn_balance_button_buy_ads{ ushort(8245) };
inline constexpr phrase<lngtag_link> lng_bot_earn_learn_credits_out_about{ ushort(8246) };
inline constexpr phrase<lngtag_link> lng_self_earn_learn_credits_out_about{ ushort(8247) };
inline constexpr phrase<> lng_bot_earn_out_ph{ ushort(8248) };
inline constexpr phrase<lngtag_amount> lng_bot_earn_out_ph_max{ ushort(8249) };
inline constexpr phrase<> lng_bot_earn_balance_password_title{ ushort(8250) };
inline constexpr phrase<> lng_bot_earn_balance_password_description{ ushort(8251) };
inline constexpr phrase<lngtag_link> lng_bot_earn_credits_out_minimal{ ushort(8252) };
inline constexpr phrase<lngtag_count> lng_bot_earn_credits_out_minimal_link{ ushort(8253) };
inline constexpr phrase<lngtag_text> lng_bot_copy_text_tooltip{ ushort(8259) };
inline constexpr phrase<> lng_contact_add{ ushort(8260) };
inline constexpr phrase<> lng_contact_send_message{ ushort(8261) };
inline constexpr phrase<> lng_iv_open_in_browser{ ushort(8262) };
inline constexpr phrase<> lng_iv_share{ ushort(8263) };
inline constexpr phrase<> lng_iv_join_channel{ ushort(8264) };
inline constexpr phrase<> lng_iv_window_title{ ushort(8265) };
inline constexpr phrase<> lng_iv_wrong_layout{ ushort(8266) };
inline constexpr phrase<> lng_iv_not_supported{ ushort(8267) };
inline constexpr phrase<> lng_iv_zoom_tooltip_ctrl{ ushort(8268) };
inline constexpr phrase<> lng_iv_zoom_tooltip_cmd{ ushort(8269) };
inline constexpr phrase<> lng_limit_download_title{ ushort(8270) };
inline constexpr phrase<lngtag_link, lngtag_increase> lng_limit_download_subscribe{ ushort(8271) };
inline constexpr phrase<lngtag_count> lng_limit_download_increase_times{ ushort(8272) };
inline constexpr phrase<lngtag_percent> lng_limit_download_increase_speed{ ushort(8278) };
inline constexpr phrase<> lng_limit_download_subscribe_link{ ushort(8279) };
inline constexpr phrase<> lng_limit_upload_title{ ushort(8280) };
inline constexpr phrase<lngtag_link, lngtag_increase> lng_limit_upload_subscribe{ ushort(8281) };
inline constexpr phrase<lngtag_count> lng_limit_upload_increase_times{ ushort(8282) };
inline constexpr phrase<lngtag_percent> lng_limit_upload_increase_speed{ ushort(8288) };
inline constexpr phrase<> lng_limit_upload_subscribe_link{ ushort(8289) };
inline constexpr phrase<> lng_recent_frequent{ ushort(8290) };
inline constexpr phrase<> lng_recent_frequent_all{ ushort(8291) };
inline constexpr phrase<> lng_recent_frequent_collapse{ ushort(8292) };
inline constexpr phrase<> lng_recent_title{ ushort(8293) };
inline constexpr phrase<> lng_recent_clear{ ushort(8294) };
inline constexpr phrase<> lng_recent_clear_sure{ ushort(8295) };
inline constexpr phrase<> lng_recent_remove{ ushort(8296) };
inline constexpr phrase<> lng_recent_clear_all{ ushort(8297) };
inline constexpr phrase<> lng_recent_hide_top{ ushort(8298) };
inline constexpr phrase<> lng_recent_hide_sure{ ushort(8299) };
inline constexpr phrase<> lng_recent_hide_button{ ushort(8300) };
inline constexpr phrase<> lng_recent_none{ ushort(8301) };
inline constexpr phrase<> lng_recent_chats{ ushort(8302) };
inline constexpr phrase<> lng_recent_channels{ ushort(8303) };
inline constexpr phrase<> lng_recent_apps{ ushort(8304) };
inline constexpr phrase<> lng_recent_posts{ ushort(8305) };
inline constexpr phrase<> lng_all_photos{ ushort(8306) };
inline constexpr phrase<> lng_all_videos{ ushort(8307) };
inline constexpr phrase<> lng_all_downloads{ ushort(8308) };
inline constexpr phrase<> lng_all_links{ ushort(8309) };
inline constexpr phrase<> lng_all_files{ ushort(8310) };
inline constexpr phrase<> lng_all_music{ ushort(8311) };
inline constexpr phrase<> lng_all_voice{ ushort(8312) };
inline constexpr phrase<> lng_channels_none_title{ ushort(8313) };
inline constexpr phrase<> lng_channels_none_about{ ushort(8314) };
inline constexpr phrase<> lng_channels_your_title{ ushort(8315) };
inline constexpr phrase<> lng_channels_your_more{ ushort(8316) };
inline constexpr phrase<> lng_channels_your_less{ ushort(8317) };
inline constexpr phrase<> lng_channels_recommended{ ushort(8318) };
inline constexpr phrase<> lng_bot_apps_your{ ushort(8319) };
inline constexpr phrase<> lng_bot_apps_popular{ ushort(8320) };
inline constexpr phrase<lngtag_link> lng_bot_apps_which{ ushort(8321) };
inline constexpr phrase<> lng_bot_apps_which_link{ ushort(8322) };
inline constexpr phrase<> lng_posts_title{ ushort(8323) };
inline constexpr phrase<> lng_posts_start{ ushort(8324) };
inline constexpr phrase<> lng_posts_subscribe{ ushort(8325) };
inline constexpr phrase<> lng_posts_need_subscribe{ ushort(8326) };
inline constexpr phrase<lngtag_query> lng_posts_search_button{ ushort(8327) };
inline constexpr phrase<lngtag_count> lng_posts_remaining{ ushort(8328) };
inline constexpr phrase<> lng_posts_subtitle_empty{ ushort(8334) };
inline constexpr phrase<> lng_posts_subtitle{ ushort(8335) };
inline constexpr phrase<> lng_posts_limit_reached{ ushort(8336) };
inline constexpr phrase<lngtag_count> lng_posts_limit_about{ ushort(8337) };
inline constexpr phrase<lngtag_cost> lng_posts_limit_search_paid{ ushort(8343) };
inline constexpr phrase<lngtag_duration> lng_posts_limit_unlocks{ ushort(8344) };
inline constexpr phrase<lngtag_count> lng_posts_paid_spent{ ushort(8345) };
inline constexpr phrase<> lng_popular_apps_info_title{ ushort(8351) };
inline constexpr phrase<lngtag_bot, lngtag_link> lng_popular_apps_info_text{ ushort(8352) };
inline constexpr phrase<> lng_popular_apps_info_bot{ ushort(8353) };
inline constexpr phrase<> lng_popular_apps_info_here{ ushort(8354) };
inline constexpr phrase<> lng_popular_apps_info_url{ ushort(8355) };
inline constexpr phrase<> lng_popular_apps_info_confirm{ ushort(8356) };
inline constexpr phrase<> lng_font_box_title{ ushort(8357) };
inline constexpr phrase<> lng_font_default{ ushort(8358) };
inline constexpr phrase<> lng_font_system{ ushort(8359) };
inline constexpr phrase<> lng_font_not_found{ ushort(8360) };
inline constexpr phrase<> lng_search_tab_my_messages{ ushort(8361) };
inline constexpr phrase<> lng_search_tab_this_topic{ ushort(8362) };
inline constexpr phrase<> lng_search_tab_this_chat{ ushort(8363) };
inline constexpr phrase<> lng_search_tab_this_channel{ ushort(8364) };
inline constexpr phrase<> lng_search_tab_this_group{ ushort(8365) };
inline constexpr phrase<> lng_search_tab_public_posts{ ushort(8366) };
inline constexpr phrase<> lng_search_tab_no_results{ ushort(8367) };
inline constexpr phrase<lngtag_query> lng_search_tab_no_results_text{ ushort(8368) };
inline constexpr phrase<> lng_search_tab_no_results_retry{ ushort(8369) };
inline constexpr phrase<> lng_search_tab_by_hashtag{ ushort(8370) };
inline constexpr phrase<> lng_search_tab_try_in_all{ ushort(8371) };
inline constexpr phrase<> lng_contact_details_button{ ushort(8372) };
inline constexpr phrase<> lng_contact_details_title{ ushort(8373) };
inline constexpr phrase<> lng_contact_details_phone{ ushort(8374) };
inline constexpr phrase<> lng_contact_details_phone_main{ ushort(8375) };
inline constexpr phrase<> lng_contact_details_phone_home{ ushort(8376) };
inline constexpr phrase<> lng_contact_details_phone_mobile{ ushort(8377) };
inline constexpr phrase<> lng_contact_details_phone_work{ ushort(8378) };
inline constexpr phrase<> lng_contact_details_phone_other{ ushort(8379) };
inline constexpr phrase<> lng_contact_details_email{ ushort(8380) };
inline constexpr phrase<> lng_contact_details_address{ ushort(8381) };
inline constexpr phrase<> lng_contact_details_url{ ushort(8382) };
inline constexpr phrase<> lng_contact_details_note{ ushort(8383) };
inline constexpr phrase<> lng_contact_details_birthday{ ushort(8384) };
inline constexpr phrase<> lng_contact_details_organization{ ushort(8385) };
inline constexpr phrase<> lng_qr_box_quality{ ushort(8386) };
inline constexpr phrase<> lng_qr_box_quality1{ ushort(8387) };
inline constexpr phrase<> lng_qr_box_quality2{ ushort(8388) };
inline constexpr phrase<> lng_qr_box_quality3{ ushort(8389) };
inline constexpr phrase<> lng_qr_box_transparent_background{ ushort(8390) };
inline constexpr phrase<> lng_qr_box_font_size{ ushort(8391) };
inline constexpr phrase<> lng_frozen_bar_title{ ushort(8392) };
inline constexpr phrase<lngtag_arrow> lng_frozen_bar_text{ ushort(8393) };
inline constexpr phrase<> lng_frozen_restrict_title{ ushort(8394) };
inline constexpr phrase<> lng_frozen_restrict_text{ ushort(8395) };
inline constexpr phrase<> lng_frozen_title{ ushort(8396) };
inline constexpr phrase<> lng_frozen_subtitle1{ ushort(8397) };
inline constexpr phrase<> lng_frozen_text1{ ushort(8398) };
inline constexpr phrase<> lng_frozen_subtitle2{ ushort(8399) };
inline constexpr phrase<> lng_frozen_text2{ ushort(8400) };
inline constexpr phrase<> lng_frozen_subtitle3{ ushort(8401) };
inline constexpr phrase<lngtag_link, lngtag_date> lng_frozen_text3{ ushort(8402) };
inline constexpr phrase<> lng_frozen_appeal_button{ ushort(8403) };
inline constexpr phrase<> lng_age_verify_title{ ushort(8404) };
inline constexpr phrase<> lng_age_verify_mobile{ ushort(8405) };
inline constexpr phrase<> lng_age_verify_here{ ushort(8406) };
inline constexpr phrase<> lng_age_verify_button{ ushort(8407) };
inline constexpr phrase<> lng_age_verify_sorry_title{ ushort(8408) };
inline constexpr phrase<> lng_age_verify_sorry_text{ ushort(8409) };
inline constexpr phrase<> lng_context_bank_card_copy{ ushort(8410) };
inline constexpr phrase<> lng_context_bank_card_copied{ ushort(8411) };
inline constexpr phrase<> lng_wnd_choose_program_menu{ ushort(8412) };
inline constexpr phrase<> lng_wnd_menu_undo{ ushort(8413) };
inline constexpr phrase<> lng_wnd_menu_redo{ ushort(8414) };
inline constexpr phrase<> lng_linux_menu_undo{ ushort(8415) };
inline constexpr phrase<> lng_linux_menu_redo{ ushort(8416) };
inline constexpr phrase<> lng_linux_menu_tools{ ushort(8417) };
inline constexpr phrase<> lng_linux_menu_help{ ushort(8418) };
inline constexpr phrase<> lng_linux_no_audio_prefs{ ushort(8419) };
inline constexpr phrase<> lng_mac_choose_program_menu{ ushort(8420) };
inline constexpr phrase<> lng_mac_choose_app{ ushort(8421) };
inline constexpr phrase<lngtag_file> lng_mac_choose_text{ ushort(8422) };
inline constexpr phrase<> lng_mac_enable_filter{ ushort(8423) };
inline constexpr phrase<> lng_mac_recommended_apps{ ushort(8424) };
inline constexpr phrase<> lng_mac_all_apps{ ushort(8425) };
inline constexpr phrase<> lng_mac_always_open_with{ ushort(8426) };
inline constexpr phrase<lngtag_file> lng_mac_this_app_can_open{ ushort(8427) };
inline constexpr phrase<lngtag_file> lng_mac_not_known_app{ ushort(8428) };
inline constexpr phrase<> lng_mac_menu_services{ ushort(8429) };
inline constexpr phrase<lngtag_telegram> lng_mac_menu_hide_telegram{ ushort(8430) };
inline constexpr phrase<> lng_mac_menu_hide_others{ ushort(8431) };
inline constexpr phrase<> lng_mac_menu_show_all{ ushort(8432) };
inline constexpr phrase<> lng_mac_menu_preferences{ ushort(8433) };
inline constexpr phrase<lngtag_telegram> lng_mac_menu_quit_telegram{ ushort(8434) };
inline constexpr phrase<lngtag_telegram> lng_mac_menu_about_telegram{ ushort(8435) };
inline constexpr phrase<> lng_mac_menu_file{ ushort(8436) };
inline constexpr phrase<> lng_mac_menu_logout{ ushort(8437) };
inline constexpr phrase<> lng_mac_menu_edit{ ushort(8438) };
inline constexpr phrase<> lng_mac_menu_undo{ ushort(8439) };
inline constexpr phrase<> lng_mac_menu_redo{ ushort(8440) };
inline constexpr phrase<> lng_mac_menu_cut{ ushort(8441) };
inline constexpr phrase<> lng_mac_menu_copy{ ushort(8442) };
inline constexpr phrase<> lng_mac_menu_paste{ ushort(8443) };
inline constexpr phrase<> lng_mac_menu_delete{ ushort(8444) };
inline constexpr phrase<> lng_mac_menu_select_all{ ushort(8445) };
inline constexpr phrase<> lng_mac_menu_window{ ushort(8446) };
inline constexpr phrase<> lng_mac_menu_contacts{ ushort(8447) };
inline constexpr phrase<> lng_mac_menu_add_contact{ ushort(8448) };
inline constexpr phrase<> lng_mac_menu_new_group{ ushort(8449) };
inline constexpr phrase<> lng_mac_menu_new_channel{ ushort(8450) };
inline constexpr phrase<> lng_mac_menu_show{ ushort(8451) };
inline constexpr phrase<> lng_mac_menu_emoji_and_symbols{ ushort(8452) };
inline constexpr phrase<> lng_mac_menu_fullscreen{ ushort(8453) };
inline constexpr phrase<> lng_mac_menu_player_pause{ ushort(8454) };
inline constexpr phrase<> lng_mac_menu_player_resume{ ushort(8455) };
inline constexpr phrase<> lng_mac_menu_player_next{ ushort(8456) };
inline constexpr phrase<> lng_mac_menu_player_previous{ ushort(8457) };
inline constexpr phrase<> lng_mac_touchbar_favorite_stickers{ ushort(8458) };
inline constexpr phrase<lngtag_text> lng_mac_hold_to_quit{ ushort(8459) };
inline constexpr phrase<> ayu_AyuPreferences{ ushort(8460) };
inline constexpr phrase<> ayu_DocsText{ ushort(8461) };
inline constexpr phrase<> ayu_CategoryGeneral{ ushort(8462) };
inline constexpr phrase<> ayu_CategoryAppearance{ ushort(8463) };
inline constexpr phrase<> ayu_CategoryChats{ ushort(8464) };
inline constexpr phrase<> ayu_CategoryOther{ ushort(8465) };
inline constexpr phrase<> ayu_CategoryGhostMode{ ushort(8466) };
inline constexpr phrase<> ayu_CategorySpy{ ushort(8467) };
inline constexpr phrase<> ayu_CategoryFilters{ ushort(8468) };
inline constexpr phrase<> ayu_CategoryCustomization{ ushort(8469) };
inline constexpr phrase<> ayu_GhostEssentialsHeader{ ushort(8470) };
inline constexpr phrase<> ayu_DontReadMessages{ ushort(8471) };
inline constexpr phrase<> ayu_DontReadStories{ ushort(8472) };
inline constexpr phrase<> ayu_DontSendOnlinePackets{ ushort(8473) };
inline constexpr phrase<> ayu_DontSendUploadProgress{ ushort(8474) };
inline constexpr phrase<> ayu_SendOfflinePacketAfterOnline{ ushort(8475) };
inline constexpr phrase<> ayu_GhostModeOptionLongTapDescription{ ushort(8476) };
inline constexpr phrase<> ayu_MarkReadAfterAction{ ushort(8477) };
inline constexpr phrase<> ayu_MarkReadAfterActionDescription{ ushort(8478) };
inline constexpr phrase<> ayu_MarkReadAfterSend{ ushort(8479) };
inline constexpr phrase<> ayu_MarkReadAfterReaction{ ushort(8480) };
inline constexpr phrase<> ayu_MarkReadAfterPoll{ ushort(8481) };
inline constexpr phrase<> ayu_UseScheduledMessages{ ushort(8482) };
inline constexpr phrase<> ayu_UseScheduledMessagesDescription{ ushort(8483) };
inline constexpr phrase<> ayu_SendWithoutSoundByDefault{ ushort(8484) };
inline constexpr phrase<> ayu_SendWithoutSoundByDefaultNever{ ushort(8485) };
inline constexpr phrase<> ayu_SendWithoutSoundByDefaultInGhostMode{ ushort(8486) };
inline constexpr phrase<> ayu_SendWithoutSoundByDefaultAlways{ ushort(8487) };
inline constexpr phrase<> ayu_SendWithoutSoundByDefaultDescription{ ushort(8488) };
inline constexpr phrase<> ayu_SuggestGhostModeBeforeViewingStory{ ushort(8489) };
inline constexpr phrase<> ayu_SuggestGhostModeBeforeViewingStoryDescription{ ushort(8490) };
inline constexpr phrase<> ayu_SpyEssentialsHeader{ ushort(8491) };
inline constexpr phrase<> ayu_SaveDeletedMessages{ ushort(8492) };
inline constexpr phrase<> ayu_SaveMessagesHistory{ ushort(8493) };
inline constexpr phrase<> ayu_MessageSavingSaveMedia{ ushort(8494) };
inline constexpr phrase<> ayu_MessageSavingSaveMediaHint{ ushort(8495) };
inline constexpr phrase<> ayu_MessageSavingSaveMediaInPrivateChats{ ushort(8496) };
inline constexpr phrase<> ayu_MessageSavingSaveMediaInPublicChannels{ ushort(8497) };
inline constexpr phrase<> ayu_MessageSavingSaveMediaInPrivateChannels{ ushort(8498) };
inline constexpr phrase<> ayu_MessageSavingSaveMediaInPublicGroups{ ushort(8499) };
inline constexpr phrase<> ayu_MessageSavingSaveMediaInPrivateGroups{ ushort(8500) };
inline constexpr phrase<> ayu_MessageSavingSaveMediaHintPopup{ ushort(8501) };
inline constexpr phrase<> ayu_AttachmentsFolderMaxSizeHeader{ ushort(8502) };
inline constexpr phrase<> ayu_AttachmentsFolderMaxSizeDescription{ ushort(8503) };
inline constexpr phrase<> ayu_MaximumMediaSizeCellular{ ushort(8504) };
inline constexpr phrase<> ayu_MaximumMediaSizeWiFi{ ushort(8505) };
inline constexpr phrase<> ayu_MessageSavingOtherHeader{ ushort(8506) };
inline constexpr phrase<> ayu_MessageSavingSaveForBots{ ushort(8507) };
inline constexpr phrase<> ayu_MessageSavingSavePath{ ushort(8508) };
inline constexpr phrase<> ayu_MessageSavingSavePathTitle{ ushort(8509) };
inline constexpr phrase<> ayu_SpySaveReadMarks{ ushort(8510) };
inline constexpr phrase<> ayu_SpySaveReadMarksDescription{ ushort(8511) };
inline constexpr phrase<> ayu_SpySaveLocalOnline{ ushort(8512) };
inline constexpr phrase<> ayu_SpySaveLocalOnlineDescription{ ushort(8513) };
inline constexpr phrase<> ayu_ExportDatabaseButton{ ushort(8514) };
inline constexpr phrase<> ayu_ImportDatabaseButton{ ushort(8515) };
inline constexpr phrase<> ayu_QoLTogglesHeader{ ushort(8516) };
inline constexpr phrase<> ayu_KeepAliveService{ ushort(8517) };
inline constexpr phrase<> ayu_DisableAds{ ushort(8518) };
inline constexpr phrase<> ayu_DisableStories{ ushort(8519) };
inline constexpr phrase<> ayu_DisableCustomBackgrounds{ ushort(8520) };
inline constexpr phrase<> ayu_SmoothScroll{ ushort(8521) };
inline constexpr phrase<> ayu_DisableNotificationsDelay{ ushort(8522) };
inline constexpr phrase<> ayu_LocalPremium{ ushort(8523) };
inline constexpr phrase<> ayu_DisplayGhostStatus{ ushort(8524) };
inline constexpr phrase<> ayu_CopyUsernameAsLink{ ushort(8525) };
inline constexpr phrase<> ayu_HideChannelReactions{ ushort(8526) };
inline constexpr phrase<> ayu_HideGroupReactions{ ushort(8527) };
inline constexpr phrase<> ayu_HideReactions{ ushort(8528) };
inline constexpr phrase<> ayu_HideReactionsInChannels{ ushort(8529) };
inline constexpr phrase<> ayu_HideReactionsInGroups{ ushort(8530) };
inline constexpr phrase<> ayu_QuickAdminShortcuts{ ushort(8531) };
inline constexpr phrase<> ayu_TranslationProvider{ ushort(8532) };
inline constexpr phrase<> ayu_LinksHeader{ ushort(8533) };
inline constexpr phrase<> ayu_LinksChannel{ ushort(8534) };
inline constexpr phrase<> ayu_LinksChats{ ushort(8535) };
inline constexpr phrase<> ayu_LinksTranslate{ ushort(8536) };
inline constexpr phrase<> ayu_LinksDocumentation{ ushort(8537) };
inline constexpr phrase<> ayu_CategoriesHeader{ ushort(8538) };
inline constexpr phrase<> ayu_SupportHeader{ ushort(8539) };
inline constexpr phrase<> ayu_SupportDescription1{ ushort(8540) };
inline constexpr phrase<lngtag_item> ayu_SupportDescription2{ ushort(8541) };
inline constexpr phrase<> ayu_SupportBoxHeader{ ushort(8542) };
inline constexpr phrase<> ayu_SupportBoxInfo{ ushort(8543) };
inline constexpr phrase<> ayu_SupportBoxMakeDonationHeader{ ushort(8544) };
inline constexpr phrase<lngtag_amount1, lngtag_amount2> ayu_SupportBoxMakeDonationInfo{ ushort(8545) };
inline constexpr phrase<> ayu_SupportBoxSendProofHeader{ ushort(8546) };
inline constexpr phrase<lngtag_item> ayu_SupportBoxSendProofInfo{ ushort(8547) };
inline constexpr phrase<> ayu_SupportBoxReceiveBadgeHeader{ ushort(8548) };
inline constexpr phrase<> ayu_SupportBoxReceiveBadgeInfo{ ushort(8549) };
inline constexpr phrase<> ayu_CrashReporting{ ushort(8550) };
inline constexpr phrase<> ayu_CrashReportingDescription{ ushort(8551) };
inline constexpr phrase<> ayu_ResetSettings{ ushort(8552) };
inline constexpr phrase<> ayu_ResetSettingsConfirmation{ ushort(8553) };
inline constexpr phrase<> ayu_DisableColorfulCover{ ushort(8554) };
inline constexpr phrase<> ayu_EnableColorfulCover{ ushort(8555) };
inline constexpr phrase<> ayu_CustomizationHeader{ ushort(8556) };
inline constexpr phrase<> ayu_DeletedMarkText{ ushort(8557) };
inline constexpr phrase<> ayu_DeletedMarkNothing{ ushort(8558) };
inline constexpr phrase<> ayu_DeletedMarkTrashBin{ ushort(8559) };
inline constexpr phrase<> ayu_DeletedMarkCross{ ushort(8560) };
inline constexpr phrase<> ayu_DeletedMarkEyeCrossed{ ushort(8561) };
inline constexpr phrase<> ayu_EditedMarkText{ ushort(8562) };
inline constexpr phrase<> ayu_ReplaceMarksWithIcons{ ushort(8563) };
inline constexpr phrase<> ayu_SemiTransparentDeletedMessages{ ushort(8564) };
inline constexpr phrase<> ayu_HideNotificationCounters{ ushort(8565) };
inline constexpr phrase<> ayu_HideNotificationBadge{ ushort(8566) };
inline constexpr phrase<> ayu_HideNotificationBadgeDescription{ ushort(8567) };
inline constexpr phrase<> ayu_HideAllChats{ ushort(8568) };
inline constexpr phrase<> ayu_ChannelBottomButton{ ushort(8569) };
inline constexpr phrase<> ayu_ChannelBottomButtonHide{ ushort(8570) };
inline constexpr phrase<> ayu_ChannelBottomButtonMute{ ushort(8571) };
inline constexpr phrase<> ayu_ChannelBottomButtonDiscuss{ ushort(8572) };
inline constexpr phrase<> ayu_SettingsShowID{ ushort(8573) };
inline constexpr phrase<> ayu_SettingsShowID_Hide{ ushort(8574) };
inline constexpr phrase<> ayu_SettingsShowMessageShot{ ushort(8575) };
inline constexpr phrase<> ayu_SettingsShowMessageShotDescription{ ushort(8576) };
inline constexpr phrase<> ayu_SettingsRecentStickersCount{ ushort(8577) };
inline constexpr phrase<> ayu_SettingsCustomizationHint{ ushort(8578) };
inline constexpr phrase<> ayu_MaterialSwitches{ ushort(8579) };
inline constexpr phrase<> ayu_RemoveMessageTail{ ushort(8580) };
inline constexpr phrase<> ayu_HideShareButton{ ushort(8581) };
inline constexpr phrase<> ayu_ChatFoldersHeader{ ushort(8582) };
inline constexpr phrase<> ayu_SettingsContextMenuTitle{ ushort(8583) };
inline constexpr phrase<> ayu_SettingsContextMenuDescription{ ushort(8584) };
inline constexpr phrase<> ayu_SettingsContextMenuItemHidden{ ushort(8585) };
inline constexpr phrase<> ayu_SettingsContextMenuItemShown{ ushort(8586) };
inline constexpr phrase<> ayu_SettingsContextMenuItemExtended{ ushort(8587) };
inline constexpr phrase<> ayu_SettingsContextMenuReactionsPanel{ ushort(8588) };
inline constexpr phrase<> ayu_SettingsContextMenuViewsPanel{ ushort(8589) };
inline constexpr phrase<> ayu_ContextMenuElementsHeader{ ushort(8590) };
inline constexpr phrase<> ayu_MessageFieldElementsHeader{ ushort(8591) };
inline constexpr phrase<> ayu_MessageFieldPopupsHeader{ ushort(8592) };
inline constexpr phrase<> ayu_MessageFieldElementAttach{ ushort(8593) };
inline constexpr phrase<> ayu_MessageFieldElementCommands{ ushort(8594) };
inline constexpr phrase<> ayu_MessageFieldElementTTL{ ushort(8595) };
inline constexpr phrase<> ayu_MessageFieldElementEmoji{ ushort(8596) };
inline constexpr phrase<> ayu_MessageFieldElementVoice{ ushort(8597) };
inline constexpr phrase<> ayu_DrawerElementsHeader{ ushort(8598) };
inline constexpr phrase<> ayu_TrayElementsHeader{ ushort(8599) };
inline constexpr phrase<> ayu_SettingsWideMultiplier{ ushort(8600) };
inline constexpr phrase<> ayu_SettingsWideMultiplierDescription{ ushort(8601) };
inline constexpr phrase<> ayu_SettingsSpoofWebviewAsAndroid{ ushort(8602) };
inline constexpr phrase<> ayu_SettingsBiggerWindow{ ushort(8603) };
inline constexpr phrase<> ayu_SettingsIncreaseWebviewHeight{ ushort(8604) };
inline constexpr phrase<> ayu_SettingsIncreaseWebviewWidth{ ushort(8605) };
inline constexpr phrase<> ayu_ExportDataTitle{ ushort(8606) };
inline constexpr phrase<> ayu_ExportDataDescription{ ushort(8607) };
inline constexpr phrase<> ayu_ExportDataConfirm{ ushort(8608) };
inline constexpr phrase<> ayu_ExportDataCancel{ ushort(8609) };
inline constexpr phrase<> ayu_ExportDataSuccess{ ushort(8610) };
inline constexpr phrase<> ayu_ExportDataFailure{ ushort(8611) };
inline constexpr phrase<> ayu_ImportDataNotFound{ ushort(8612) };
inline constexpr phrase<> ayu_ImportDataTitle{ ushort(8613) };
inline constexpr phrase<> ayu_ImportDataDescription{ ushort(8614) };
inline constexpr phrase<> ayu_ImportDataConfirm{ ushort(8615) };
inline constexpr phrase<> ayu_ImportDataCancel{ ushort(8616) };
inline constexpr phrase<> ayu_ImportDataSuccess{ ushort(8617) };
inline constexpr phrase<> ayu_ImportDataFailure{ ushort(8618) };
inline constexpr phrase<> ayu_RegexFilters{ ushort(8619) };
inline constexpr phrase<lngtag_count> ayu_RegexFiltersAmount{ ushort(8620) };
inline constexpr phrase<lngtag_count> ayu_RegexFiltersExcludedAmount{ ushort(8626) };
inline constexpr phrase<> ayu_RegexFiltersHeader{ ushort(8632) };
inline constexpr phrase<> ayu_RegexFiltersShared{ ushort(8633) };
inline constexpr phrase<> ayu_FiltersShadowBan{ ushort(8634) };
inline constexpr phrase<> ayu_RegexFiltersExcluded{ ushort(8635) };
inline constexpr phrase<> ayu_RegexFiltersEnable{ ushort(8636) };
inline constexpr phrase<> ayu_FiltersHideFromBlocked{ ushort(8637) };
inline constexpr phrase<> ayu_FiltersHideFromBlockedNote{ ushort(8638) };
inline constexpr phrase<> ayu_RegexFiltersEnableSharedInChats{ ushort(8639) };
inline constexpr phrase<> ayu_RegexFiltersAdd{ ushort(8640) };
inline constexpr phrase<> ayu_RegexFiltersEdit{ ushort(8641) };
inline constexpr phrase<> ayu_RegexFiltersPlaceholder{ ushort(8642) };
inline constexpr phrase<> ayu_EnableExpression{ ushort(8643) };
inline constexpr phrase<> ayu_CaseInsensitiveExpression{ ushort(8644) };
inline constexpr phrase<> ayu_ReversedExpression{ ushort(8645) };
inline constexpr phrase<> ayu_RegexFiltersAddError{ ushort(8646) };
inline constexpr phrase<> ayu_RegexFilterQuickAdd{ ushort(8647) };
inline constexpr phrase<> ayu_RegexFilterBulletinText{ ushort(8648) };
inline constexpr phrase<> ayu_RegexFilterBulletinAction{ ushort(8649) };
inline constexpr phrase<> ayu_RegexFiltersListEmpty{ ushort(8650) };
inline constexpr phrase<> ayu_FiltersQuickShadowBan{ ushort(8651) };
inline constexpr phrase<> ayu_FiltersQuickUnshadowBan{ ushort(8652) };
inline constexpr phrase<> ayu_FiltersMenuSelectChat{ ushort(8653) };
inline constexpr phrase<> ayu_FiltersMenuImport{ ushort(8654) };
inline constexpr phrase<> ayu_FiltersMenuExport{ ushort(8655) };
inline constexpr phrase<> ayu_FiltersMenuClear{ ushort(8656) };
inline constexpr phrase<> ayu_FiltersImportTitle{ ushort(8657) };
inline constexpr phrase<> ayu_FiltersImportClipboard{ ushort(8658) };
inline constexpr phrase<> ayu_FiltersImportURL{ ushort(8659) };
inline constexpr phrase<> ayu_FiltersImportAction{ ushort(8660) };
inline constexpr phrase<> ayu_FiltersExportTitle{ ushort(8661) };
inline constexpr phrase<> ayu_FiltersExportClipboard{ ushort(8662) };
inline constexpr phrase<> ayu_FiltersExportURL{ ushort(8663) };
inline constexpr phrase<> ayu_FiltersToastFailPublish{ ushort(8664) };
inline constexpr phrase<> ayu_FiltersToastFailFetch{ ushort(8665) };
inline constexpr phrase<> ayu_FiltersToastFailImport{ ushort(8666) };
inline constexpr phrase<> ayu_FiltersToastFailNoChanges{ ushort(8667) };
inline constexpr phrase<> ayu_FiltersToastSuccess{ ushort(8668) };
inline constexpr phrase<> ayu_FiltersSheetTitle{ ushort(8669) };
inline constexpr phrase<lngtag_count> ayu_FiltersSheetNewFilters{ ushort(8670) };
inline constexpr phrase<lngtag_count> ayu_FiltersSheetRemovedFilters{ ushort(8676) };
inline constexpr phrase<lngtag_count> ayu_FiltersSheetUpdatedFilters{ ushort(8682) };
inline constexpr phrase<lngtag_count> ayu_FiltersSheetNewExclusions{ ushort(8688) };
inline constexpr phrase<lngtag_count> ayu_FiltersSheetRemovedExclusions{ ushort(8694) };
inline constexpr phrase<lngtag_count> ayu_FiltersSheetDialogsToResolve{ ushort(8700) };
inline constexpr phrase<> ayu_FiltersClearPopupTitle{ ushort(8706) };
inline constexpr phrase<> ayu_FiltersClearPopupText{ ushort(8707) };
inline constexpr phrase<> ayu_FiltersClearPopupActionText{ ushort(8708) };
inline constexpr phrase<> ayu_FiltersClearPopupAltActionText{ ushort(8709) };
inline constexpr phrase<> ayu_AppIconHeader{ ushort(8710) };
inline constexpr phrase<> ayu_IconDefault{ ushort(8711) };
inline constexpr phrase<> ayu_IconAlternative{ ushort(8712) };
inline constexpr phrase<> ayu_IconDiscord{ ushort(8713) };
inline constexpr phrase<> ayu_IconSpotify{ ushort(8714) };
inline constexpr phrase<> ayu_IconExtera{ ushort(8715) };
inline constexpr phrase<> ayu_IconNothing{ ushort(8716) };
inline constexpr phrase<> ayu_IconBard{ ushort(8717) };
inline constexpr phrase<> ayu_IconYaPlus{ ushort(8718) };
inline constexpr phrase<> ayu_IconAyuTyan{ ushort(8719) };
inline constexpr phrase<> ayu_WALMode{ ushort(8720) };
inline constexpr phrase<> ayu_PushNotificationCount{ ushort(8721) };
inline constexpr phrase<> ayu_AyuAttachments{ ushort(8722) };
inline constexpr phrase<> ayu_AyuDatabase{ ushort(8723) };
inline constexpr phrase<> ayu_TelegramCacheDatabase{ ushort(8724) };
inline constexpr phrase<> ayu_ConfirmationsTitle{ ushort(8725) };
inline constexpr phrase<> ayu_StickerConfirmation{ ushort(8726) };
inline constexpr phrase<> ayu_GIFConfirmation{ ushort(8727) };
inline constexpr phrase<> ayu_VoiceConfirmation{ ushort(8728) };
inline constexpr phrase<> ayu_MessageDetailsPC{ ushort(8729) };
inline constexpr phrase<> ayu_MessageDetailsViewsPC{ ushort(8730) };
inline constexpr phrase<> ayu_MessageDetailsSharesPC{ ushort(8731) };
inline constexpr phrase<> ayu_MessageDetailsDatePC{ ushort(8732) };
inline constexpr phrase<> ayu_MessageDetailsEditedDatePC{ ushort(8733) };
inline constexpr phrase<> ayu_MessageDetailsForwardedDatePC{ ushort(8734) };
inline constexpr phrase<> ayu_MessageDetailsFileSizePC{ ushort(8735) };
inline constexpr phrase<> ayu_MessageDetailsFileNamePC{ ushort(8736) };
inline constexpr phrase<> ayu_MessageDetailsFilePathPC{ ushort(8737) };
inline constexpr phrase<> ayu_MessageDetailsResolutionPC{ ushort(8738) };
inline constexpr phrase<> ayu_MessageDetailsBitratePC{ ushort(8739) };
inline constexpr phrase<> ayu_MessageDetailsMimeTypePC{ ushort(8740) };
inline constexpr phrase<> ayu_MessageDetailsDatacenterPC{ ushort(8741) };
inline constexpr phrase<> ayu_MessageDetailsPackOwnerPC{ ushort(8742) };
inline constexpr phrase<> ayu_MessageDetailsPackOwnerFetchingPC{ ushort(8743) };
inline constexpr phrase<> ayu_MessageDetailsPackOwnerNotFoundPC{ ushort(8744) };
inline constexpr phrase<> ayu_KillApp{ ushort(8745) };
inline constexpr phrase<> ayu_LReadMessages{ ushort(8746) };
inline constexpr phrase<> ayu_SReadMessages{ ushort(8747) };
inline constexpr phrase<> ayu_GhostModeToggle{ ushort(8748) };
inline constexpr phrase<> ayu_EnableGhostMode{ ushort(8749) };
inline constexpr phrase<> ayu_DisableGhostMode{ ushort(8750) };
inline constexpr phrase<> ayu_EnableGhostModeTray{ ushort(8751) };
inline constexpr phrase<> ayu_DisableGhostModeTray{ ushort(8752) };
inline constexpr phrase<> ayu_GhostModeEnabled{ ushort(8753) };
inline constexpr phrase<> ayu_GhostModeDisabled{ ushort(8754) };
inline constexpr phrase<> ayu_GhostModeGlobalSettings{ ushort(8755) };
inline constexpr phrase<> ayu_GhostModeGlobalSettingsDescription{ ushort(8756) };
inline constexpr phrase<> ayu_GhostModeSwitchedToGlobalSettings{ ushort(8757) };
inline constexpr phrase<> ayu_GhostModeSwitchedToIndividualSettings{ ushort(8758) };
inline constexpr phrase<> ayu_StreamerModeToggle{ ushort(8759) };
inline constexpr phrase<> ayu_EnableStreamerModeTray{ ushort(8760) };
inline constexpr phrase<> ayu_DisableStreamerModeTray{ ushort(8761) };
inline constexpr phrase<> ayu_EditsHistoryTitle{ ushort(8762) };
inline constexpr phrase<> ayu_EditsHistoryMenuText{ ushort(8763) };
inline constexpr phrase<> ayu_PeekOnlineMenuText{ ushort(8764) };
inline constexpr phrase<> ayu_ClearDeletedMenuText{ ushort(8765) };
inline constexpr phrase<> ayu_ViewDeletedMenuText{ ushort(8766) };
inline constexpr phrase<> ayu_ViewFiltersMenuText{ ushort(8767) };
inline constexpr phrase<> ayu_ReadExclusionMenuText{ ushort(8768) };
inline constexpr phrase<> ayu_TypingExclusionMenuText{ ushort(8769) };
inline constexpr phrase<> ayu_ExclusionTitle{ ushort(8770) };
inline constexpr phrase<> ayu_ExclusionUseDefault{ ushort(8771) };
inline constexpr phrase<> ayu_ExclusionDontRead{ ushort(8772) };
inline constexpr phrase<> ayu_ExclusionAlwaysRead{ ushort(8773) };
inline constexpr phrase<> ayu_ExclusionDontType{ ushort(8774) };
inline constexpr phrase<> ayu_ExclusionAlwaysType{ ushort(8775) };
inline constexpr phrase<> ayu_PeekOnlineSuccess{ ushort(8776) };
inline constexpr phrase<> ayu_OneViewTTL{ ushort(8777) };
inline constexpr phrase<> ayu_OnePlayTTL{ ushort(8778) };
inline constexpr phrase<> ayu_UserMessagesMenuText{ ushort(8779) };
inline constexpr phrase<> ayu_ReadUntilMenuText{ ushort(8780) };
inline constexpr phrase<> ayu_DeleteKeepLocally{ ushort(8781) };
inline constexpr phrase<> ayu_BoxActionReset{ ushort(8782) };
inline constexpr phrase<> ayu_ReadConfirmationBoxQuestion{ ushort(8783) };
inline constexpr phrase<> ayu_ReadConfirmationBoxActionText{ ushort(8784) };
inline constexpr phrase<> ayu_ClearDeletedMessagesTitle{ ushort(8785) };
inline constexpr phrase<> ayu_ClearDeletedMessagesText{ ushort(8786) };
inline constexpr phrase<> ayu_ClearDeletedMessagesActionText{ ushort(8787) };
inline constexpr phrase<> ayu_DeleteOwnMessages{ ushort(8788) };
inline constexpr phrase<> ayu_DeleteOwnMessagesConfirmation{ ushort(8789) };
inline constexpr phrase<> ayu_SuggestGhostModeTitle{ ushort(8790) };
inline constexpr phrase<> ayu_SuggestGhostModeStoryText{ ushort(8791) };
inline constexpr phrase<> ayu_SuggestGhostModeStoryActionTextYes{ ushort(8792) };
inline constexpr phrase<> ayu_SuggestGhostModeStoryActionTextNo{ ushort(8793) };
inline constexpr phrase<> ayu_FirstLaunchAlert{ ushort(8794) };
inline constexpr phrase<> ayu_LocalPremiumAlert{ ushort(8795) };
inline constexpr phrase<> ayu_ExteraChatsAlert{ ushort(8796) };
inline constexpr phrase<> ayu_HideNextViewsDescriptionAyu{ ushort(8797) };
inline constexpr phrase<> ayu_EnableGhostModeStories{ ushort(8798) };
inline constexpr phrase<> ayu_GhostModeIsActive{ ushort(8799) };
inline constexpr phrase<> ayu_SimpleQuotesAndReplies{ ushort(8800) };
inline constexpr phrase<> ayu_DisableSimilarChannels{ ushort(8801) };
inline constexpr phrase<> ayu_CollapseSimilarChannels{ ushort(8802) };
inline constexpr phrase<> ayu_HideSimilarChannelsTab{ ushort(8803) };
inline constexpr phrase<> ayu_UploadSpeedBoostPC{ ushort(8804) };
inline constexpr phrase<> ayu_MainFont{ ushort(8805) };
inline constexpr phrase<> ayu_MonospaceFont{ ushort(8806) };
inline constexpr phrase<> ayu_FontDefault{ ushort(8807) };
inline constexpr phrase<> ayu_CustomizeFontTitle{ ushort(8808) };
inline constexpr phrase<> ayu_MessageShotTopBarText{ ushort(8809) };
inline constexpr phrase<> ayu_MessageShotPreview{ ushort(8810) };
inline constexpr phrase<> ayu_MessageShotPreferences{ ushort(8811) };
inline constexpr phrase<> ayu_MessageShotCopy{ ushort(8812) };
inline constexpr phrase<> ayu_MessageShotSave{ ushort(8813) };
inline constexpr phrase<> ayu_MessageShotTheme{ ushort(8814) };
inline constexpr phrase<> ayu_MessageShotThemeDefault{ ushort(8815) };
inline constexpr phrase<> ayu_MessageShotThemeSelectTitle{ ushort(8816) };
inline constexpr phrase<> ayu_MessageShotThemeApply{ ushort(8817) };
inline constexpr phrase<> ayu_MessageShotShowBackground{ ushort(8818) };
inline constexpr phrase<> ayu_MessageShotShowDate{ ushort(8819) };
inline constexpr phrase<> ayu_MessageShotShowReactions{ ushort(8820) };
inline constexpr phrase<> ayu_MessageShotShowColorfulReplies{ ushort(8821) };
inline constexpr phrase<> ayu_SendAsSticker{ ushort(8822) };
inline constexpr phrase<> ayu_SendWithSound{ ushort(8823) };
inline constexpr phrase<> ayu_AyuForwardStatusPreparing{ ushort(8824) };
inline constexpr phrase<> ayu_AyuForwardStatusLoadingMedia{ ushort(8825) };
inline constexpr phrase<> ayu_AyuForwardStatusForwarding{ ushort(8826) };
inline constexpr phrase<> ayu_AyuForwardStatusFinished{ ushort(8827) };
inline constexpr phrase<lngtag_count1, lngtag_count2> ayu_AyuForwardStatusSentCount{ ushort(8828) };
inline constexpr phrase<lngtag_count1, lngtag_count2> ayu_AyuForwardStatusChunkCount{ ushort(8829) };
inline constexpr phrase<> ayu_JumpToBeginning{ ushort(8830) };
inline constexpr phrase<> ayu_ExpireMediaContextMenuText{ ushort(8831) };
inline constexpr phrase<> ayu_ExpiringVoiceMessageNote{ ushort(8832) };
inline constexpr phrase<> ayu_ExpiringVideoMessageNote{ ushort(8833) };
inline constexpr phrase<> ayu_UserNotFoundMessage{ ushort(8834) };
inline constexpr phrase<> ayu_DeleteDateMenuText{ ushort(8835) };
inline constexpr phrase<> ayu_ReadDateMenuText{ ushort(8836) };
inline constexpr phrase<> ayu_ContentsReadDateMenuText{ ushort(8837) };
inline constexpr phrase<> ayu_UnforwardableContextMenuText{ ushort(8838) };
inline constexpr phrase<> ayu_LikelyOfflineStatus{ ushort(8839) };
inline constexpr phrase<> ayu_GhostModeShortcut{ ushort(8840) };
inline constexpr phrase<> ayu_SettingsShowMessageSeconds{ ushort(8841) };
inline constexpr phrase<> ayu_ShowOnlyAddedEmojisAndStickers{ ushort(8842) };
inline constexpr phrase<> ayu_ContextCopyID{ ushort(8843) };
inline constexpr phrase<> ayu_IDCopiedToast{ ushort(8844) };
inline constexpr phrase<> ayu_ContextHideMessage{ ushort(8845) };
inline constexpr phrase<> ayu_ContextCopyCallbackData{ ushort(8846) };
inline constexpr phrase<> ayu_RegisterURLScheme{ ushort(8847) };
inline constexpr phrase<lngtag_item> ayu_SessionTerminated{ ushort(8848) };
inline constexpr phrase<> ayu_LocalPremiumNotice{ ushort(8849) };
inline constexpr phrase<lngtag_item> ayu_DeveloperPopup{ ushort(8850) };
inline constexpr phrase<lngtag_item> ayu_SupporterPopup{ ushort(8851) };
inline constexpr phrase<lngtag_item> ayu_OfficialResourcePopup{ ushort(8852) };
inline constexpr phrase<> ayu_SettingsWatermark{ ushort(8853) };
inline constexpr phrase<> ayu_SettingsDescription{ ushort(8854) };
inline constexpr phrase<> ayu_ConfirmationSticker{ ushort(8855) };
inline constexpr phrase<> ayu_ConfirmationGIF{ ushort(8856) };
inline constexpr phrase<> ayu_ConfirmationVoice{ ushort(8857) };
inline constexpr phrase<> ayu_IntroAbout{ ushort(8858) };
inline constexpr phrase<lngtag_api_link> ayu_AboutText1{ ushort(8859) };
inline constexpr phrase<> ayu_UpdateAyuGram{ ushort(8860) };
inline constexpr phrase<> ayu_UtilityRestartRequired{ ushort(8861) };

} // namespace tr

